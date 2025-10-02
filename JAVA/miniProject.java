import java.util.Scanner;

public class miniProject {
    public static void main(String[] args) {
        int n;
        System.out.print("How Many days Temperature : ");
        Scanner scan = new Scanner(System.in);
        n = scan.nextInt();
        int [] arr = new int [n];
        for (int i=0;i<n;i++){
            System.out.print("Day "+(i+1) + "'s high temp : ");
            arr[i] = scan.nextInt();
        }
        int sum = 0;
        for (int i=0;i<n;i++){
            sum += arr[i];
        }
        int count = 0;
        float avg = (float)sum/n;
        System.out.println("Average is : "+ avg);
        for (int i=0;i<n;i++){
            if(arr[i] > avg )count++;
        }
        System.out.println(count+" days above average");
    }
}
