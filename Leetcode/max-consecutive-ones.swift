class Solution {
    func findMaxConsecutiveOnes(_ nums: [Int]) -> Int {
        var cur = 0
        var high = 0
        for number in nums {
            if number != 1 {
                high = max(cur, high)
                cur = 0
            }
            else{
                cur += 1
            }
        }
        return max(cur, high)

    }   
}