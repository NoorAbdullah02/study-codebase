class base(object) :
    def sign_in(self):
        print("Sign in done")
        return "done"
class Derived(base):
    def __init__(self,name, age ):
        self.name = name
        self.age = age

    def attack(self):
        print(f"Derived class Name is {self.name} Age is {self.age} ")

class expert(Derived):
    def __init__(self,name,age):
        self.name = name
        self.age = age

    def attack(self):
       print(f"Expert class Name is {self.name} Age is {self.age} ")

base1 = base()
print(base1.sign_in())
expert1 = expert("Abdullah",10)
print(expert1.sign_in())
Derived1 = Derived("Imran",20)
print(Derived1.sign_in())
print(isinstance(expert1,Derived))
# Polymorphism in python 
def f(ch):
    ch.attack()
f(Derived1)
f(expert1)

for item in [Derived1,expert1]:
    item.attack()