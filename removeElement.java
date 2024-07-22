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

        System.out.println("Before sort");

        for (int number : nums) {
            System.out.println(number);
        }

        for(int i = 0; i < nums.length - 1; i++){

            // find removing number
            if(nums[i] == val){

                // shift all elements left
                for(int j = i; i < nums.length - 1; j++){
                    
                    System.out.println(j + "nums len "  + nums.length);

                    // System.out.println("Number to save: " + nums[j+1] + " num replaced: " + nums[j]);
                    if(j+1 < nums.length){
                        int saveNum = nums[j+1];
                        nums[j] = saveNum;
                    }

                }
            }
        }

        for (int number : nums) {
            System.out.println(number);
        }

        return 0;
    }

    
}
