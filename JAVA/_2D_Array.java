import java.lang.reflect.Array;
import java.util.Arrays;

public class _2D_Array {
    public static void main (String[] args){
        int [][] arr = new int[2][2];
        arr[0][0] = 1;
        arr[0][1] = 2;
        arr[1][0] = 3;
        arr[1][1] = 5;
        System.out.println(Arrays.deepToString(arr));
     }
}
