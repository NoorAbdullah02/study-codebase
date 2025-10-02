class Node:
    def __init__(self,val):
     self.val = val
     self.next = None

class LL:
    def __init__(self):
        self.first = None
        self.last = None
    
    def insert(self,val):
        t = Node(val)
        if self.first is None:
            self.first = self.last = t
        
        self.last.next = t
        self.last = t

    def display(self):
        curr = self.first

        while curr is not None:
            print(curr.val)
            curr = curr.next
    
l = LL()
l.insert(10)
l.insert(20)
l.insert(30)
l.display()
