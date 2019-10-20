// METHOD OVERLOADING
class Parent{
    public void method1(){
        System.out.println("VOID PARAMETER");
    }
    public void method1(int x){
        System.out.println("ONE PARAMETER x = "+x);
    }
}
public class EXP6 extends Parent{
    public void method1(float x){
        System.out.println("ONE PARAMETER in Another Class x = "+x);
    }
    public static void main(String args[]){
        EXP6 e = new EXP6();
        e.method1();
        e.method1(5);
        e.method1(3.14f);
    }
}