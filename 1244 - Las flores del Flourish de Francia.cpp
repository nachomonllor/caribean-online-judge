﻿http://coj.uci.cu/24h/problem.xhtml?pid=1244

/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication83;

import java.io.IOException;
import java.util.Scanner;

/**
 *
 * @author Administrador
 */
public class JavaApplication83 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args)  throws IOException{
        // TODO code application logic here
          
            Scanner tec = new Scanner(System.in);
         
            String input = tec.nextLine();

            do {

                String[] palabras = input.split(" ");
                for (int i = 0; i < palabras.length; i++)
                {
                    palabras[i] = palabras[i].toLowerCase();
                }

                char primero = palabras[0].charAt(0);

                String answer = "Y";
                for (int i = 0; i < palabras.length; i++)
                {
                    if (palabras[i].charAt(0) != primero)
                    {
                        answer = "N";
                        break;
                    }
                }

                //Console.WriteLine(answer);
                System.out.println(answer);
                
                input = tec.nextLine();
                
            }while(!input.equals("*"));
    }
}

