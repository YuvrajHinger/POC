package demo;
class Line{
    synchronized public void getLine(){
        for(int i=0;i<5;i++){
            System.out.println(Thread.currentThread().getName()+": "+i);        
            try{
                Thread.sleep(5000);
            }
            catch(Exception e){
                System.out.println(e);
            }
        }        
    }
}
class Train extends Thread{
    Line l;
    Train(Line l){
        this.l = l;
    }
    public void run(){
        l.getLine();
    }
}
public class Demo15{
    public static void main(String arg[]){
        Line n1 = new Line();
        Train T1 = new Train(n1);
        Train T2 = new Train(n1);
        T1.start();
        T2.start();            
    }
}