//IO 
package demo;
import java.util.*;
public class Demo3{
    public static void main(String args[]){
        int x=1;                                
        Scanner scan = new Scanner(System.in);        
        int c = scan.nextInt();
        int a[] = new int[c];
        for(int i=0;i<c;i++){
            a[i]=scan.nextInt();
            for(int j=0;j<i;j++){
                if(a[i]<a[j]){
                    int tmp=a[i];
                    a[i]=a[j];
                    a[j]=tmp;
                }
            }
        }
        for(int i=0;i<c;i++){
            System.out.println(a[i]);
        }        
                // String name = scan.nextLine();
                // System.out.println("ENTER AGE");
                // int age = scan.nextInt();
                // System.out.println("ENTER SALARY");
                // int sal = scan.nextInt();                
                // System.out.println("NAME :"+name+"\nAGE :"+age+"\nSALARY :"+sal);
                // System.out.println("Do you want More?");
                // x=scan.nextInt();
    }
}