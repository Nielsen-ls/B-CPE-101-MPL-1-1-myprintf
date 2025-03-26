# My_printf Project

## Description

The `my_printf` project is a custom implementation of the standard `printf` function in C. It provides formatted output capabilities similar to the standard library function, but with additional flexibility and custom features. This project is designed to demonstrate mastery of C programming concepts, including variadic functions, string manipulation, and modular programming.

## Features

- Supports various format specifiers:
  - `%d` / `%i`: Signed integers
  - `%u`: Unsigned integers
  - `%x` / `%X`: Hexadecimal (lowercase/uppercase)
  - `%o`: Octal
  - `%f`: Floating-point numbers
  - `%e` / `%E`: Scientific notation (lowercase/uppercase)
  - `%g` / `%G`: General format (scientific or floating-point)
  - `%c`: Characters
  - `%s`: Strings
  - `%p`: Pointers
  - `%%`: Literal `%` character
- Handles flags like `+` for signed numbers.
- Modular design for easy extension and maintenance.

## Usage

To use the `my_printf` function in your project:

1. Include the `my.h` header file in your source code:
   ```c
   #include "include/my.h"
   ```

2. Call `my_printf` with the desired format string and arguments:
   ```c
   my_printf("Hello, %s! You have %d new messages.\n", "Alice", 5);
   ```

## Build Instructions

1. Clone the repository:
   ```bash
   git clone <repository-url>
   cd B-CPE-101-MPL-1-1-myprintf
   ```

2. Build the project:
   ```bash
   make
   ```

3. Run unit tests:
   ```bash
   make tests_run
   ```

4. Clean up build artifacts:
   ```bash
   make clean
   ```

5. Fully clean the project (including the library):
   ```bash
   make fclean
   ```

6. Rebuild the project:
   ```bash
   make re
   ```

## File Structure

- `my_printf.c`: Core implementation of the `my_printf` function.
- `include/my.h`: Header file containing function prototypes and type definitions.
- `tests/test.c`: Unit tests for the `my_printf` function.
- Various helper files (e.g., `my_put_nbr.c`, `my_putstr.c`) for modular functionality.

## Examples

```c
my_printf("Decimal: %d\n", 42);           // Output: Decimal: 42
my_printf("Hexadecimal: %x\n", 255);     // Output: Hexadecimal: ff
my_printf("Pointer: %p\n", &main);       // Output: Pointer: 0x<address>
my_printf("Float: %+f\n", 3.14159);      // Output: Float: +3.141590
```

## Limitations

- Does not support all features of the standard `printf` (e.g., width and precision specifiers).
- Limited error handling for invalid format strings.

## License

This project is part of the EPITECH curriculum and is subject to its academic policies.

## Authors

- **COMBE--BRACCIALE Nielsen** - Developer of the `my_printf` project.
- **Kamate Adams** - Developer of the `my_printf` project.
