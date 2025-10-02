public class Exercise1 {
    static int f(int x,int y){
        x = 10;
        y = 15;
        return x+y;
    }
    static String f1(String n){
        n = "Abdullah";
        return n;
    }

 public static void main (String[] args){
    int a = 10,b = 20;
    int sum = f(a,b);
    System.out.println(sum);
    String name = "Noor";
    String res = f1(name);
    System.out.println(res);
 }
};
