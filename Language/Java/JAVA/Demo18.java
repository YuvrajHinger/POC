package demo;
import java.io.*;
class Student implements Serializable{
    String name;
    int roll;
    float marks;
}
public class Demo18{
    public static void main(String[] args) {
        Student s = new Student();        
        Student e = null;
        Employee e1 = null;        
        s.name = "GITS";        
        s.roll = 200;
        s.marks = 30.5f;
        try{            
            FileOutputStream fos = new FileOutputStream("MECH.txt");
            ObjectOutputStream os = new ObjectOutputStream(fos);
            os.writeObject(s);
            fos.close();
            os.close();
            System.out.println("SUCEESS SERIALIZE");

            FileInputStream fis = new FileInputStream("MECH.txt");
            ObjectInputStream ois= new ObjectInputStream(fis);
            e = (Student)ois.readObject();
            fis.close();
            ois.close();
            System.out.println(e.name+e.roll+e.marks);

            fis = new FileInputStream("CSE.txt");
            ois= new ObjectInputStream(fis);
            e1 = (Employee)ois.readObject();
            fis.close();
            ois.close();
            System.out.println(e1.name+e1.id+e1.salary);
        }
        catch(Exception es){
            System.out.println(es);
        }
    }
}