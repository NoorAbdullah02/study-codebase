from tkinter import *
import ast

root = Tk()
root.title("Noor Calculator")
root.configure(bg="#2b2b2b")
root.resizable(False, False)

i = 0

def get_Numbers(num):
    global i
    display.insert(i, num)
    i += 1

def get_operation(operator):
    global i
    length = len(operator)
    display.insert(i, operator)
    i += length

def clear_all():
    display.delete(0, END)

def calculate():
    entire_string = display.get()
    try:
        node = ast.parse(entire_string, mode="eval")
        result = eval(compile(node, '<string>', 'eval'))
        clear_all()
        display.insert(0, result)
    except Exception:
        clear_all()
        display.insert(0, "Error")

def undo():
    entire_string = display.get()
    if len(entire_string):
        new_string = entire_string[:-1]
        clear_all()
        display.insert(0, new_string)
    else:
        clear_all()

display = Entry(root, font=('Helvetica', 24), bd=8, insertwidth=2, width=16, borderwidth=4, justify='right', bg="#1c1c1c", fg="#ffffff")
display.grid(row=0, column=0, columnspan=6, padx=10, pady=20)

numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9]
counter = 0

for x in range(3):
    for y in range(3):
        button_text = numbers[counter]
        button = Button(root, text=button_text, width=5, height=2, font=('Helvetica', 18), bg="#ffffff", fg="#000000", 
                        activebackground="#e0e0e0", activeforeground="#000000", relief="flat", border=0,
                        command=lambda text=button_text: get_Numbers(text))
        button.grid(row=x+1, column=y, padx=10, pady=10)
        counter += 1

button = Button(root, text="0", width=5, height=2, font=('Helvetica', 18), bg="#ffffff", fg="#000000", 
                activebackground="#e0e0e0", activeforeground="#000000", relief="flat", border=0,
                command=lambda: get_Numbers(0))
button.grid(row=4, column=1, padx=10, pady=10)

operations = ['+', '-', '*', '/', '*3.14', '%', '(', '**', ')', '**2']
count = 0

for x in range(4):
    for y in range(3):
        if count < len(operations):
            button = Button(root, text=operations[count], width=5, height=2, font=('Helvetica', 18), bg="#001f3f", fg="#ffffff", 
                            activebackground="#003366", activeforeground="#ffffff", relief="flat", border=0,
                            command=lambda text=operations[count]: get_operation(text))
            button.grid(row=x+1, column=y+3, padx=10, pady=10)
            count += 1

Button(root, text="AC", width=5, height=2, font=('Helvetica', 18), bg="#f44336", fg="#ffffff", 
       activebackground="#e57373", activeforeground="#ffffff", relief="flat", border=0,
       command=clear_all).grid(row=4, column=0, padx=10, pady=10)

Button(root, text="=", width=5, height=2, font=('Helvetica', 18), bg="#ff9800", fg="#ffffff", 
       activebackground="#ffb74d", activeforeground="#ffffff", relief="flat", border=0,
       command=calculate).grid(row=4, column=2, padx=10, pady=10)

Button(root, text="<-", width=5, height=2, font=('Helvetica', 18), bg="#9e9e9e", fg="#ffffff", 
       activebackground="#bdbdbd", activeforeground="#ffffff", relief="flat", border=0,
       command=undo).grid(row=4, column=4, padx=10, pady=10)

root.mainloop()
