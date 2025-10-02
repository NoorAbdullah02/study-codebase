public class StringMatches {
  public static void main(String[] args){
    String n = "sheikhnoorabdullah@gmail.com";
    System.out.println(n.matches("\\w*@gmail.*"));
    int x = n.indexOf("@");
   System.out.println(n.substring(0, x));
   System.out.println(n.substring(x+1, n.length()));
  }  
};
