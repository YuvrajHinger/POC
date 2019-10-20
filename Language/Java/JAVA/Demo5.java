package demo;
import java.io.*;
public class Demo5{
    public static void main(String arg[]){
        try{
            DataInputStream ds = new DataInputStream(System.in);            
            FileOutputStream fs = new FileOutputStream("DEMO.txt",true);        
            System.out.println("ENTER MESSAGE");
            String msg = ds.readLine();                
            byte ar[] = msg.getBytes();
            fs.write(ar);
        }
        catch(Exception e){
            System.out.println(e);
        }
    }
}