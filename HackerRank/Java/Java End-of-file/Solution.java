import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */

        String tmp;
        int i=1;
        Scanner scanner = new Scanner(System.in);
        while(scanner.hasNext()){
            tmp = scanner.nextLine();
            System.out.println(i+" "+tmp);
            i++;
        }
    }
}