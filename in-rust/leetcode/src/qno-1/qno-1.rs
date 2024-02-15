use std::collections::HashMap;

fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {
    let mut hm = HashMap::new();
    println!("hm are: {:?}", hm);
    for (i, &num) in nums.iter().enumerate() {
        if let Some(&j) = hm.get(&num) {
            // If the complement exists, return the indices
            return vec![j as i32, i as i32];
        }
        // Insert the complement of the current element (target - num) with its index
        hm.insert(target - num, i);
    }
    vec![] // Return an empty vector if no solution is found
}

fn main() {
    let nums = vec![2, 7, 11, 15];
    let target = 9;
    let indexes = two_sum(nums, target);
    println!("Indexes are: {:?}", indexes);
}