import java.lang.reflect.Array;
import java.util.Arrays;

public class ArrayReverse {
    public static void main(String[] args) {
        ArrayReverse m = new ArrayReverse();
        int [] arr = {1,2,3,4,5,6,7,8,9};
        m.f(arr);
        
    }
    void f(int [] array){
        for (int i=0;i<array.length/2;i++){
            int last = array.length - i - 1;
            int temp = array[i];
            array[i] = array[last];  
            array[last] = temp;
        }
        System.out.println(Arrays.toString(array));
    }
}
