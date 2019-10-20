// Range of thread priority is set to 1 to 10
// 1 is min priority & 5 is normal priority & 10 is max priority
// for Set priority Thread.currentThread().setPriority(int value from 1 to 10);
package demo;
class Newthread1 implements Runnable{
    public void run(){   
        for(int i=0;i<10;i++){     
            System.out.println(Thread.currentThread().getPriority());                
        }
    }
}
class Newthread2 implements Runnable{
    public void run(){        
        for(int i=0;i<10;i++){     
            System.out.println(Thread.currentThread().getPriority());                
        }
    }
}
public class Demo12{
    public static void main(String arg[]){
        Newthread1 n1 = new Newthread1();
        Newthread2 n2 = new Newthread2();
        Thread T1 = new Thread(n1);        
        T1.start();
        Thread T2 = new Thread(n2);                                        
        T2.start();        
        T1.setPriority(1);
        T2.setPriority(10);
    }
}