package main

import "fmt"

// Exploring the basics of Go

var hw = "Hello world!" // Long syntax
const x = "You can't change this variable!" // Constant

func main() {
    hw2 := "Hello world!" // Short syntax
    fmt.Println(hw2)
    fmt.Println(x)
    fmt.Println("1 + 1.5 =", 1 + 1.5) // Automatically converts to float
    fmt.Println(hw[0])
}