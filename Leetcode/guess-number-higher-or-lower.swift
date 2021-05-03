/** 
 * Forward declaration of guess API.
 * @param  num -> your guess number
 * @return 	     -1 if the picked number is lower than your guess number
 *			      1 if the picked number is higher than your guess number
 *               otherwise return 0
 * func guess(_ num: Int) -> Int 
 */

class Solution : GuessGame {
    func guessNumber(_ n: Int) -> Int {
        var low = 1
        var high = Int(pow(2,31)-1)
        var mid: Int
        while (low <= high){
            mid = low + (high-low)/2
            if guess(mid) == 1{
                low = mid + 1
            }
            else if guess(mid) == -1{
                high = mid-1
            }
            else{
                return mid
            }
        }
        return 0
    }
}