# class none:
#     def __init__ (self,email):
#         self.email = email
    
# class Derive(none):
#     def __init__(self,name,age,email):
#        # none.__init__(self,email)
#         super().__init__(email)
#         self.name = name
#         self.age = age
# Derived1 = Derive("Adiba",10,"noor@50gmail.com")
# print(dir(Derived1))

from typing import Any


class imran:
    def __init__(self,name):
        self.name = name 
        self.my_dict = {
            'name' : 'Abdullah',
            'id': 10
        } 
    def __len__(self):
        return 5
    def __call__(self):
        print('Hello')
    def __getitem__(self,i):
        return self.my_dict[i]

imu = imran("Noor")
print(len(imu))
imu()
print(imu['id'])
        