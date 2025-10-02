import java.net.SocketTimeoutException;
import java.util.Scanner;

public class checkBDHO {
  public static void main (String[] args)
  {
    Scanner scan = new Scanner(System.in);
    String num;
    System.out.println("Enter A Number");
    num = scan.nextLine();
    if (num.matches("[0-1]+")){
    System.out.println("Binary");
  }  
  else if (num.matches("[0-7]+")){
    System.out.println("OCTAL");
  }
  else if (num.matches("[0-9]+")){
    System.out.println("Decimal");
  }
  else if (num.matches("[0-9 A-F]+")){
    System.out.println("HexaDecimal");
  }
  else{
    System.out.println("NOt a Number");
  }
}
};
