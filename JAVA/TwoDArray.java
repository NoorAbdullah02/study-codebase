public class TwoDArray {
    public static void main (String[] agrs)
    {
        int arr[][];
        arr = new int [5][4];
        for(int x[] : arr){
            for (int y : x){
                System.out.print(y+ " ");
            }System.out.print("\n");
        }
    }
};
