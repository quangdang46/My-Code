import java.util.Scanner;

public class Solution {

    static boolean isAnagram(String s1, String s2) {
        // Complete the function
        int[] letters = new int[26];
        s1=s1.toLowerCase();
        s2=s2.toLowerCase();
        for (int i = 0; i < s1.length(); i++) {
            letters[s1.charAt(i) - 'a']++;
        }
        for (int i = 0; i < s2.length(); i++) {
            letters[s2.charAt(i) - 'a']--;
        }
        for (int i = 0; i < 26; i++) {
            if (letters[i] != 0) {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
    
        Scanner scan = new Scanner(System.in);
        String a = scan.next();
        String b = scan.next();
        scan.close();
        boolean ret = isAnagram(a, b);
        System.out.println( (ret) ? "Anagrams" : "Not Anagrams" );
    }
}