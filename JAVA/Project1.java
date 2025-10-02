import java.util.Scanner;
    class account{
        private double  Ac_NO;
        protected String Name;
        protected double Number;
        public double balance ;
        public double ftk;
        public double Ltk;
        account(String Name , double Ac_NO,double Number){
          this.Name = Name;
          this.Ac_NO = Ac_NO;
          this.Number = Number;
          balance = 0.0;
          ftk = 0.0;
        }
        String getN(String name) {return Name;}
        double getM(double Number) {return Number;}
        double getA(double Ac_NO){return Ac_NO;}
        double getB(double balance){return balance;}
        double ftk(double ftk){return ftk;}
    };
    class SavingsAc extends account{
        SavingsAc(String Name , double Ac_NO,double Number){
            super(Name,Ac_NO,Number);
        }
        // private double tk;
        // private double ftk;
         void deposit (){
            System.out.printf("Enter A Amount : ");
            Scanner scan = new Scanner(System.in);
            double tk = scan.nextFloat();
              balance +=tk;
         System.out.printf("Your Balance is : %lf\n",balance);
     }
     double withdraw(){
        System.out.printf("Enter A Amount :");
        Scanner scan = new Scanner(System.in);
        double tk = scan.nextFloat();
        if (balance <= 500)System.out.print("Sorry Insufficient Balance\n");
        else {
            balance -=tk;
        }
        System.out.printf("Your Balance is : %lf\n",balance);
        return balance;
     }
     void StartFDR(){
        System.out.println("Enter FDR Amount");
        Scanner scan = new Scanner(System.in);
        double tk = scan.nextFloat();
         System.out.println("Your Fixed Deposit Start For 3 Months");
         ftk += tk;
         System.out.printf("Your Fixed Deposit Amount is : %lf\n",ftk);
     }
     void CloseFDR(){
        System.out.println("Your FDR is Closed Successfully");
        ftk = 0.0;
        System.out.printf("Now Your FDR AC Balance is : %lf\n",ftk);
        System.out.println("Please GOTO Th Cash Counter And Receive Your Tk !!");
     }
    };
    class LoanAc extends account{
        LoanAc (String Name , double Ac_NO,double Number){
            super(Name,Ac_NO,Number);
        }
      void Loan(){
        System.out.print("Select a Option : ");
        Scanner scan = new Scanner(System.in);
       int a = scan.nextInt();
       System.out.printf("1.1000 TK Loan Weeakly Interest is 10% \n 2. 1500 TK Loan Weeakly Interest is 15 % \n 1000 TK Loan Weeakly Interest is 10 % \n 2000 TK Loan Weeakly Interest is 20 %");
       switch(a){
        case 1:{
            System.out.printf("Your 1000 TK Loan is Granted Successfully.\nYou Need to Pay Pre Weekly interest 100 TK\n");
            Ltk += 1000;
            break;
        }
        case 2:{
            System.out.printf("Your 1500 TK Loan is Granted Successfully.\nYou Need to Pay Pre Weekly interest 150 TK\n");
            Ltk += 1500;
            break;
        }
        case 3:{
            System.out.printf("Your 2000 TK Loan is Granted Successfully.\nYou Need to Pay Pre Weekly interest 400 TK\n");
            Ltk += 2000;
            break;
        }
       }
      }
      void PayLoaninEMI(){
        System.out.print("Enter Amount : ");
        Scanner scan = new Scanner(System.in);
       double tk = scan.nextFloat();
        Ltk -= tk;
        System.out.printf("Payment Done Successfully\nNow You Need to Pay only %lf Taka",Ltk); 
      }
      void PayloaninOnce(){
       System.out.printf("Your Current Loan is %lf taka\nYou Need to Must Pay %lf Taka",Ltk,Ltk);
      Scanner scan = new Scanner(System.in);
       double x = scan.nextFloat();
     if (Ltk != x){
        System.out.printf("Sorry You can not Pay at Once Because Your Money is Less Than Your Loan\nPlease Go to the PayLoaninEMI Option. \n");
     }
     else {
        System.out.println("Success!!");
        Ltk = 0.0;
        System.out.printf("Now Your Loan account balance is %lf Taka\n",Ltk);
     }
      }
    };
    public class Project1 {
    public static void main (String []args){
        String name;
        System.out.printf("Enter Name : ");
        Scanner scan = new Scanner (System.in);
        name = scan.nextLine();
        double num;
        System.out.printf("Enter Phone Number :");
        num = scan.nextDouble();
        double AcNO;
        System.out.printf("Enter A/C Number :");
        AcNO = scan.nextDouble();
        account a1= new account(name,AcNO,num);
        System.out.printf("1.Create a new Account\n2.Login");
        
        System.out.print("1.User Information\n2.Enter in Savings Account\n3.Enter in Loan Account\n");
        
    }
};
