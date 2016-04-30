/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package calculator;
/*
import java.awt.Color;
import java.awt.Container;
import java.awt.Font;
import javax.swing.*;


public class Calculator {

   
    public static void main(String[] args) {
        // TODO code application logic here
        JFrame frame = new JFrame();
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(800,600);
        frame.setLocation(100,100);
        frame.setTitle("Calculator");
        ImageIcon icon = new ImageIcon("D:\\NetBean\\Calculator\\calculator.png");
        frame.setIconImage(icon.getImage());
        Container c = frame.getContentPane();
        c.setBackground(Color.BLACK);
        frame.setResizable(true);
        
        //setBounds(LocationLeft,LocationRigt,width,height)
        //JTextField
        JTextField mytext = new JTextField();
        Font f = new Font("Arial",Font.BOLD,25);
        mytext.setBounds(100,60,200,20);
        mytext.setFont(f);
        
        JButton b=new JButton("click");//creating instance of JButton  
        b.setBounds(130,100,100, 40);//x axis, y axis, width, height    
        frame.add(b);
        c.add(mytext);
    }

  
}
*/


import java.awt.Color;
import java.awt.GridLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.WindowEvent;
import java.awt.event.WindowFocusListener;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileWriter;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Date;
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;
import java.util.Stack;
import java.util.logging.Level;
import java.util.logging.Logger;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.JScrollPane;
import javax.swing.JTextArea;
import javax.swing.JTextField;
import javax.script.ScriptEngine;
import javax.script.ScriptEngineManager;
import javax.script.ScriptException;


///Accepted on numeric key value
public class Calculator implements ActionListener{
    
    private final JFrame main;
    private final JTextArea hist;
    private final JPanel displayPanel;
    private final JTextField display;
    private final JTextField last;
    private final JTextField mvalue;
     private final JScrollPane scroll;
     private final   FileWriter writer1;
    private final JButton mc,mr,mp,c,del,pm,div,pi,root,rooty,seven,eight,nine,mul,sin,cos,tan,four,five,six,sub,
            ln,log,powerten,one,two,three,add,fact,square,power,zero,perc,point,equal;
    private final String[] names = {"MC","MR","M+","C","Del","±","÷","π","√","<html><font size='4'><sup>y</sup></font>√</html>",
            "7","8","9","x","sin","cos","tan","4","5","6","-","ln","log","<html>10<sup>x</sup></html>","1","2","3","+",
            "n!","<html>x<sup>2</sup></html>","<html>x<sup>y</sup></html>","%","0",".","="};
    
