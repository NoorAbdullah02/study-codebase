# x,y,z = (10,"imran",20)
# print(x)
# print(y)
# print(z)

# print("Hello My name is "+y)
# print(f"Hello My name is {y}")
# i = 5
# while i>0:
#     print("Hello")
#     i = i-2

# for i in range (1,5,1):
#     print("Hello")
    

# marks = [10,20,30,40]
# print(marks)

# marks.append(4)
# marks.sort()
# print(marks)
# marks.sort(reverse=True)
# print(marks)
# marks.insert(1,3)
# print(marks)

# tup = (10,20,30,40,50,10)

# print(tup.index(40))
# print(tup.count(10))

list = []

for i in range (3):
    n = int(input(""))
    list.append(n)

print(list)

copy = list.copy()

list.reverse()

if (list == copy):
    print("Number is Palindrome")
else:
    print("Not Palindrome")

