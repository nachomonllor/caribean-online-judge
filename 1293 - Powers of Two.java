http://coj.uci.cu/24h/problem.xhtml?pid=1293
/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication100;

import java.util.Scanner;
import java.math.BigInteger;

/**
 *
 * @author Administrador
 */
public class JavaApplication100 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
        Scanner sc = new Scanner(System.in);
        int N = Integer.parseInt(sc.nextLine());
        
        BigInteger prod = new BigInteger("1");
        BigInteger dos = new BigInteger("2");
        for(int i =0; i < N; i++) {
            
            prod = prod.multiply(dos);
        }
        
        System.out.println(prod);
        
    }
}
