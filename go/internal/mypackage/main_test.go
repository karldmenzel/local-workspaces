package main

import (
    "testing"
)

func TestHelloWorld(t *testing.T) {

    // Call the function
    var got = helloWorld()

    // Check output
    expected := "Hello world!"
    if got != expected {
        t.Errorf("helloWorld() = %q, want %q", got, expected)
    }
}