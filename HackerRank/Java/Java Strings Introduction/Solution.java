import java.io.*;	
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        String s1=sc.next();
        String s2=sc.next();
        /* Enter your code here. Print output to STDOUT. */
        int sum = s1.length() + s2.length();
        System.out.println(sum);
        if (s1.compareTo(s2) > 0) {
            System.out.println("Yes");
        } else {
            System.out.println("No");
        }
        String s3 = s1.substring(0, 1).toUpperCase() + s1.substring(1);
        String s4 = s2.substring(0, 1).toUpperCase() + s2.substring(1);
        System.out.println(s3 + " " + s4);
    }
}