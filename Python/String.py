# name = "012345678"
# # name[start:stop:stepover]
# print(name[0:5:2])
# print(name[::2])
# print(name[::-2])
# print(len(name))
# print(name[:len(name)])
# print(name.replace(str(5),str(9)))
# my_age1 = input("Enter Age ")
# my_age = 2024 - int(my_age1)
# print(f"My age is {my_age}")

# name = "Abdullah"
# password = "Noor"
# print(f"{name}, Your Password {'*'*len(password)} is {len(password)} digits long")

# List
# arr = [1,2,3,4,5]
# arr.insert(2,10)
# arr.extend([11,12])
# arr.append(100)
# print(arr)
# arr.remove(3)
# print(arr)
# arr.pop()
# print(arr)
# arr.clear()
# print(arr)

#arr = ['a','b','c','d','e','a']
# print(arr.index('d',0,4))
# print('g' in arr)
# print('f' in 'I am g')
# print (arr.count('a'))

#arr.sort()

# print(sorted(arr))
# print(arr)
# ar = arr.copy()
# print(ar)
# ar.sort()
# print(ar)
# ar.reverse()
# print(ar)
# print(ar[::-1])
# sentence = " "
# new_sentance = sentence.join(["I","am","Abdullah"])
# print(new_sentance)
# new_sentance1 = " ".join(["I","am","Abdullah"])
# print(new_sentance1)

# a,b,c,*imu,d= [1,2,3,4,5,6,7,8,9]
# print(a)
# print(b)
# print(c)
# print(imu)
# print(d)
# print (list(range(5,100)))

# imu = {
#     'a' : [2,3,4],
#     'b' : [4,6,7,9],
#     'c' : 4
# }
# print(imu['b'][2])

# new = [
#     {
#         'a' : [2,4,5,7],
#         'b' : [4,5,7,9],
#         'c' : [8,9,8,7]
#     },
#     {
#         'a' : "Imran",
#         'b' : "Noor",
#         'c' : [8,9,8,7]
#     }
# ]
# print(new[1]['a'])
# dictonary = {
#     123 : [1,2,3],
#     123 : [4,5,6],
#     'a' : "Hello",
#     'a' : "Imran"
# }
# print(dictonary[123])
# print(dictonary['a'])
# print(dictonary.get('f',-1))
# user2 = dict(name = "Abdullah")
# print(user2)
# print(12 in dictonary)
# print (123 in dictonary.keys())
# print("Imran" in dictonary.values())
# print(dictonary.items())
# new = dictonary.copy()
# dictonary.clear()
# print(dictonary)
# print(new)
# # print(new.pop(123))
# # print(new)
# # print(new.popitem())
# # print(new)
# print(new.update({'a' : 2}))
# print(new)
# Tuple
# x,y,*other = (1,2,3,4,5,6)
# print(other)
# new = (1,2,3,5,4,4)
# print(new.count(4))
# print(len(new))
# print(new.index(3))
# set
new = {1,2,3,4,5,6,5,4}
print(new)
