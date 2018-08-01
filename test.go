package main

import "fmt"

func main() {
	x := 0.0
	y := 0.0

	fmt.Printf("Hello world\n")

	fmt.Println("===")

	x = (0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1)

	fmt.Println(x)

	if x == 1.0 {
		fmt.Println("x is just 1.0")
	} else {
		fmt.Println("x is not 1.0")
		fmt.Println(x - 1.0)
	}

	fmt.Println("===")

	y = 0.0
	for i := 0; i < 10; i++ {
		y += 0.1
	}

	fmt.Println(y)

	if y == 1.0 {
		fmt.Println("y is just 1.0")
	} else {
		fmt.Println("y is not 1.0")
		fmt.Println(y - 1.0)
	}

}
