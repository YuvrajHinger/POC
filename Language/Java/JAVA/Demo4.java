package demo;
import java.io.*;
public class Demo4{
    public static void main(String arg[]){
        DataInputStream ds = new DataInputStream(System.in);    
        int ar[] = null;
        int a,b,choice;
        try{    
            a = Integer.parseInt(ds.readLine());
            b = Integer.parseInt(ds.readLine());
            System.out.println("ENTER CHOICE");                            
            choice = Integer.parseInt(ds.readLine());
                switch(choice){
                case 1: System.out.println(a+b); break;
                case 2: System.out.println(a-b); break;                                                       
            }
            // System.out.println("ENTER SIZE OF ELEMENTS");                            
            // ar = new int[Integer.parseInt(ds.readLine())];
            // System.out.println("ENTER ELEMENTS");                
            // for(int i=0;i<ar.length;i++){                
            //     ar[i] = Integer.parseInt(ds.readLine());
            // }
            // System.out.println(x);
            // System.out.println("ENTER YOUR AGE");
            // int y = Interger.parseInt(ds.readLine());
            // System.out.println(y);
            // System.out.println("Enter");
            // String x = ds.readLine();
            // System.out.println(x);
        }
        catch(Exception e){
            System.out.println(e);
        }        
    }
}