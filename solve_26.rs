// Website: HackerRank
// Topic: Problem Solving
// Challenge: Bill Division
// Date: 05/16/23
// Author: Migx3

fn bon_appetit(bill: &[i32], k: i32, b: i32) {
    
    let total = bill.iter().enumerate()
    .filter(|&(i, _)| i != k.try_into().unwrap())
    .map(|(_, &item)| item)
    .sum::<i32>() / 2;

    let correct_value = b == total;

    match correct_value {
        
        true =>  {
            println!("Bon Appetit")
        },

        false => {
            let difference = b - total;
            println!("{}", difference)
        }
    }
}
