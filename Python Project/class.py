class Student:
    name = ""
    mark = ""
    def __init__(self):
        #self.name = name
       print("Hello")
    
    def add_sum(self,a,b):
     return a+b
    
    def __init__(self , name = "" , mark = ""):
       self.name = name
       self.mark = mark
    
    def display(self):
       print(self.name)
       print(self.mark)
    
s1 = Student()
print(s1.add_sum(10,20))

s1 = Student("Noor",10)

s1.display()
