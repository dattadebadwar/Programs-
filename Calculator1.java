// Event handling in this file 
// Stadalone calculator 

import java.awt.*;
import java.awt.event.*;

class Calculator1
{
    public static void main(String A[]) 
    {
        MarvellousCalculator mobj=new MarvellousCalculator(400,400,"Marvellous ");
    }
}

class MarvellousCalculator extends WindowAdapter implements ActionListener
{
    public Frame fobj;
    public Button b1,b2,b3,b4;
    public TextField t1,t2;
    public Label lobj;
    public Integer No1,No2;

    public  MarvellousCalculator(int width,int height , String title)
    {
        fobj=new Frame(title);
        fobj.setSize(width,height);
        

        fobj.addWindowListener(this);

        b1=new Button("Add");
        b2=new Button("Sub");
        b3=new Button("Mult");
        b4=new Button("Div");

        t1=new TextField();
        t2=new TextField();

        

        b1.setBounds(10,280,80,40);    // x y  width height 
        b2.setBounds(100,280,80,40);    // x y  width height 
        b3.setBounds(190,280,80,40);    // x y  width height 
        b4.setBounds(290,280,80,40);

        t1.setBounds(70,100,100,40);    // x y  width height 
        t2.setBounds(220,100,100,40);
        
        fobj.add(b1);
        fobj.add(b2);
        fobj.add(b3);
        fobj.add(b4);

        fobj.add(t1);
        fobj.add(t2);

        lobj=new Label();
        lobj.setBounds(150,25,200,100);
        fobj.add(lobj);

        b1.addActionListener(this);
        b2.addActionListener(this);
        b3.addActionListener(this);
        b4.addActionListener(this);

        fobj.setLayout(null);
        fobj.setVisible(true);
        
    }
    public void windowClosing(WindowEvent obj)//event handeler for frame 
    {
        System.exit(0);
    }
    public void actionPerformed(ActionEvent aobj)   //event handler for buttons 
    {
        try
        {
            No1=Integer.parseInt(t1.getText());
            No2=Integer.parseInt(t2.getText());

            if(aobj.getSource()==b1)
            {
                lobj.setText("Addition is : "+(No1+No2));
               
            }
            else if(aobj.getSource()==b2)
            {
                lobj.setText("Substraction is : "+(No1-No2));
            }
            else if(aobj.getSource()==b3)
            {
                lobj.setText("Multiplication  is : "+(No1*No2));

            }
            else if(aobj.getSource()==b4)
            {
                lobj.setText("Division is : "+(No1/No2));
            }
        }
        catch(Exception eobj)
        {

        }
    }
}
