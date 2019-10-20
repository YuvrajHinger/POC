// CONSTRUCTOR OVERLOAD
class Democlass{
    Democlass(){
        System.out.println("DEFAULT CONSTRUCTOR");
    }
    Democlass(int x){
        System.out.println("PARAMETER x = "+x);
    }
}
public class EXP9{
    public static void main(String args[]){
        Democlass d1 = new Democlass();
        Democlass d2 = new Democlass(5);
    }
}