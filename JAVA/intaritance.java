import java.io.IOException;
import java.io.PrintWriter;

public class Main {
    public static void main(String[] args) {
        PrintWriter imu = new PrintWriter("Outputfile.txt");

        imu.println("This is First Line");
        imu.println("This is Second Line");
        imu.close();
    }