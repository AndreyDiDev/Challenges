import java.util.Arrays;


class Solution {
    
public static void main(String[] args) {
    int[] nums = {3,2,2,3}; // Input array
    int val = 3; // Value to remove
    int[] expectedNums = {2,2}; // The expected answer with correct length.
                                // It is sorted with no values equaling val.

    Solution sol = new Solution();

    int k = sol.removeElement(nums, val); // Calls your implementation

    assert k == expectedNums.length;

    Arrays.sort(nums, 0, k); // Sort the first k elements of nums

    int actualLength = nums.length;

    for (int i = 0; i < actualLength; i++) {
        assert nums[i] == expectedNums[i];
    }
}

    public int removeElement(int[] nums, int val) {
        System.out.println("running Remove Element");
        return 0;
    }
}
