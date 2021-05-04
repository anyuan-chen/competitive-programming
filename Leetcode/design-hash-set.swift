
class MyHashSet {

    var mySet = Set<Int>()
    init() {
        
    }
    
    func add(_ key: Int) {
        mySet.insert(key)
    }
    
    func remove(_ key: Int) {
        mySet.remove(key)
    }
    
    /** Returns true if this set contains the specified element */
    func contains(_ key: Int) -> Bool {
        return mySet.contains(key)
    }
}

/**
 * Your MyHashSet object will be instantiated and called as such:
 * let obj = MyHashSet()
 * obj.add(key)
 * obj.remove(key)
 * let ret_3: Bool = obj.contains(key)
 */