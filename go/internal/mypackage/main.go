package main

import "fmt"

func helloWorld()(x string) {
    fmt.Println("Hello, world!")
        
    return "Hello world!"
}

func main() {
 	var myObject = DataObject{"my data"}
	
 	fmt.Println(myObject.value)

	fmt.Println(helloWorld())
}