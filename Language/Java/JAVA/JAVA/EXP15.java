import java.util.Scanner;
public class EXP15{
    public static void main(String args[]){
        Scanner scan = new Scanner(System.in);
        System.out.println("ENTER ELEMENTS OF MATRIX 3*3");
        int a[][] = new int[3][3];
        int flag=0;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                a[i][j]=scan.nextInt();
                if(j>i){
                    if(a[i][j]!=0) flag=1;                    
                }
                else{
                    if(a[i][j]==0) flag=1;                    
                }
            }
        }
        if(flag==1){
            System.out.println("NOT");
        }
        else{
           System.out.println("YES"); 
        }
    }
}