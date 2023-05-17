// Website: HackerRank
// Topic: Problem Solving
// Challenge: Day of the Programmer
// Date: 05/16/23
// Author: Migx3

fn get_month_days(year: i32) -> Vec<i32> {
    
    let mut month_days = vec![31, 31, 30, 31, 30, 31, 31];
    
    let divisible_by_4 = year % 4 == 0;

    let february_days = if year > 1918 {
        
        let divisible_by_100 = year % 100 == 0;
        let divisible_by_400 = year % 400 == 0;

        divisible_by_4 && (!divisible_by_100 || divisible_by_400)
    } else {
        divisible_by_4
    };

    month_days.push(if february_days { 29 } else { 28 });

    month_days
}

fn day_of_programmer(year: i32) -> String {
    let month_days = get_month_days(year);

    let programmer_day = 256;

    let mut sum = programmer_day - month_days.iter().sum::<i32>();

    let gregorian_calendar = 1918;

    if year == gregorian_calendar {
        sum += sum
    }

    let programmer_day_during_year = sum;
    let programmer_month = 9;

    let date_formatted: String = format!("{programmer_day_during_year}.0{programmer_month}.{year}");

    date_formatted
}
