package demo;
import java.io.*;
public class Demo17{
    public static void main(String[] args) {
        Employee e = null;                
        try{            
            FileInputStream fis = new FileInputStream("CSE.txt");
            ObjectInputStream ois= new ObjectInputStream(fis);
            e = (Employee)ois.readObject();
            fis.close();
            ois.close();
            System.out.println(e.name+e.id+e.salary);

        }
        catch(Exception es){
            System.out.println(es);
        }
    }
}