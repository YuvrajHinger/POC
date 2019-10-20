//Transient Keyword is used to Prevent an original value of variable to the network it wil be send with its Default VAlue
//There is no use of transient keyword when a variable is final
package demo;
import java.io.*;
class Employee implements Serializable{
    String name;
    transient final int id=100;
    transient static int salary;
}
public class Demo16{
    public static void main(String[] args) {
        Employee e = new Employee();        
        e.name = "GITS";        
        e.salary = 200;
        try{            
            FileOutputStream fos = new FileOutputStream("CSE.txt");
            ObjectOutputStream os = new ObjectOutputStream(fos);
            os.writeObject(e);
            fos.close();
            os.close();
            System.out.println("SUCEESS");
        }
        catch(Exception es){
            System.out.println(es);
        }
    }
}