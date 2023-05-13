// Website: HackerRank
// Topic: Problem Solving
// Challenge: Migratory Birds
// Date: 05/13/23
// Author: Migx3

use std::collections::HashMap;

fn migratory_birds(arr: &[i32]) -> i32 {
    let mut numbers: HashMap<i32, i32> = HashMap::new();

    for number in arr {
        *numbers.entry(*number).or_insert(0) += 1;
    }

    let mut max_species = None;
    let mut max_count = 0;

    for (species, count) in numbers {
        if count > max_count || (count == max_count && species < max_species.unwrap()) {
            max_species = Some(species);
            max_count = count;
        }
    }

    max_species.unwrap()
}
