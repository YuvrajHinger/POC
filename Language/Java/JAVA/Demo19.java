//Here two dot  classes will be generated 1.) is Demo19.class 2.) Demo19$inner.class
//There are Four Inner Classes based on there declaration and position.
//1. Regular or normal Inner class 2. Method Local Inner class
//3. Anonymous inner Class         4. Static Inner Class
package demo;
class Demo19{
    int x=1;
    static int y=200;
    class Inner{
        int x=10;
        static int z=300;
        void fun1(){
            int x=100;
            System.out.println(x+"\n"+this.x+"\n"+Demo19.this.x+"\n"+y);    
        }
    }    
    public static void main(String[] args) {
        //1. Demo19 d = new Demo19();
           //Demo19.Inner i = d.new Inner();        
           //i.fun1();
        //2. new Demo19().new Inner().fun1();        
        //3.
        Demo19.Inner d1 = new Demo19().new Inner();
        d1.fun1();
        System.out.println(d1.x);
    }
}