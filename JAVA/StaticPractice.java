class car{
    static int x = 10;
    int y = 20;
    void sum(){
        System.out.println(x+" "+y);
    }
    static void get(){
        System.out.println(x);
    }
};
    public class StaticPractice {
    public static void main (String [] args){
        car c = new car();
        c.sum();
        c.get();
        c.x = 37;
        c.y = 100;
        car c1 = new car();
        c1.sum();
        c1.get();


    }
}
