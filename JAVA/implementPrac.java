abstract class car{
    abstract void Sound();
};
interface music{
    void ChangeMusic();
    void autoplay();
}; 
class Scar extends car implements music {
   void Sound(){
    System.out.println("Pi p p p p");
   }
   public void ChangeMusic(){
    System.out.println("Music Change Done");
   }
   public void autoplay(){
    System.out.println("Autoplay Option is ON");
   }

};
public class implementPrac {
    public static void main (String[] args){
    car c = new Scar();
    c.Sound();
    music m = new Scar();
    m.ChangeMusic();
    Scar s = new Scar();
    s.Sound();
    }
}
