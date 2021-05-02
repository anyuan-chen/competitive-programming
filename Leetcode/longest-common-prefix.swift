
class Solution {
    func longestCommonPrefix(_ strs: [String]) -> String {
        var longestPrefix = strs[0]
        var success = true
        while (success){
            success = false;
            for word in strs {
                if (!word.hasPrefix(longestPrefix)){
                    success = true;
                    longestPrefix.removeLast();
                }
            }
        }
        return longestPrefix
    }
}