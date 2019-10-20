package demo;
class Thread1 extends Thread{
    public void run(){
        for(int i=1;i<2;i++){            
            System.out.println(Thread.currentThread().getName()+"FOR THREAD1");
        }
    }
}
class Thread2 extends Thread{
    public void run(){
        for(int i=1;i<2;i++){
            System.out.println(Thread.currentThread().getName()+"FOR THREAD2");
        }
    }
}
public class Demo10{
    public static void main(String arg[]){
        Thread1 t1 = new Thread1();
        Thread2 t2 = new Thread2();
        t1.start();
        t2.start();
        for(int i=1;i<2;i++){
            System.out.println(Thread.currentThread().getName());
        }    
    }
}