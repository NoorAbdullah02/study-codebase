my_list = [2,3,6,4]
new_list = list(map(lambda item : item ** 2,my_list))
print(new_list)
imu = [(10,-1),(5,3),(2,1),(9,6)]
imu.sort(key=lambda item : item [1])
print(imu)
#listComplehence
new_list = [char for char in "hello"]
print(new_list)
new_list1 = [num**2 for num in range(1,20) if num % 2 !=0 ]
print(new_list1)
my_dict = {
    'a': 11,
    'b ': 20
}
new_list = {key:value for key,value in my_dict.items() if value % 2 == 0}
print(new_list)
new_list = [1,2,3]
new = {num : num*2 for num in new_list}
print(new)