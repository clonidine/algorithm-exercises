// Website: HackerRank
// Topic: Problem Solving
// Challenge: Migratory Birds
// Date: 05/13/23
// Author: Migx3

use std::collections::HashMap;

struct Number {
    value: i32,
    count: i32
}

impl Number {

    fn new(value: i32, count: i32) -> Number {
        Number {value, count}
    }
}

fn migratory_birds(arr: &[i32]) -> i32 {

    let mut numbers: HashMap<i32, Number> = HashMap::new();

    arr.into_iter().for_each(|number: &i32| {
        
        if !numbers.contains_key(&number) {
            let number: Number = Number::new(*number, 0);
            
            numbers.insert(number.value, number);
        } else {
            let mut number: &mut Number = numbers.get_mut(&number).unwrap();
            
            number.count += 1;
        }
    });

    let smallest: Option<&Number> = Some(numbers.get(&arr[0]).unwrap().clone());

    if smallest.is_some() {
        let mut smallest = smallest.unwrap();

        for number in numbers.values() {

            if number.count == smallest.count {

                if number.value < smallest.value {
                    smallest = &number;
                }
            }

            else if number.value < smallest.value && number.count > smallest.count || number.count > smallest.count {
                smallest = &number;
            }
        }

        return smallest.value
    } else {
        panic!("No values!");
    }
}

fn main() {

    let arr = [1, 2, 3, 4, 5, 4, 3, 2, 1, 3, 4];

    let value: i32 = migratory_birds(&arr);

    println!("Value: {value}");
}