import java.util.Scanner;

public class Quiz1{
    public static void main (String[] args){
        Scanner scan = new Scanner(System.in);
        String x;
        System.out.print("Enter A Website name : ");
        x = scan.nextLine();
        String a = x.substring(0,x.indexOf(":"));
        System.out.println(a); 
        if (a.equals("https")){
            System.out.println("Hype Text ");
        }
        String b = x.substring(x.lastIndexOf(".")+1);
        System.out.println(b);
        if (b.equals("com")){
            System.out.println("Commercial website\n");
        }
        else{
            System.out.println("Another Website\n");
        }
  }
};