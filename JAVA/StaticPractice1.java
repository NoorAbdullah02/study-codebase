class main1{
    static {
    System.out.println("Block 1");
}
static {
    System.out.println("Block 2");
}
};
public class StaticPractice1 {
  
    public static void main (String[] args){
     System.out.println("MAIn");
     main1 m = new main1();
    }
}
