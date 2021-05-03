class Solution {
    func findNumbers(_ nums: [Int]) -> Int {
        var total = 0
        for num in nums{
            let str: String = String(num)
            if str.count % 2 == 0 {
                total += 1
            }
        }
        return total
    }
}