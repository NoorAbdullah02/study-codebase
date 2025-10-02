interface member{
    void callback();
};
class Store{
    member members[] = new member[10];
    int count = 0;
    void register(member m){
        members[count++] = m;
    }
    void inviteSale(){
        for (int i=0;i<count;i++){
            members[i].callback();
        }
    }
    class Customer implements member{
        String name;
    public Customer(String name){
            this.name = name;
        }
      public void callback(){
        System.out.println("I am Calling "+name);
        }
    };
};
public class Sale {
    public static void main(String [] args){
    Store s = new Store();
    Store.Customer c1 = s.new Customer("Abdullah");
    Store.Customer c2 = s.new Customer("Noor");
    s.register((c1));
    s.register(c2);
    s.inviteSale();
    }
}
