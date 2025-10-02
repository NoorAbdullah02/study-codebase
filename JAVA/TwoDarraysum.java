import java.util.Scanner;

public class TwoDarraysum {
    public static void main (String[] args){
           int arr[][] = new int [3][3];
           int brr[][] = new int [3][3];
           Scanner scan = new Scanner(System.in);
           System.out.println("Input Arr ");
           for (int i=0;i<arr.length;i++){
            for (int j=0;j<arr[0].length;j++){
               int x = scan.nextInt();
               arr[i][j] = x;
            }
        }
        System.out.println("Input Arr ");

            for (int i=0;i<brr.length;i++){
                for (int j=0;j<brr[0].length;j++){
                   int x = scan.nextInt();
                   brr[i][j] = x;
                }
           }
    
      for (int x[] : arr){
        for (int y : x){
            System.out.print(y+" ");
        }System.out.println();
      }
      for (int x[] : brr){
        for (int y : x){
            System.out.print(y+" ");
        }System.out.println();
      }
      for (int i=0;i<arr.length;i++){
        for (int j=0;j<arr[0].length;j++){
           int sum = arr[i][j] * brr[i][j]; 
          System.out.print(sum+ " ");
        }System.out.println();
    }
    }
};
