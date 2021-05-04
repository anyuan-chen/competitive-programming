extension StringProtocol {
    subscript(offset: Int) -> Character { self[index(startIndex, offsetBy: offset)] }
    subscript(range: Range<Int>) -> SubSequence {
        let startIndex = index(self.startIndex, offsetBy: range.lowerBound)
        return self[startIndex..<index(startIndex, offsetBy: range.count)]
    }
    subscript(range: ClosedRange<Int>) -> SubSequence {
        let startIndex = index(self.startIndex, offsetBy: range.lowerBound)
        return self[startIndex..<index(startIndex, offsetBy: range.count)]
    }
    subscript(range: PartialRangeFrom<Int>) -> SubSequence { self[index(startIndex, offsetBy: range.lowerBound)...] }
    subscript(range: PartialRangeThrough<Int>) -> SubSequence { self[...index(startIndex, offsetBy: range.upperBound)] }
    subscript(range: PartialRangeUpTo<Int>) -> SubSequence { self[..<index(startIndex, offsetBy: range.upperBound)] }
}

class Solution {
    func detectCapitalUse(_ word: String) -> Bool {
        let uppercaseWord = word.uppercased()
        var differences: Int = 0
        for num in 0..<word.count {
            if (uppercaseWord[num] != word[num]){
                differences += 1
            }
        }
        if (differences == word.count || differences == 0 || differences == word.count-1 &&     uppercaseWord[0] == word[0]) {
            return true;
        }
        return false
    }
}