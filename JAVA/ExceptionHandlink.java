import java.util.Scanner;

public class ExceptionHandlink {
    public static void main (String agrs[]){
     int a;
     int b,c;
     Scanner scan = new Scanner(System.in);
     a = scan.nextInt();
     b = scan.nextInt();
     try{
     c = a/b;
     System.out.println(c);
     }
     catch(ArithmeticException e){
        System.out.println("Number is 0 Enter A Valid Number");
     }
    System.out.println("BYE");
    }
}
