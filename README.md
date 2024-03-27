# get_next_line

<div align="center">
    <img src="https://github.com/mcombeau/mcombeau/blob/main/42_badges/get_next_linen.png" alt="fract-ol 42 project badge">
</div>

[![42 School Project](https://img.shields.io/badge/42%20Project-get_next_line-blue)](https://github.com/your_username/get_next_line)
[![Language: C](https://img.shields.io/badge/language-C-green.svg)](<https://en.wikipedia.org/wiki/C_(programming_language)>)

A function that reads lines from a file descriptor.

## Table of Contents

- [About](#about)
- [Usage](#usage)
- [Functionality](#functionality)
- [Installation](#installation)
- [Contributing](#contributing)
- [License](#license)

## About

This project, "get_next_line," is part of the 42 School curriculum and focuses on reading a line from a file descriptor (such as a text file or standard input) using a function called `get_next_line`.

## Usage

To use the `get_next_line` function in your C program, follow these steps:

1. Clone this repository:

```bash
git clone https://github.com/your_username/get_next_line.git
```

2. Include the `get_next_line.h` header file in your C file.
3. Compile your program with the `get_next_line` function:

```bash
gcc -o your_program your_file.c get_next_line.c get_next_line_utils.c
```

4. Here an example to use it:

```c
#include "get_next_line.h"

int main() {
    int fd;
	char **res;

    fd = open("sample.txt", O_RDONLY);
    while ((res = get_next_line(fd)) > 0) {
        printf("%s\n", res);
        free(res);
    }
    close(fd);
    return (0);
}
```

## Functionality

The `get_next_line` function reads a line from the specified file descriptor until it reaches a newline character (`'\n'`) or the end of the file (`EOF`). It stores the line in a buffer and returns it as a string. The function is designed to be called in a loop to read multiple lines from a file.

## Installation

To compile the `get_next_line` function, run the following commands:

```bash
make
```

This will generate the `get_next_line.a` executable, which you can link with your C programs as mentioned in the usage section. But if you wan't as library, you just need to uncomment this line:

```makefile
@$(AR) $(NAME) $(OBJS)
```

And comment this line:

```makefile
@$(CC) $(CFLAGS) -I $(HDRDIR) $(OBJS) -D BUFFER_SIZE=5 -o $(NAME)
```

## Contributing

Contributions to this project are welcome. If you find any issues or want to improve the code, please feel free to open a pull request or issue.

## License

This project is licensed under the MIT License - see the LICENSE file for details.
