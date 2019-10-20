public class Ex{
    public static void main(String args[]){
        try{
            args = null;
            args[0] = "test";
            System.out.println(args[0]);
        }
        catch(Exception e){
            System.out.println(e);
        }
    }
}