//sleep method throws an exception called interupted exception
package demo;
class Newthread1 implements Runnable{
    public void run(){
        System.out.println(Thread.currentThread().getName()+" In control");
        System.out.println(Thread.currentThread().isAlive()+" Present");
    }
}
public class Demo14{
    public static void main(String arg[]){
        Newthread1 n1 = new Newthread1();
        Thread T1 = new Thread(n1);
        T1.start();
        try{
            T1.join(7000);
        }
        catch(Exception e){
            System.out.println(e);
        }
        System.out.println("JOIN AFTER 7000ms "+T1.getName());
        System.out.println(Thread.currentThread().isAlive()+" Present");
    }
}