// DUPLICATE ELEMENT REMOVAL
public class EXP1{
 public static void main(String args[]){
 	int a[] = new int[args.length];
        int i,j,s;
        for(i=0,j=0;i<args.length;i++,j++){
          a[j]=Integer.parseInt(args[i]);	  
	  for(s=0;s<j;s++){
	    if(a[s]==a[j]){
	      j--; break;
	    }
	  }
        }
	for(i=0;i<j;i++){
	  System.out.println(a[i]);
	}
 }
}
