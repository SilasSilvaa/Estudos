//https://leetcode.com/problems/find-numbers-with-even-number-of-digits/description/

public class FindNumbersWithEvenNumberOfDigits {
    public static void main(String[] args) {
        int[] nums = { 555, 901, 482, 1771 };

        System.out.println(findEvenNumberDigits(nums));
    }

    private static int findEvenNumberDigits(int[] nums) {
        int evenNumber = 0;

        for (int num : nums) {
            int div = num;
            int count = 0;

            while (div > 0) {
                div /= 10;
                count++;
            }

            if (count % 2 == 0) {
                evenNumber++;
            }
        }

        return evenNumber;
    }
}
