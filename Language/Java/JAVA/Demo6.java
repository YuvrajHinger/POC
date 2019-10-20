package demo;
import java.io.*;
public class Demo6{
    public static void main(String arg[]){
        try{            
            FileInputStream fs = new FileInputStream("DEMO.txt");                    
            int size = fs.available();
            byte ar[] = new byte[size];
            fs.read(ar);
            String s = new String(ar);
            System.out.println(s);            
            fs.close();
        }
        catch(Exception e){
            System.out.println(e);
        }
    }
}