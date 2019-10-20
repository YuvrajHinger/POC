// ABSTRACT CLASS
abstract class Abdemo{
    abstract void abmethod();
}
public class EXP8 extends Abdemo{
    public void abmethod(){
        System.out.println("ABSTRACT FUNCTION DEFINE HERE");
    }
    public static void main(String args[]){
        EXP8 e = new EXP8();
        e.abmethod();
    }
}