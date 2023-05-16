// Website: HackerRank
// Topic: Problem Solving
// Challenge: Bill Division
// Date: 05/16/23
// Author: Migx3

fn bon_appetit(bill: &[i32], k: i32, b: i32) {

    let mut total: i32 = 0;

    for i in 0..bill.len() {
        if i != k as usize {
            total += bill[i];
        }
    }

    total /= 2;

    if b != total {
        let difference = b - total;
        println!("{}", difference)
    } else {
        println!("Bon Appetit")
    }
}