     Calculator() throws FileNotFoundException, IOException {
        main = new JFrame("Calculator");
        main.setSize(840, 480);
        main.setLayout(null);
        main.getContentPane().setBackground(Color.BLACK);
        
        String all;
        all = new Scanner(new File("D:\\NetBean\\Calculator\\src\\calculator\\logs.txt")).useDelimiter("\\A").next();
        Date d = new Date();
        File file =new File("D:\\NetBean\\Calculator\\src\\calculator\\logs.txt");
    		
    		//if file doesnt exists, then create it
    		//if(!file.exists()){
    		//	file.createNewFile();
    		//}
         writer1 = new FileWriter(file,true);
//        BufferedWriter bufferWritter = new BufferedWriter(fileWritter);
    	//fileWritter.write(d.toString());
        writer1.write(d.toString());
        writer1.flush();
        
    	       // bufferWritter.close(); 
        System.out.println(d.toString());
       //writer1.close();
        
        hist = new JTextArea();
        hist.setEditable(false);
        hist.setText(all);
        scroll = new JScrollPane(hist, JScrollPane.VERTICAL_SCROLLBAR_AS_NEEDED,JScrollPane.HORIZONTAL_SCROLLBAR_NEVER);
        scroll.setBounds(660,10,160,440); //x y width height
        hist.setForeground(Color.WHITE);
        hist.setBackground(Color.BLACK);
        hist.setFont(hist.getFont().deriveFont(22f));
        hist.setLineWrap(true);
        hist.setWrapStyleWord(true);
        main.add(scroll);
        
        
        last = new JTextField();
        last.setBounds(400, 10, 180, 30);
        last.setHorizontalAlignment(JTextField.RIGHT);
        last.setBorder(null);
        //last.setText("√5842");
        last.setEditable(false);
        last.setForeground(Color.WHITE);
        last.setBackground(Color.BLACK);
        last.setFont(last.getFont().deriveFont(22f));
        
        mvalue = new JTextField();
        mvalue.setBounds(40, 10, 30, 30);
        mvalue.setHorizontalAlignment(JTextField.RIGHT);
        mvalue.setBorder(null);
       // mvalue.setText("M");
        mvalue.setEditable(false);
        mvalue.setFont(mvalue.getFont().deriveFont(22f));
        mvalue.setForeground(Color.WHITE);
        mvalue.setBackground(Color.BLACK);
        
        display = new JTextField();
        display.setBounds(40, 40, 540, 60);
        display.setHorizontalAlignment(JTextField.RIGHT);
        display.setBorder(null);
        display.setForeground(Color.WHITE);
        display.setBackground(Color.BLACK);
        display.setFont(display.getFont().deriveFont(50f));
        display.setEditable(true);
        
        displayPanel = new JPanel();
        displayPanel.setBackground(Color.BLACK);
        displayPanel.setLayout(new GridLayout(5,7,10,10));
        displayPanel.setBounds(40, 120, 540, 250);
        
        mc = new JButton();
        mc.addActionListener(this);
        mr = new JButton();
        mr.addActionListener(this);
        mp = new JButton();
        mp.addActionListener(this);
        c = new JButton();
        c.addActionListener(this);
        del = new JButton();
        del.addActionListener(this);
        pm = new JButton();
        pm.addActionListener(this);
        div = new JButton();
        div.addActionListener(this);
        pi = new JButton();
        pi.addActionListener(this);
        root = new JButton();
        root.addActionListener(this);
        rooty = new JButton();
        rooty.addActionListener(this);
        seven = new JButton();
        seven.addActionListener(this);
        eight = new JButton();
        eight.addActionListener(this);
        nine = new JButton();
        nine.addActionListener(this);
        mul = new JButton();
        mul.addActionListener(this);
        sin = new JButton();
        sin.addActionListener(this);
        cos = new JButton();
        cos.addActionListener(this);
        tan = new JButton();
        tan.addActionListener(this);
        four = new JButton();
        four.addActionListener(this);
        five = new JButton();
        five.addActionListener(this);
        six = new JButton();
        six.addActionListener(this);
        sub = new JButton();
                sub.addActionListener(this);
        ln = new JButton();
                ln.addActionListener(this);
        log = new JButton();
                log.addActionListener(this);
        powerten = new JButton();
        powerten.addActionListener(this);
        one = new JButton();
        one.addActionListener(this);
        two = new JButton();
        two.addActionListener(this);
        three = new JButton();
        three.addActionListener(this);
        add = new JButton();
        add.addActionListener(this);
        fact = new JButton();
        fact.addActionListener(this);
        square = new JButton();
        square.addActionListener(this);
        power = new JButton();
        power.addActionListener(this);
        zero = new JButton();
        zero.addActionListener(this);
        perc = new JButton();
        perc.addActionListener(this);
        point = new JButton();
        point.addActionListener(this);
        equal = new JButton();
        equal.addActionListener(this);
        JButton[] buttons = {mc,mr,mp,c,del,pm,div,pi,root,rooty,seven,eight,nine,mul,sin,cos,tan,
            four,five,six,sub,ln,log,powerten,one,two,three,add,fact,square,power,perc,zero,point,equal};
        
        Integer[] blacks = {10, 11, 12, 17, 18, 19, 24, 25, 26, 31, 32, 33};
        
        int i=0;
        for(JButton button : buttons){
            button.setText(names[i]);
            button.setFont(button.getFont().deriveFont(18f));
            button.setForeground(Color.WHITE);
            if(Arrays.asList(blacks).contains(i)){
                button.setBackground(new Color(64, 64, 64));
            }
            else if(i == 34){
                button.setBackground(new Color(71, 135, 255));
            }
            else{
                button.setBackground(new Color(92, 92, 92));
            }
            //button.addActionListener(new ButtonActionListner());
            displayPanel.add(button);
            i++;
        }
        
        main.add(mvalue);
        main.add(last);
        main.add(display);
        main.add(displayPanel);
        main.setVisible(true);
        display.requestFocus();
        main.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
 
        public void actionPerformed(ActionEvent e) {
            if(e.getSource() == one){
                display.setText(display.getText()+"1");
            }
            if(e.getSource() == two){
                display.setText(display.getText()+"2");
            }
            if(e.getSource() == three){
                display.setText(display.getText()+"3");
            }
            if(e.getSource() == four){
                display.setText(display.getText()+"4");
            }
            if(e.getSource() == five){
                display.setText(display.getText()+"5");
            }
            if(e.getSource() == six){
                display.setText(display.getText()+"6");
            }
            if(e.getSource() == seven){
                display.setText(display.getText()+"7");
            }
            if(e.getSource() == eight){
                display.setText(display.getText()+"8");
            }
            if(e.getSource() == nine){
                display.setText(display.getText()+"9");
            }
            if(e.getSource() == zero){
                display.setText(display.getText()+"0");
            }
            if(e.getSource() == add){
                display.setText(display.getText()+"+");
            }
            if(e.getSource() == sub){
                display.setText(display.getText()+"-");
            }
            if(e.getSource() == mul){
                display.setText(display.getText()+"*");
            }
            if(e.getSource() == div){
                display.setText(display.getText()+"/");
            }
            if(e.getSource() == sin){
               
                ScriptEngineManager manager = new ScriptEngineManager ();
                ScriptEngine engine = manager.getEngineByName ("js");
                String script = display.getText();
                
                Object result = null;
                try {
                        result = engine.eval(script);
                        System.out.println(result.toString());
                        Double d;
                    d = Double.valueOf(result.toString());
                    double rad = Math.toRadians(d);
                    d=Math.sin(rad);
                        script = "Sin(".concat(script);
                        script = script.concat(")");
                        script=script.concat(d.toString());
                        //Write script queery in File
                        display.setText(d.toString());
                        writer1.write(script);
                        
                        writer1.flush();
                        hist.setText(hist.getText()+script);
                    } catch (ScriptException e3) {
                        e3.printStackTrace();
                    } catch (IOException ex) {
                    Logger.getLogger(Calculator.class.getName()).log(Level.SEVERE, null, ex);
                }
                //display.setText(display.getText()+"log");

            }
            if(e.getSource() == cos){
                //display.setText(display.getText()+"cos");
                ScriptEngineManager manager = new ScriptEngineManager ();
                ScriptEngine engine = manager.getEngineByName ("js");
                String script = display.getText();
                
                Object result = null;
                try {
                        result = engine.eval(script);
                         Double d;
                    d = Double.valueOf(result.toString());
                    double rad = Math.toRadians(d);
                    d=Math.cos(rad);
                        script = "Cos(".concat(script);
                        script = script.concat(")");
                        script=script.concat(d.toString());
                        writer1.write(script);
                        writer1.flush();
                         hist.setText(hist.getText()+script);
                        System.out.println(result.toString());
                        display.setText(d.toString());
                
                } catch (ScriptException e3) {
                        e3.printStackTrace();
                } catch (IOException ex) {
                    Logger.getLogger(Calculator.class.getName()).log(Level.SEVERE, null, ex);
                }
//                display.setText(display.getText()+"log");

            }
            if(e.getSource() == tan){
                //display.setText(display.getText()+"tan");
                ScriptEngineManager manager = new ScriptEngineManager ();
                ScriptEngine engine = manager.getEngineByName ("js");
                String script = display.getText();
                Object result = null;
                try {
                        result = engine.eval(script);
                         Double d;
                    d = Double.valueOf(result.toString());
                    double rad = Math.toRadians(d);
                    d=Math.tan(rad);
                        System.out.println(result.toString());
                        script = "Tan(".concat(script);
                        script = script.concat(")");
                        script = script.concat(d.toString());
                        writer1.write(script);
                        writer1.flush();
                         hist.setText(hist.getText()+script);
                        display.setText(d.toString());
                    } catch (ScriptException e3) {
                        e3.printStackTrace();
                } catch (IOException ex) {
                    Logger.getLogger(Calculator.class.getName()).log(Level.SEVERE, null, ex);
                }
//                display.setText(display.getText()+"log");

            }
            if(e.getSource() == log){
                ScriptEngineManager manager = new ScriptEngineManager ();
                ScriptEngine engine = manager.getEngineByName ("js");
                String script = display.getText();
                Object result = null;
                try {
                        result = engine.eval(script);
                         Double d;
                    d = Double.valueOf(result.toString());
                    
                    d=Math.log(d);
                        System.out.println(result.toString());
                        script = "Log(".concat(script);
                        script = script.concat(")");
                        script=script.concat(d.toString());
                        writer1.write(script);
                        writer1.flush();
                         hist.setText(hist.getText()+script);
                        display.setText(d.toString());
                    } catch (ScriptException e3) {
                        e3.printStackTrace();
                } catch (IOException ex) {
                    Logger.getLogger(Calculator.class.getName()).log(Level.SEVERE, null, ex);
                }
                //display.setText(display.getText()+"log");
            }
            if(e.getSource() == power){
                display.setText(display.getText()+"^");
            }
            if(e.getSource() == c){
                display.setText("");
            }
            if(e.getSource() == equal){
                ScriptEngineManager manager = new ScriptEngineManager ();
                ScriptEngine engine = manager.getEngineByName ("js");
                String script = display.getText();
                Object result = null;
                try {
                        result = engine.eval(script);
                        System.out.println(result.toString());
                         hist.setText(hist.getText()+result);
                        display.setText(result.toString());
                    } catch (ScriptException e3) {
                        e3.printStackTrace();
                }
                
               // String[] rpn = toRPN(preprocess(query));
               // Call Eval function on click
            }
        }
        
    
	 public static void main(String[] args) throws FileNotFoundException, IOException {
       Calculator a = new Calculator();
    
	 }
}


