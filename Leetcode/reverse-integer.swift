class Solution {
    func reverse(_ x: Int) -> Int {
        let strX = String(x)
        var reversed = String(strX.reversed())
        if (reversed.last == "-"){
            reversed = String(reversed.dropLast())
            reversed = "-" + reversed
        }
        let num = Int(reversed) ?? 0
        if num <= Int(pow(2,31)-1) && num >= Int(-1 * pow(2,31)){
            return num
        }
        return 0
    }
}