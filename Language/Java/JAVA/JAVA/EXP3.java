// AREA OF CIRCLE
import java.util.Scanner;
class circledemo{
    int radius;
    Scanner scan=new Scanner(System.in);
    public void readradius(){
        System.out.println("ENTER RADIUS");
        radius=scan.nextInt();
    }
    public float findarea(){
        return 3.14f*radius*radius;
    }
    public float findparameter(){
        return 2*3.14f*radius;
    }
}
public class EXP3{    
    public static void main(String args[]){
        circledemo c = new circledemo();
        c.readradius();
        System.out.println("AREA = "+c.findarea());
        System.out.println("PARAMETER = "+c.findparameter());
    }
}