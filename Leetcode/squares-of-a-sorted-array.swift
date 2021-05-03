class Solution {
    func sortedSquares(_ nums: [Int]) -> [Int] {
        var arr = [Int]()
        nums.forEach { num in
            arr.append(num*num)
        }
        return arr.sorted()
    }
}