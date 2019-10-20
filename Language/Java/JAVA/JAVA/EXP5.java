// STATIC DEMO
class Staticdemo{
    static int i=20;
    int j=10;
    static void access(){
        System.out.println("STATIC METHOD");
    }
    static{
        System.out.println("STATIC BLOCK");
    }
}
public class EXP5{
    public static void main(String args[]){        
        Staticdemo.access();
        System.out.println("STATIC VARIABLE i = "+Staticdemo.i);
    }
}