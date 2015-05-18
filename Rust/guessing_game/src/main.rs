extern crate rand;

use std::io;
use std::cmp::Ordering;
use rand::Rng;

fn main() {
    println!("Guess the number!");

    // Let's generate a random number
    let secret_number = rand::thread_rng().gen_range(1, 101);

    // Print it out for testing purposes only
    // println!("The secret number is: {}", secret_number);

    loop {

    // Allow users to make a guess
    println!("Please input your guess:");

    let mut guess = String::new();

    io::stdin().read_line(&mut guess)
        .ok()
        .expect("Failed to read line");

    // Typecasting guess into a 32-bit integer
    let guess: u32 = match guess.trim().parse() {
        Ok(num) => num,
        Err(_) => continue
    };

    println!("You guessed: {}", guess);

    match guess.cmp(&secret_number) {
        Ordering::Less => println!("Too small."),
        Ordering::Greater => println!("Too big."),
        Ordering::Equal => { 
            println!("Justttt right.\nGoodbye!");
            break;
        }
    }

    // // Testing out patterns
    // let x = 7;

    // match x {
    //     1 | 2 => println!("One or two."),
    //     3 => println!("Three."),
    //     4 | 5 => println!("Four or five."),
    //     _ => println!("Other.")
    // }
    }

}
