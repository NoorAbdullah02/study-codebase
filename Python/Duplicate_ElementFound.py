class Node:

    def _init_(self, data):

        self.data = data

        self.next = None



class LinkedList:

    def _init_(self):

        self.head = None



    def insert(self, data):

        new_node = Node(data)

        new_node.next = self.head

        self.head = new_node



    def delete(self, index):

        if self.head is None:

            print("Underflow")

            return



        p = self.head

        q = None



        if index == 0:

            x = self.head.data

            self.head = self.head.next

            print(f"Deleted Element is: {x}")

            return



        for i in range(index):

            q = p

            p = p.next

            if p is None:

                print("Invalid Index: Cannot Delete")

                return



        val = p.data

        q.next = p.next

        print("Deleted Element is:", val)



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



ll = LinkedList()

ll.insert(10)

ll.insert(20)

ll.insert(30)

ll.display()

print("Search 10:", ll.search(10))

print("Search 40:", ll.search(40))

ll.delete(1)

ll.display()
