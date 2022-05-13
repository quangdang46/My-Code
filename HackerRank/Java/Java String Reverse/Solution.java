import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        String A=sc.next();
        /* Enter your code here. Print output to STDOUT. */
        // int a=0,b=A.length()-1;
        // boolean flag=false;
        // while(a<b){
        //     if(A.charAt(a)!=A.charAt(b)){
        //         System.out.println("No");
        //         flag=true;
        //         return;
        //     }
        //     a++;
        //     b--;
        // }
        // if(!flag){
        //     System.out.println("Yes");
        // }
        System.out.println( A.equals( new StringBuilder(A).reverse().toString()) ? "Yes" : "No" );
        
    }
}