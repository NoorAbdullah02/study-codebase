import java.util.Scanner;
import java.util.Vector;

public class insertAeleinArray {
    public static void main (String[] args){
        Scanner scan = new Scanner(System.in);
        Vector<Integer> v = new Vector<>(10);
        System.out.println("Enter index");
        int index  = scan.nextInt();
        for (int i=0;i<5;i++){
            int a;
            System.out.println("Enetr Numbers\n");
            a = scan.nextInt();
            v.add(a);
    }
    for(int i = index ;i<=v.size();i++){
        v[i+1] = v[i]; 
    }
    }
};
