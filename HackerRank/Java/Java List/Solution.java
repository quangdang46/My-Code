import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        List<Integer> list = new ArrayList<Integer>();
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for(int i=0;i<n;i++){
            list.add(sc.nextInt());
        }
        int t=sc.nextInt();
        for(int i=0;i<t;i++){
            String choice;
            choice = sc.next();
            if(choice.equals("Insert")){
                int x = sc.nextInt();
                int y = sc.nextInt();
                list.add(x,y);
            }else{
                int z = sc.nextInt();
                list.remove(z);
            }
        }
        for(int i=0;i<list.size();i++){
            System.out.print(list.get(i)+" ");
        }
    }
}