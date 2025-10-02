import javax.management.StringValueExp;

public class Quiz {
    public static void main (String[] args){
    // //     int num = 21545648;
    // //    // String name = String.valueOf(num);
    // //     String name = num+"ABD";
    // //     //System.out.println(name.matches("[0-1]+"));
    // //     System.out.println(name.matches("[0-9 A-F]+"));
    // String date = "21/07/2005";
    // System.out.println(date.matches("[0-3][0-9]/[0-1][0-9]/[0-9]{4}"));
    // //System.out.println(date.matches("[0-3][0-9]/[0-1][0-9]/[0-9]{4}"));
    //String name = "Abdullah%Noor&";
    //System.out.println(name.replaceAll("[^0-9 A-Z a-z]",""));
    String name = "    dkbvlhdvbn    dvbhdsgobn   dljbhdsoig   dkcjvnboesidf";
    System.out.println(name.replaceAll("\\s+", " ").trim());
    String words[] = name.split("\\s");
    System.out.println(words.length);
    }
};
  