function temp(nums, val) {
    if (nums.length === 0) {
        return []
    }

    let uniqueIndex = 0

    for (let i = 0; i < nums.length; i++) {
        if (nums[i] !== val) {
            nums[uniqueIndex] = nums[i];
            uniqueIndex++;
        }
    }
    let result = nums.length = uniqueIndex
    return result
}

console.log(temp([3, 2, 2, 3], 2));