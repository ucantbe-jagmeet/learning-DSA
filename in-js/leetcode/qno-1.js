function temp(nums, target) {
    let obj = {}

    for (let i = 0; i < nums.length; i++) {
        let diff = target - nums[i]

        if (diff in obj) {
            return [obj[diff], i]
        }
        obj[nums[i]] = i
    }
    return []
}

console.log(temp([2, 7, 11, 15], 9));