package demo;
import java.io.*;
public class Demo7{
    public static void main(String arg[]){
        try{
            DataInputStream ds = new DataInputStream(System.in);            
            FileOutputStream fs = new FileOutputStream("CSE.txt");                    
            System.out.println("ENTER MESSAGE");
            String msg = ds.readLine();                
            byte ar[] = msg.getBytes();
            fs.write(ar);
            fs.close();
            FileInputStream fos = new FileInputStream("CSE.txt");                    
            int size = fos.available();
            ar = new byte[size];
            fos.read(ar);
            fos.close();
            fs = new FileOutputStream("MECH.txt");                    
            fs.write(ar);
            fs.close();
        }
        catch(Exception e){
            System.out.println(e);
        }
    }
}