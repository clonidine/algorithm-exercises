// Website: HackerRank
// Topic: Problem Solving
// Challenge: Day of the Programmer
// Date: 05/16/23
// Author: Migx3

fn get_month_days(year: i32) -> Vec<i32> {

    let mut month_days = vec!
    [
        31, 31, 30, 31, 30, 31, 31
    ];

    let divisible_by_400 = year % 400 == 0;
    let divisible_by_4 = year % 4 == 0;
    let not_divisible_by_100 = year % 100 != 0;

    if divisible_by_400 || divisible_by_4 && not_divisible_by_100 || divisible_by_4 {
        month_days.push(29);
    } else {
        month_days.push(28)
    }

    month_days
}

fn day_of_programmer(year: i32) -> String {
    let days = get_month_days(year);

    let mut sum = 0;

    for day in days {
        sum += day;
    }

    let day_of_programmer = 256;
    let gregorian_calendar = 1918;
    
    sum = day_of_programmer - sum;

    if year == gregorian_calendar {
        sum += sum
    }

    let programmer_day = sum;
    let programmer_month = 9;

    let date_formatted: String = format!("{programmer_day}.0{programmer_month}.{year}");

    date_formatted
}
