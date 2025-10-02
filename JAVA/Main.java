
import java.io.IOException;
import java.io.PrintWriter;

public class Main {
    public static void main(String[] args) { 
        try{
        PrintWriter imu = new PrintWriter("Outputfile.txt");

        imu.println("This is First Line");
        imu.println("This is Second Line");
        imu.close();
        }
        catch(IOException e){
            System.out.println("There is an Error");
        }
        
    }
}