# Double Value Using Pointers in C

## Overview

This project demonstrates one of the fundamental concepts of the C programming language: **pointers**.

The program asks the user for a positive integer, validates the input, and then doubles the value using a function that receives the variable's memory address. This allows the function to modify the original variable directly.

## Features

* Reads a positive integer from the user
* Validates user input
* Uses a pointer to access and modify a variable
* Demonstrates passing variables by address
* Shows how functions can change values outside their own scope

## Concepts Practiced

* Functions
* Input validation with `scanf`
* Loops (`while`)
* Pointers (`int *`)
* Address operator (`&`)
* Dereferencing operator (`*`)
* Pass-by-address

## Program Flow

1. Prompt the user for a positive integer.
2. Validate the input.
3. Display the entered value.
4. Pass the variable's address to `DoubleValue()`.
5. Double the value using a pointer.
6. Display the updated value.

## Example Output

```text
Please enter a positive number: 15
Entered number is: 15
Doubled value is: 30
```

## What I Learned

Through this project, I learned:

* How memory addresses are used in C
* How to create and use pointers
* How to pass a variable's address to a function
* How dereferencing allows modification of the original value
* The difference between passing a value and passing an address

## Future Improvements

* Allow the user to perform multiple operations
* Add additional pointer-based functions
* Implement value swapping using pointers
* Extend the project to work with arrays and pointers
