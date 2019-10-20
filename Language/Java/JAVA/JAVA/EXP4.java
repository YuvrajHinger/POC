// FEET AND INCHES
import java.util.Scanner;
public class EXP4{
    Scanner scan = new Scanner(System.in);
    int d1,d2;
    public void readdata(){
        System.out.println("ENTER FIRST DISTANCE IN FEET");
        d1=scan.nextInt();
        System.out.println("ENTER SECOND DISTANCE IN INCHES");
        d2=scan.nextInt();
    }   
    public void adddistance(){
        int feet=d1+(d2/12);
        int inches=d2%12;
        System.out.println("TOTAL DISTANCE = "+feet+"FEET "+inches+"INCH");        
    } 
    public static void main(String args[]){
      EXP4 e = new EXP4();
      e.readdata();
      e.adddistance();
    }
}