// Taking Rust out for a spin...

fn main() {
    println!("Hello world!");
    // Interpolation
    println!("The name is {0}, {1} {0}", "Bond", "James");
    let a = "Test variable";
    println!("{0}", a);

    // Allow unused variable
    let _unused = 5;

    // Mutable variable
    let mut var2 = 6;

    var2 += 3;
    println!("{}", var2);
}

