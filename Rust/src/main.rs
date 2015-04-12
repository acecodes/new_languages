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

    // Allow for declared variables without values
    let abc;

    abc = 2;
    println!("{}", abc);

    // Exploration of types and arrays

    // Although the compiler normally picks up what type you want,
    // it also allows explicit casting
    let _a_float: f64 = 5.0;
    let _s_ints_32: [i32; 5] = [1, 2, 3, 4, 5];
    let _u_ints_32: [u32; 5] = [1, 2, 4, 4, 5];
    let _float_32: [f32; 5] = [1.0, 2.0, 3.0, 4.0, 5.0];

    // Renaming existing types (aliasing) - CamelCase must be used or you will get a warning!
    type Float = f64;
    // Use new type name
    let _test_float: Float = 4.2;

    // Bind an expression to a variable
    let _z = { 2 * abc };

    // If-else statements
    if _z > 3 {
        println!("Yep, greater than 3!");
    } else {
        println!("Nope, less than 3...")
    }

    // For loops
    for n in 1..101 {
        if n % 15 == 0 {
            println!("{}: FizzBuzz", n);
        }
    }

    println!("{}", _z);
}

