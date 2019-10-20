//sleep method throws an exception called interupted exception
package demo;
class Newthread1 implements Runnable{
    public void run(){   
        for(int i=1;i<10;i++){     
            System.out.println(Thread.currentThread().getName()+"In control");                
            try{
                Thread.sleep(5000);
            }
            catch(Exception e){
                System.out.println(e);
            }
        }
    }
}
public class Demo13{
    public static void main(String arg[]){
        Newthread1 n1 = new Newthread1();
        Thread T1 = new Thread(n1);
        T1.start();        
        for(int i=1;i<10;i++){     
            Thread.yield();
            System.out.println(Thread.currentThread().getName()+"In control");                
        }
    }
}