 class Node{
    public int val;
    public Node next;
}
    class SingleLinkedlist{
    public Node head;
    public Node tail;
    public int size;
    public Node CreateSingleLinkedlist(int value){
        head = new Node();
        Node node = new Node();
        node.next = null;
        node.val = value;
        head = node;
        tail = node;
        size = 1;
        return head;
    }
    public void insertInlinkedList(int nodevalue,int location){
        Node node = new Node();
        node.val = nodevalue;
        if (head == null){
            CreateSingleLinkedlist(nodevalue);
            return;
        }
        else if (location == 0){
            node.next = head;
            head = node;
        }
        else if (location >= size){ 
          node.next = null;
          tail.next = node;
          tail = node;
        }
        else{
            Node tempnode = head;
            int index = 0;
            while(index < location - 1){
                tempnode = tempnode.next;
                index++;
            }
            Node nextNode = tempnode.next;
        tempnode.next = node;
        node.next = nextNode; 
        }
        size++; 
    } 
    public void Traverse(){
        Node tempNode = head;
        if (head == null)return;
        while(tempNode != null){
            System.out.print(tempNode.val);
            System.out.print("->");
            tempNode = tempNode.next;
        }
    }
    boolean searchNode(int nodeval){
        if(head == null)return false;
        Node newNode = head;
        int i = 0;
        while(newNode != null){
            if (newNode.val == nodeval){
                System.out.println("Number is Found "+ (i+1));
                return true;
            }
            newNode = newNode.next;
            i++;  
    }System.out.println("Number Not Found");
    return false;
} 
    }
public class Link {
    public static void main(String[] args) {
        SingleLinkedlist sll = new SingleLinkedlist();
        sll.CreateSingleLinkedlist(5);
        System.out.println(sll.head.val);
        sll.insertInlinkedList(1, 0);
  
        sll.insertInlinkedList(2, 2);
       
        sll.insertInlinkedList(3, 3);
        
        sll.insertInlinkedList(4, 4);
       
        sll.insertInlinkedList(5, 5);
        
        sll.insertInlinkedList(6, 6);
     
        sll.Traverse();

        boolean x = sll.searchNode(10);
        if(x){System.out.println("Yes");}
        else {System.out.println("NO");}
}
}