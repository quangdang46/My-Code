import java.util.ArrayList;
import java.util.BitSet;
import java.util.Scanner;

public class Solution {

    public static void main(String[] args) throws Exception {
        ArrayList<BitSet> bitSets = new ArrayList<>();
        Scanner in = new Scanner(System.in);
        bitSets.add(new BitSet(in.nextInt()));
        bitSets.add(new BitSet(in.nextInt()));
        while (in.hasNext()) {
            String operation = in.next();
            int left = in.nextInt();
            int right = in.nextInt();

            try {
                BitSet.class.getMethod(operation.toLowerCase(), BitSet.class).invoke(bitSets.get(left - 1), bitSets.get(right - 1));
            } catch (NoSuchMethodException e) {
                BitSet.class.getMethod(operation.toLowerCase(), int.class).invoke(bitSets.get(left - 1), right);
            } finally {
                System.out.println(bitSets.get(0).cardinality() + " " + bitSets.get(1).cardinality());
            }
        }
    }
}