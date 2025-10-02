class Outer{
    int x = 10;
    class inner{
        static int y = 30;
        public void innerdisplay(){
            System.out.println(x+" "+y);
        }
    };
    void outerdisplay(){
        inner i = new inner();
        i.innerdisplay();
    }
};
public class nestedInnerClass {
    public static void main(String[] args){
        Outer o = new Outer();
        o.outerdisplay();
        Outer.inner oi = new Outer().new inner();
        oi.innerdisplay(); 
    }
}
 