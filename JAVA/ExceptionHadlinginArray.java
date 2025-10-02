public class ExceptionHadlinginArray {
    public static void main (String args[]){
     int arr[] = {10,20,30,40,0};
     try{
     int c = arr[0]/arr[4];
    }
     catch (ArithmeticException e){
        System.out.println("invalid Number");
     }
     try{
        System.out.println(arr[4]);
        }
        catch(ArrayIndexOutOfBoundsException e){
           System.out.println("Enter A Valid Index");
        }
     System.out.println("BYE");
    }
}
