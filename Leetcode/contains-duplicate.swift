class Solution {
    func containsDuplicate(_ nums: [Int]) -> Bool {
        var st = Set<Int>()
        for number in nums {
            st.insert(number)
        }
        if (st.count != nums.count){
            return true
        }
        return false
    }
}