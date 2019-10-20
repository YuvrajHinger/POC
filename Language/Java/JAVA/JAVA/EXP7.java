// MULTILEVEL INHERITANCE WITH SUPER KEYWORD
class GrandParent{
    int age;
    public void age(){
        this.age=70;
        System.out.println("GRANDPARENT AGE = "+age);
    } 
}
class Parent extends GrandParent{
    public void age(){        
        super.age();
        this.age=45;
        System.out.println("PARENT AGE = "+age);
    }
}
public class EXP7 extends Parent{
    public void age(){    
        super.age();
        this.age=20;
        System.out.println("CHILD AGE = "+age);
    }
    public static void main(String args[]){
        EXP7 e = new EXP7();
        e.age();
    }
}