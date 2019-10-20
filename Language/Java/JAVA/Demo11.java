package demo;
class Newthread1 implements Runnable{
    public void run(){        
            System.out.println(Thread.currentThread().getName());        
    }
}
class Newthread2 implements Runnable{
    public void run(){        
            System.out.println(Thread.currentThread().getName());        
    }
}
public class Demo11{
    public static void main(String arg[]){        
        Newthread1 t1 = new Newthread1(); 
        Thread T1 = new Thread(t1);
        T1.setName("PRODUCER");
        T1.start();
        Newthread2 t2 = new Newthread2();
        Thread T2 = new Thread(t2);    
        T2.setName("CONSUMER");
        T2.start();                            
        System.out.println(Thread.currentThread().getName());        
    }
}