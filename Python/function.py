from functools import reduce
# def fun(li):
#     new_list = []
#     for item in li:
#      new_list.append(item*2)
#     return (new_list)

# print(fun([1,2,3]))
# Map Function 
# my_list = [1,2,3]
# def fun(item):
#     return item * 2
# print(list(map(fun,my_list)))
# print(my_list)
# Filter
# my_list = [1,2,3] 
# def fun(item):
#     return item % 2 != 0
# print(list(filter(fun,my_list)))
# print(my_list)
#Zip function
# my_list = (1,2,3,4,5)
# new_list = (5,6,9,8,9)
# print(tuple(zip(my_list,new_list)))
#Accumulator
# my_list = [2,3,5,6]
# def fun(acc,item):
#     print(acc,item)
#     return acc + item
# print(reduce(fun,my_list,10))
#lambda function
my_list = [1,2,3]
print(list(map(lambda item : item * 2 , my_list)))