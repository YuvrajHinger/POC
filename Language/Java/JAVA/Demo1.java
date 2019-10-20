package demo;
public class Demo1{
    void fun(){}
    public static void main(String args[]){
        try{
            System.out.println(10/0);
        }
        catch(Exception e){
            System.out.println(e);
        }
        try{
            Demo1 d = null;            
            d.fun();
        }
        catch(Exception e){
            System.out.println(e);
        }
        try{
            int a[] = new int[5];
            System.out.println(a[7]);
        }
        catch(Exception e){
            System.out.println(e);
        }
    }
}