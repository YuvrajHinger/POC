package demo;
class Demo21{
        int x;
        void fun1(){
            int p=100;
            class Inner1{
                void sum(int x,int y){
                    System.out.println(x+y);
                    System.out.println(p);
                }                
            }
            Inner1 i = new Inner1();
            i.sum(10, 20);
            fun2();
        }
        void fun2(){
            System.out.println("DEMO21");
        }        
    public static void main(String[] args) {
        Demo21 i1 = new Demo21()        ;        
        i1.fun1();        
    }
}