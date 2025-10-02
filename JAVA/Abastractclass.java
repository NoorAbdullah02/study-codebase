interface test{
    abstract public void car();
     static void bus(){
     System.out.println("Bus is Started");
     }
    default void ship(){
      System.out.println("Ship is Started");
    }
};
class myship{
    
};
public class Abastractclass {
    public static void main (String[] args){
      test.bus();
    }
}
