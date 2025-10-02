abstract class None{
    abstract void imu();
};
interface car{
     void imu1();
};
class Main extends None implements car{
    void imu(){
        System.out.println("Main is Called");
    }
    
    public void imu1(){
        System.out.println("imran");
    }
};
public class Abscracclass {
    public static void main (String [] args){
     car n = new Main();
     n.imu1();
    }
}
