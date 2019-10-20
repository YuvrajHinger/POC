package demo;
class Demo20{    
    class Inner1{        
        void fun1(){
            System.out.println("HELLO1");
        }
        class Inner2{
            void fun2(){
                System.out.println("HELLO2");
            }
        }
    }    
    public static void main(String[] args) {
        Demo20.Inner1 i1 = new Demo20().new Inner1();
        Demo20.Inner1.Inner2 i2 = new Demo20().new Inner1().new Inner2();
        i1.fun1();
        i2.fun2();        
    }
}