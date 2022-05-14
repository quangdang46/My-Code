import java.io.*;
import java.sql.Array;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        ArrayList<ArrayList<Integer>> arr = new ArrayList<ArrayList<Integer>>();
        Scanner scanner = new Scanner(System.in);
        int t;
        t=scanner.nextInt();
        for(int j=0; j<t; j++) {
            ArrayList<Integer> temp = new ArrayList<Integer>();
            int n=scanner.nextInt();
            for(int i=0; i<n; i++){
                temp.add(scanner.nextInt());
            }
            arr.add(temp);
        }
        t=scanner.nextInt();
        for(int j=0; j<t; j++){
            int x=scanner.nextInt();
            int y=scanner.nextInt();
            try{
                System.out.println(arr.get(x-1).get(y-1));
            }
            catch(Exception e){
                System.out.println("ERROR!");
            }
        }
        
    }
}