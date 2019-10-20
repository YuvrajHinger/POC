// INTERFACE
interface iexample{
    void demo();
}
public class EXP11 implements iexample{
    public void demo(){
        System.out.println("INTERFACE EXAMPLE");
    }
    public static void main(String args[]){
        EXP11 e = new EXP11();
        e.demo();
    }
}