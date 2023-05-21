// Website: HackerRank
// Topic: Problem Solving
// Challenge: Sales by Match
// Date: 05/21/23
// Author: Migx3

fn sock_merchant(n: i32, ar: &[i32]) -> i32 {

    let mut indexes = vec![];

    let mut pairs = 0;

    let n = n as usize;

    let mut modified = false;

    for mut i in 0..n {

        let mut number_1 = ar[i];
        
        let ptr = &mut i;

        for mut j in (*ptr) + 1..n {
            
            if modified {
                j = *ptr + 1;
                modified = false;
            }

            let number_2 = ar[j];
            
            if number_1 == number_2 {

                let contains_indexes = indexes.contains(&(*ptr)) || indexes.contains(&j);
    
                    if !contains_indexes {
                    
                    indexes.push(*ptr);
                    indexes.push(j);

                    (*ptr) += 1;
                    
                    number_1 = ar[*ptr];
                    
                    pairs += 1;

                    modified = true;
                }
            }
        }
    }

    pairs
}
