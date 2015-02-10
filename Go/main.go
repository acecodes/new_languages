package main

import "fmt"

// Exploring the basics of Go

var hw = "Hello world!" // Long syntax
const x = "You can't change this variable!" // Constant

// Setting multiple variables at once
var (
    a = 5
    b = 15
    c = 25
)

func main() {
    hw2 := "Hello world!" // Short syntax
    fmt.Println(hw2)
    fmt.Println(x)
    fmt.Println("1 + 1.5 =", 1 + 1.5) // Automatically converts to float
    fmt.Println(hw[0])
    fmt.Println(a, b, c)
    celsius()
    loops()
}

func celsius() {
    // Convert temperatures to Celsius
    fmt.Println((72.0 - 32.0) * (5.0/9.0)) // 72 degrees F
}

func loops() {
    // Explicit syntax
    i := 1
    for i <= 10 {
        fmt.Print(i) // Use print to avoid newlines
        if i % 2 == 0 {
            fmt.Print(" - Even ")
        } else {
            fmt.Print(" - Odd ")
        }
        fmt.Println()
        i++
    }

    fmt.Println()

    // Compressed syntax
    for j := 1; j <= 10; j++ {
        fmt.Print(j) 
    }

    fmt.Println()

    // Using switch to selectively print English
    for k := 1; k <= 10; k++ {
        switch k {
        case 2: fmt.Println("Two")
        case 4: fmt.Println("Four")
        }
    }
}