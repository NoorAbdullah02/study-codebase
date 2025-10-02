import sys

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
        list = []
        while curr is not None:
            list.append(str(curr.val)+"->")
            curr = curr.next
        
        list.append("None")
        print("".join(list))

    def sum(self):
        curr = self.first
        sum = 0

        while curr is not None:
         sum = sum + curr.val
         curr = curr.next
            
        return sum
 
    def insertAtPos(self,pos,val):
        t = Node(val)
        self.q = self.first
        
        if pos == 0:
            t.next = self.first
            self.first = t
        
        else:
          for i in range(1,pos,1):
            self.q = self.q.next
        
        t.next = self.q.next
        self.q.next = t

    def removeDuplicate(self):
        check = set()
        curr = self.first
        
        prev = None

        while curr is not None:
            if curr.val in check:
             prev.next = curr.next
            else:
               check.add(curr.val)
               prev = curr 

            curr = curr.next

    def CheckSorted(self):
       self.p = self.first
       x = -99999
       while self.p is not None:
          if self.p.val < x:
             return False
          else:
             x = self.p.val
          self.p = self.p.next
            
       return True

 
        
l = LL()
l.insert(10)
l.insert(20)
l.insert(30)
l.insert(20)
l.insert(30)
l.insert(20)
l.insert(30)
l.insert(20)
l.insert(30)
l.display()
print(l.CheckSorted())
l.removeDuplicate()
l.display()

# print("Sum is : " + str(l.sum()))
# l.insertAtPos(3,15)
# l.display()
# l.insertAtPos(0,55)
# l.display()

