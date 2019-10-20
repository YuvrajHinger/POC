package demo;
import java.io.*;
public class Exercise1{
    public static int fact(int x){
        int r=1;
        while(x>0){
            r=r*x;
            x--;
        }
        return r;
    }
    public static int Reverse(int x){
        int r=0,tmp;
        while(x>0){
            tmp=x%10; //123 3 12 2 11
            x=x/10;
            r=r*10+tmp;
        }
        return r;
    }
    public static int Armstrong(int x){
        int r=1;
        while(x>0){
            r=r*x;
            x--;
        }
        return r;
    }
    public static void main(String arg[]){
        DataInputStream ds = new DataInputStream(System.in);            
        int ch,flag=1;
        while(flag==1){        
            try{                   
                System.out.println("CHOICE 1. Factorial 2. Reverse 3. Armstrong Nos");       
                ch = Integer.parseInt(ds.readLine());
                switch(ch){
                    case 1: System.out.println("ENTER NOS FOR FACTORIAL");
                            System.out.println(Exercise1.fact(Integer.parseInt(ds.readLine())));                    
                            break;                     
                    case 2: System.out.println("ENTER NOS FOR REVERSE");
                            System.out.println(Exercise1.Reverse(Integer.parseInt(ds.readLine())));                    
                            break;
                    case 3: System.out.println("ENTER NOS FOR FACTORIAL");
                            System.out.println(Exercise1.Armstrong(Integer.parseInt(ds.readLine())));                    
                            break;
                }
                System.out.println("MORE");
                flag = Integer.parseInt(ds.readLine());        
            }
            catch(Exception e){
                System.out.println(e);
            }            
        }
    }
}