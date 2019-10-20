// Explicit define Exception && try catch throw throws 
// Throwable => 1. Exception -> a. Unchecked(compile_time) >>IOexception,MySQLexception,Filenotfound,Methodnotfound   b. Checked(Runtime) >> 2. Error
package demo;
class MyException extends Exception{
    public String toString(){
        return "MyException";
    }
}
public class Demo2{
    void fun() throws Exception{
        throw new MyException();
    }
    public static void main(String args[]){
        try{
           Demo2 d = new Demo2();
           d.fun(); 
        }
        catch(Exception e){
            System.out.println(e);
        }
    }
}