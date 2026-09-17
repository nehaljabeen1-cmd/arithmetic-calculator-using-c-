# 🧮 C++ Arithmetic Calculator
 A simple calculator built in C++ — but more importantly, a small project to practice turning programming concepts into a working application.

This project was developed as part of my university C++ learning journey.

Instead of putting everything inside `main()`, I designed the calculator around separate functions for different mathematical operations. This helped me practice writing cleaner, more organized C++ code.

##  What Can It Do?

The calculator provides a menu where the user can choose between:

| Operation | Description |
| ➕ Addition | Adds two numbers |
| ➖ Subtraction | Subtracts one number from another |
| ✖️ Multiplication | Multiplies two numbers |
| ➗ Division | Divides two numbers with zero-checking |
| 🔢 Power | Calculates a number raised to a power |
| √ Square Root | Calculates the square root with validation |
| 🚪 Exit | Closes the calculator |

##  What I Practiced

This project wasn't just about calculating numbers.

I used it to strengthen several C++ concepts:

- Functions
- Function parameters and return values
- `switch-case`
- `do-while` loop
- Conditional statements
- User input/output
- Variables and data types
- Input validation
- `<cmath>` library
- `pow()` function
- `sqrt()` function

## 🛡️ Small Details That Matter

The calculator also handles some invalid situations instead of blindly performing the operation.

### Division by zero

If the user enters `0` as the divisor, the program displays:

`Division by zero is invalid!`

### Square root of a negative number

The program checks whether the entered number is negative before calculating its square root.

This was a simple way to practice **input validation and conditional logic**.
## ⚙️ How It Works

The program follows a simple flow:

```text
Start
  ↓
Display Calculator Menu
  ↓
User selects an operation
  ↓
Take required input
  ↓
Call the corresponding function
  ↓
Display result
  ↓
Return to menu
  ↓
Exit when user selects 0
