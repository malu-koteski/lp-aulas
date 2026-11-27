# C Programming Logic Exercises - 2025

A collection of C programs I wrote during my **Programming Logic** class in my Computer Engineering Degree in UNIFESP. I'm sharing them to help other beginners see how basic concepts look in real code.

> ⚠️ These are learning exercises, not production code. They may not be the most efficient solutions (as they were my first ever contact with programming), but they're a good starting point for practicing.

## What you'll find here

Programs organized by projects I had to deliver and professor practice sheets.

## Requirements

- A C compiler such as [GCC](https://gcc.gnu.org/) (or MinGW on Windows)
- A terminal or an IDE like Code::Blocks, Dev-C++, or VS Code (which I reccomend the most for C)

To check if GCC is installed:

```bash
gcc --version
```

##  How to compile and run

1. Clone this repository:

```bash
git clone https://github.com/[your-username]/[repository-name].git
cd [repository-name]
```

2. Compile a program:

```bash
gcc folder/program.c -o program
```

3. Run it:

```bash
./program        # Linux / macOS
program.exe      # Windows
```

**Example:**

```bash
gcc 03-conditionals/even_or_odd.c -o even_or_odd
./even_or_odd
```

## Tips for beginners

- **Read the code before running it.** Try to predict the output first.
- **Change things.** Edit values, break the code, and see what happens.
- **Rewrite from scratch.** After studying an example, close it and try to solve it yourself.
- **Don't just copy.** Understanding the logic matters more than having the answer.
- Read compiler warnings. Compile with `-Wall` to get helpful hints:

```bash
gcc -Wall program.c -o program
```

## Example program

```c
#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("%d is even.\n", number);
    } else {
        printf("%d is odd.\n", number);
    }

    return 0;
}
```

## Contributing

Found a bug, a typo, or a better way to solve an exercise? Contributions are welcome!

1. Fork this repository
2. Create a branch (`git checkout -b my-improvement`)
3. Commit your changes (`git commit -m "Describe your change"`)
4. Push and open a Pull Request

## About me

I'm Malu, a studend of Computer Engineering learning to code.

---

⭐ If this helped you, consider giving the repo a star!
