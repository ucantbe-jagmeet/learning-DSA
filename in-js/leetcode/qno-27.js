function temp(nums, val) {
    let count = 0

    for (let key of nums) {
        if (key != val) {
            nums[count++] = key
        }
    }
    return nums
}

console.log(temp([3, 2, 2, 3], 2));