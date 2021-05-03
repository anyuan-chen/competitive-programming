class Solution {
    func mySqrt(_ x: Int) -> Int {
        var low = 0
        var high = Int(pow(2,31)-1)
        var mid: Int
        while (low <= high){
            mid = low + (high-low) / 2
            if mid * mid > x{
                high = mid-1
            }
            else if mid * mid < x{
                low = mid + 1
            }
            else {
                return mid
            }
        }
        return high
    }
}