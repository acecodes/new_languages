package main

import "fmt"
import "math"
import "math/rand"
import "time"

// Exploring the basics of Go

var hw = "Hello world!"                     // Long syntax
const x = "You can't change this variable!" // Constant

// Setting multiple variables at once
var (
	a = 5
	b = 15
	c = 25
)

// Structs
type Circle struct {
	x, y, r float64
}

type Person struct {
	Name string
}

func (p *Person) Talk() {
	fmt.Println("Hello, my name is", p.Name)
}

type Android struct {
	Person // Android is a person
	Model  string
}

type Robot struct {
	Person Person // Robot has a person
	Model  string
}

// Interfaces
type Shape interface {
	area() float64
}

func totalArea(shapes ...Shape) float64 {
	// Function that uses the interface
	var area float64
	for _, s := range shapes {
		area += s.area()
	}
	return area
}

// Concurrency
func f(n int) {
	for i := 0; i < 10; i++ {
		fmt.Println(n, ":", i)
		amt := time.Duration(rand.Intn(250))
		// Random delays to show concurrency
		time.Sleep(time.Millisecond * amt)
	}
}

// Misc functions
func celsius(c float64) float64 {
	// Convert temperatures to Celsius
	return (c - 32.0) * (5.0 / 9.0)
}

func loops() {
	// Explicit syntax
	i := 1
	for i <= 10 {
		fmt.Print(i) // Use print to avoid newlines
		if i%2 == 0 {
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
		case 2:
			fmt.Println("Two")
		case 4:
			fmt.Println("Four")
		}
	}
}

func arrays() {
	// Experimenting with arrays
	var array1 [10]int
	array1[0] = 1
	array1[5] = 40
	fmt.Println("My array: ", array1)
	fmt.Println("My array's size: ", len(array1))

	// Using the array shorthand
	array2 := [5]float64{
		1,
		5,
		92,
		105,
		3,
	}

	slice1 := array2[0:2]
	slice2 := append(slice1, 4)
	fmt.Println(slice1, slice2)

	// Print the elements of the array
	for i := 0; i < 10; i++ {
		fmt.Print(array1[i])
	}

	fmt.Println()
}

func maps() {
	// Fun with Go maps
	map1 := make(map[string]int)
	map1["key"] = 10
	fmt.Println(map1["key"])
	map1["boom"] = 5
	fmt.Println(map1["boom"])
	fmt.Println(map1)
	delete(map1, "boom")
	fmt.Println(map1)
}

func averages(xs []float64) float64 {
	// Average an array of numbers
	total := 0.0
	for _, v := range xs {
		total += v
	}
	return total / float64(len(xs))
}

func add(args ...int) int {
	// Adds all numbers specified
	total := 0
	for _, v := range args {
		total += v
	}
	return total
}

func closure() {
	// Increments a number each time it is called
	x := 0
	increment := func() int {
		x++
		return x
	}
	fmt.Println(increment()) // 1
	fmt.Println(increment()) // 2
	fmt.Println(increment()) // 3
}

func evenGenerator() func() uint {
	// Even number generator
	i := uint(0)
	return func() (ret uint) {
		ret = i
		i += 2
		return
	}
}

func first() {
	fmt.Println("Print this first")
}

func last() {
	// This will be deferred until the end of the program
	fmt.Println("Print this last")
}

func one(xPtr *int) {
	// Change value of input variable to one
	*xPtr = 1
}

func circleArea(c Circle) float64 {
	return math.Pi * c.r * c.r
}

func (c *Circle) area() float64 {
	return math.Pi * c.r * c.r
}

// Channels
func pinger(c chan string) {
	for i := 0; ; i++ {
		c <- "ping"
	}
}

func ponger(c chan string) {
	for i := 0; ; i++ {
		c <- "pong"
	}
}

func printer(c chan string) {
	for {
		msg := <-c
		fmt.Println(msg)
		time.Sleep(time.Second * 1)
	}
}

// Experimentation space - uncomment lines of interest
func main() {
	// hw2 := "Hello world!" // Short syntax
	// fmt.Println(hw2)
	// fmt.Println(x)
	// fmt.Println("1 + 1.5 =", 1+1.5) // Automatically converts to float
	// fmt.Println(hw[0])
	// fmt.Println(a, b, c)
	// fmt.Println("72 degrees F =", celsius(72.0), "Celsius")
	// loops()
	// arrays()
	// maps()
	// avgArray := []float64{1, 2, 3}
	// fmt.Println("Average of", avgArray, "=", averages(avgArray))
	// addArray := []int{1, 2, 3, 5, 7}
	// fmt.Println("Result of adding", addArray, "=", add(addArray...))        // Use an array slice
	// fmt.Println("Result of adding a bunch of args =", add(5, 5, 10, 2, 10)) // Use ints
	// closure()
	// next := evenGenerator() // Create instance of generator
	// fmt.Println(next())     // 0
	// fmt.Println(next())     // 2
	// fmt.Println(next())     // 4
	// defer last()            // Will not run until the main() exits
	// first()
	// x := 5
	// one(&x)
	// fmt.Println("Converted 5 to", x, "using pointers")
	// var c Circle // Instance of Circle with zeros in each field
	// fmt.Println(c)
	// c.x = 5
	// c.y = 5
	// c.r = 9
	// d := Circle{x: 0, y: 5, r: 2} // Instance of Circle with defined field values
	// fmt.Println(d)
	// fmt.Println("Area of Circle d =", circleArea(d)) // Using standalone function
	// fmt.Println("Area of Circle c =", c.area())      // Using a method of the instance
	// a := new(Android)
	// a.Name = "Andy the Android"
	// b := new(Robot)
	// b.Person.Name = "Robby the Robot"
	// a.Talk()                   // Inherited Talk
	// b.Person.Talk()            // Composed Talk
	// fmt.Println(totalArea(&c)) // Call the interface method
	// go f(5)
	// for i := 0; i < 10; i++ { // Runs concurrent loops
	// 	go f(i)
	// }
	// var input string
	// fmt.Scanln(&input)

	// Runs pinger and ponger concurrently
	// var c chan string = make(chan string)
	// go pinger(c)
	// go ponger(c)
	// go printer(c)

	// var input string
	// fmt.Scanln(&input)

	c1 := make(chan string)
	c2 := make(chan string)

	go func() {
		for {
			c1 <- "from 1"
			time.Sleep(time.Second * 2)
		}
	}()
	go func() {
		for {
			c2 <- "from 2"
			time.Sleep(time.Second * 3)
		}
	}()
	go func() {
		for {
			select {
			case msg1 := <-c1:
				fmt.Println(msg1)
			case msg2 := <-c2:
				fmt.Println(msg2)
			}
		}
	}()

	var input string
	fmt.Scanln(&input)
}
