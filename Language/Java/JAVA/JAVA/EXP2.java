MEREGE TWO ARRAY
import java.util.Scanner;
public class EXP2{
    public static void main(String args[]){
        Scanner scan = new Scanner(System.in);
        System.out.println("ENTER SIZE OF FIRST ARRAY");
        int a[] = new int[scan.nextInt()];
        System.out.println("ENTER SIZE OF SECOND ARRAY");
        int b[] = new int[scan.nextInt()];
        int t=a.length+b.length;
        int c[] = new int[t];
        int i=0,j=0;                         
        System.out.println("ENTER ELEMENTS OF SECOND ARRAY");
        for(i=0;i<a.length;i++) a[i]=scan.nextInt();
        System.out.println("ENTER ELEMENTS OF SECOND ARRAY");        
        for(i=0;i<b.length;i++) b[i]=scan.nextInt();
        i=0; j=0;
        System.out.println("ELEMENTS OF NEW ARRAY");        
        while(i!=t){
            if(i<a.length){
                c[i]=a[i]; 
            }
            else{
              c[i]=b[j]; j++;
            }
            System.out.println(c[i]);
            i++;
        }
    }
}