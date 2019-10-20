package demo;
import java.awt.*;

import javafx.scene.control.ComboBox;
public class Demo23{
    public static void main(String[] args) {
        Frame f = new Frame("GREET");
        Button b = new Button("SUBMIT");
        TextField tf = new TextField("TEXT FILED");
        FlowLayout fl = new FlowLayout();
        Choice ch = new Choice();
        ch.add("CSE");        
        ch.add("CSE");
        f.setLayout(fl);
        f.add(b);
        f.add(tf);
        f.setSize(300,800);
        f.setVisible(true);
    }
}