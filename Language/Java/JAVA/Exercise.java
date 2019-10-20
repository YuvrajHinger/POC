// Q1. 3x3 Matrix
//     a. Transpose
//     b. 3x3 Matrix
//     c. Add
//     d. Multiply
// 1 2 3   2 1 3 
// 2 3 1   2 2 1
// 3 4 1   3 4 1
package demo;
import java.io.*;
public class Exercise{
    public static void main(String arg[]){
        DataInputStream ds = new DataInputStream(System.in);            
        int a[][] = null;
        int b[][] = null;
        int c[][] = null;
        int t[][] = null;
        int ch,flag=1,i,j,x;
        while(flag==1){        
            try{   
                System.out.println("MATRIX a");
                a = new int[3][3];
                for(i=0;i<3;i++){
                    for(j=0;j<3;j++){
                        a[i][j]=Integer.parseInt(ds.readLine());
                    }
                }
                System.out.println("MATRIX b");
                b = new int[3][3];
                for(i=0;i<3;i++){
                    for(j=0;j<3;j++){
                        b[i][j]=Integer.parseInt(ds.readLine());
                    }
                }           
                System.out.println("CHOICE 1. Transpose 2. ADD 3. Multiply");       
                ch = Integer.parseInt(ds.readLine());
                switch(ch){
                    case 1: t = new int[3][3];
                            for(i=0;i<3;i++){
                                for(j=0;j<3;j++){                                
                                    t[i][j]=a[j][i];
                                }                                
                            }    
                            for(i=0;i<3;i++){
                                for(j=0;j<3;j++){
                                    System.out.println(t[i][j]);
                                }
                            }                    
                            break;                     
                    case 2: for(i=0;i<3;i++){
                              for(j=0;j<3;j++){
                                  System.out.println(a[i][j]+b[i][j]);
                              }
                            }
                            break;
                    case 3: for(i=0;i<3;i++){
                              for(j=0;j<3;j++){
                                  System.out.println(a[i][j]*b[i][j]);
                              }
                            }
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