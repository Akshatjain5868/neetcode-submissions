func hasDuplicate(nums []int) bool {
    freq := make(map[int]int)
    n := len(nums)
    for i := 0; i < n; i++ {
        _, exists := freq[nums[i]]
        if exists {
            return true
        }
        freq[nums[i]]++
    }
    return false
}
