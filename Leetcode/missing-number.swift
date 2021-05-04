class Solution {
    func missingNumber(_ nums: [Int]) -> Int {
        var result = 0
        var counter = 1
        for number in nums {
            result ^= number
            result ^= counter
            counter += 1
        }
        return result
    }
}