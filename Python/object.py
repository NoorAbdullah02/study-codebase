class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None

    def insert(self, data):
        new_node = Node(data)
        new_node.next = self.head
        self.head = new_node

    def delete(self, key):
        temp = self.head
        
        if temp is not None:
            if temp.data == key:
                self.head = temp.next
                temp = None
                return

       
        while temp is not None:
            if temp.data == key:
                break
            prev = temp
            temp = temp.next

       
        if temp == None:
            return

      
        prev.next = temp.next
        temp = None

    def search(self, key):
        temp = self.head
        while temp:
            if temp.data == key:
                return True
            temp = temp.next
        return False

    def display(self):
        temp = self.head
        while temp:
            print(temp.data, end=' -> ')
            temp = temp.next
        print('None')

p = LinkedList()
p.insert(10)
p.insert(20)
p.insert(30)
p.display()
print("Search 10:", p.search(10))
print("Search 40:", p.search(40))
p.delete(20)
p.display()