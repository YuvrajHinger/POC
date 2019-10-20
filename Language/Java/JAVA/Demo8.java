package demo;
import java.io.*;
public class Demo8{
    public static void main(String arg[]){
        try{
            FileReader fr = new FileReader("CSE.txt");
            int i=1;
            while((i=fr.read())!=-1){                
                System.out.print((char)i);
            }
            fr.close();
        }
        catch(Exception e){
            System.out.println(e);
        }
    }
}