//https://leetcode.com/problems/dot-product-of-two-sparse-vectors/description/

public class DotProductTwoArrays {
    public static void main(String[] args) {

        int[] nums1 = { 1, 0, 0, 2, 3 };
        int[] nums2 = { 0, 3, 0, 4, 0 };

        int[] nums3 = { 0, 1, 0, 0, 0 };
        int[] nums4 = { 0, 0, 0, 0, 2 };

        int[] nums5 = { 0, 1, 0, 0, 2, 0, 0 };
        int[] nums6 = { 1, 0, 0, 0, 3, 0, 4 };

        System.out.println(dotProductTwoArrays(nums1, nums2));
        System.out.println(dotProductTwoArrays(nums3, nums4));
        System.out.println(dotProductTwoArrays(nums5, nums6));
    }

    private static int dotProductTwoArrays(int[] nums1, int[] nums2) {
        int result = 0;
        int size = nums1.length;

        for (int i = 0; i < size; i++) {
            result += nums1[i] * nums2[i];

        }

        return result;
    }
}
