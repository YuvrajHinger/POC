package demo;
import java.io.*;
public class Demo9{
    public static void main(String arg[]){
        try{
           RandomAccessFile r = new RandomAccessFile("CSE.txt","rw");
           String s = "GITS DABOK UDAIPUR";
           byte ar[] = s.getBytes(); 
           r.write(ar);           
           r.seek(0);
           ar = new byte[(int)r.length()];
           r.readFully(ar);
           s = new String(ar);
           System.out.println(s);
        }
        catch(Exception e){
            System.out.println(e);
        }
    }
}