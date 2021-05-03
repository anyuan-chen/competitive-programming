class Solution {
    func search(_ nums: [Int], _ target: Int) -> Int {
        var low = 0;
        var high = nums.count-1;
        var mid: Int;
        while (low <= high){
            mid = (low + high )/2;
            if target == nums[mid]{
                return mid
            }
            else if target > nums[mid]{
                low = mid + 1
            }
            else if target < nums[mid]{
                high = mid - 1
            }
        }
        return -1
    }
}