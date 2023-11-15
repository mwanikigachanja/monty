# 0x19. C - Stacks, Queues - LIFO, FIFO

## Project Description

This project is part of the Holberton School curriculum and focuses on implementing stacks and queues in the C programming language. The primary goal is to understand the concepts of Last In, First Out (LIFO) and First In, First Out (FIFO) data structures and their applications.

## Table of Contents

- [Project Description](#project-description)
- [Table of Contents](#table-of-contents)
- [Author](#author)
- [Files](#files)
- [Compilation](#compilation)
- [Usage](#usage)
- [Examples](#examples)
- [Testing](#testing)
- [Known Issues](#known-issues)
- [Acknowledgments](#acknowledgments)
- [Contact](#contact)

## Author

- Charles Mwaniki

## Files

- [monty.h](monty.h): Header file containing function prototypes, struct definition, and included libraries.
- [main.c](main.c): The main entry point for the program.
- [monty.c](monty.c): Core functionality of the Monty interpreter.
- [stack_functions.c](stack_functions.c): Implementation of stack-related functions.
- [queue_functions.c](queue_functions.c): Implementation of queue-related functions.
- [opcode_functions_1.c, opcode_functions_2.c](opcode_functions_1.c) (and additional files): Implementation of specific opcodes.
- [error_handling.c](error_handling.c): Functions for handling errors.

## Compilation

To compile the program, use the following command:

```bash
gcc -Wall -Werror -Wextra -pedantic *.c -o monty
```

## Usage

To run the Monty interpreter, use the following command:

```bash
./monty filename
```

Replace `filename` with the path to the Monty bytecode file.

## Examples

1. Run a Monty script:

```bash
./monty examples/example.m
```

## Testing

To run the test suite, execute the following command:

```bash
make test
```

## Known Issues

- No known issues at the moment.

## Acknowledgments

Special thanks to the Holberton School staff for providing guidance and support throughout the project.

## Contact

If you have any questions or suggestions, feel free to contact the author:

- Name: Charles Mwaniki
- Email: [charles@example.com](mailto:charles@example.com)
- LinkedIn: [Charles Mwaniki](https://www.linkedin.com/in/charlesmwaniki/)
- Twitter: [@charles_mwaniki](https://twitter.com/charles_mwaniki)
