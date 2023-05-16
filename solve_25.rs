// Website: HackerRank
// Topic: Problem Solving
// Challenge: Day of the Programmer
// Date: 05/16/23
// Author: Migx3

fn get_days(year: i32) -> Vec<i32> {

    let mut days: Vec<i32> = vec!
    [
        31, 31, 30, 31, 30, 31, 31
    ];

    if year > 1918 {
        if year % 400 == 0 || year % 4 == 0 && year % 100 != 0 {    
            days.push(29);
        } else {
            days.push(28);
        }
    } else {
        if year % 4 == 0 {
            days.push(29)
        } else {
            days.push(28)
        }
    }

    days
}

fn day_of_programmer(year: i32) -> String {
    let days: Vec<i32> = get_days(year);

    let mut sum: i32 = 0;

    for day in days {
        sum += day;
    }

    sum = 256 - sum;

    if year == 1918 {
        sum += sum
    }

    let day: i32 = sum;
    let month: i32 = 9;

    let format: String = format!("{day}.0{month}.{year}");

    format
}