class Solution {
    func singleNumber(_ nums: [Int]) -> Int {
        var num = 0;
        for number in nums {
            num ^= number
        }
        return num
    }
}