//https://leetcode.com/problems/max-consecutive-ones/description/

public class MaxConsecutivesOnes {
    public static void main(String[] args) {
        int[] nums = { 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 0, 1, 0, 0, 0, 1 };

        System.out.println(consecutiveOnes(nums));
    }

    private static int consecutiveOnes(int[] nums) {

        int count = 0;
        int total = 0;

        for (int num : nums) {
            if (num == 1) {
                count++;
            }

            if (num == 0) {
                if (count > total) {
                    total = count;
                }
                count = 0;
            }

        }
        return count > total ? count : total;
    }
}
