class base{
     void imu(){
        System.out.println("I am imu");
    }
     void imu1(){
        System.out.println("I Am Imu1");
    }
};
class Derived extends base{
    void imu(){
        System.out.println("Derived is Called");
    } 
    void imu1(){
        System.out.println("ulalalal");
    }

}
public class Objects {
    public static void main (String []args){

        base b = new Derived ();
        //Derived d  = new base(); 
        b.imu();
    }
    
}
