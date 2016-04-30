/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package mathexpressionevalution;
import java.io.*;
import java.util.*;
import java.math.BigInteger;

/**
 *
 * @author Raghav Atreya
 */
public class MathExpressionEvalution {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
       String str = "8 + 2 / 5 + 2 * 5"; 
        double d;
        MathExpressionEvalution a = new MathExpressionEvalution();
        d = a.Evaluate(str);
        
    }
    
    /**
     *
     * @param seval
     * @return
     */
    public  double Evaluate(String seval)
    {
        double retValue = 0d;
        double Ce = 2.71828182d;
        double Cpi = 3.14159265d;
         
        Stack<String> operator = new Stack<>();
        Stack<String> operand = new Stack<>();  
        operator.push("#");
        if(seval.contains("con") || seval.contains("sin") || seval.contains("tan"))
        {
             
        }
        if(seval == null)
        {
            //Exit on Evaluation string if null
            //System.exit(0);
            retValue = -1.0d;
        }
        else
        {  
            int index=0;
            String arr[];
           /* int offset=0;
            for(int l=0;l<seval.length();l++)
            {
              if(seval.charAt(l)=='*' || seval.charAt(l)=='+' || seval.charAt(l)=='-' || seval.charAt(l)=='/' ||  seval.charAt(l)=='^')
              {
                arr[index]=arr[index].copyValueOf(seval,offset,l-1);
                index++;
                arr[index]=arr[index].copyValueOf(seval,offset,l-1);
              } 
            }
            */
            arr = seval.split("[ \t]+");
           
            boolean exist=false;
            String opPrecedence[] = new String[5];
            opPrecedence[0]="#";
            opPrecedence[1]="+ -";
            opPrecedence[2]="* / %";
            opPrecedence[3]="^";
            opPrecedence[4]="ABS SQRT LOG SIN COS TAN";
                            
            String postfix = new String(" ");
            int i=0;
            int j=0;
            int NewPrecedence=-1;
            int OldPrecedence=-1;
            for(i=0;i<arr.length;i++)
            {
               System.out.println("  "+arr[i]);
               exist=false;
               for(j=0;j<4;j++)
               {
                  if(opPrecedence[j].contains(arr[i]))
                  {
                       // System.out.println("Precedence "+arr[i]);
                        NewPrecedence=j;
                        exist=true;
                        break;
                  }
               }
               if(exist)//current element is operator
               {
                     if(NewPrecedence>OldPrecedence)
                     {
                         System.out.println("Pushing in operator stack");
                         operator.push(arr[i]);
                         OldPrecedence = NewPrecedence;
                     }
                     else
                     {        
                         // old has bigger Precedencce
                        System.out.println("Element is Stack"+Arrays.toString(operator.toArray()));
                             while(!operator.empty() &&  OldPrecedence >= NewPrecedence )
                               { 
                                   postfix=postfix.concat((operator.pop()).concat(" "));  //Now Update the OldPrecedence
                                   String  str = operator.pop();
                                    for(j=0;j<4;j++)
                                    {
                                     if(opPrecedence[j].contains(str))
                                     {
                                     // System.out.println("Precedence "+arr[i]);
                                       OldPrecedence=j;
                                       break;
                                     }
                                    }    
                                     operator.push(str);
                                
                                    
                              } 
                              operator.push(arr[i]);
                              OldPrecedence = NewPrecedence;
                     }
                     
                 
               }
             else
            {		//operand.push(arr[i]);
			postfix=postfix.concat(arr[i].concat(" "));
            }
               System.out.println(postfix);
            }
            while(!operator.empty()){
                String str = operator.pop();
                if(!str.equals("#"))
                postfix = postfix.concat(str.concat(" "));
            }
            // Calulation for the expression
            String brr[];
            brr = postfix.split("[ \t]+");
            for(i=0;i<brr.length;i++){
                if(brr[i].equals("*") || brr[i].equals("+") || brr[i].equals("/") || brr[i].equals("-") || brr[i].equals("^"))
                {
			
		          System.out.println("Evaluting the expression due to lower or equal precedene");
                          BigInteger b = new BigInteger(operator.pop());
                          BigInteger a = new BigInteger(operator.pop());
                          String op = brr[i];
                          System.out.println(" A "+a+" B "+" op "+op);
                          switch(op)
                          {
                              case "+" : a= a.add(b);
                                          break;
                              case "-" : a=a.subtract(b);
                                           break;
                              case "*": a=a.multiply(b);
                                            break;
                              case "/" :a=a.divide(b);
                                         break;
                              case "^" :a = a.pow(b.intValue());
                                        break;
                          }
                          operator.push(a.toString());
                }
                else{
                    System.out.println("Inside the Else"+brr[i]);
                operator.push(brr[i]);
                }

//                        System.out.println("Answer + "+retValue);
                
        }
            String str = operator.pop();
            System.out.println("Final Answer "+str );
            System.out.println("Answer "+postfix);
        }
        return retValue;
    }
    
}