// Website: HackerRank
// Topic: Problem Solving
// Challenge: Sales by Match
// Date: 05/21/23
// Author: Migx3

fn sock_merchant(n: i32, ar: &[i32]) -> i32 {

    let mut indexes = vec![];

    let mut pairs = 0;

    let n = n as usize;

    let mut test = false;

    for mut i in 0..n {

        let mut number_1 = ar[i];
        
        let ptr = &mut i;

        for mut j in (*ptr) + 1..n {
            
            if test {
                j = *ptr + 1;
                test = false;
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

                    test = true;
                }
            }
        }
    }

    pairs
}

fn main() {
    let ar = [6, 5, 2, 3, 5, 2, 2, 1, 1, 5, 1, 3, 3, 3, 5];

    let n = ar.len().try_into().unwrap();

    let pairs = sock_merchant(n, &ar);

    println!("Pairs: {pairs}");
}