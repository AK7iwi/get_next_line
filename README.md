# get_next_line

A function in C for reading a line from a file descriptor, useful for parsing data from streams or files with dynamic content.

## Overview

get_next_line is a versatile function that reads a line from a file descriptor and dynamically allocates memory for the line. It is particularly useful for parsing data from streams or files with varying line lengths.

## Usage

Include the `get_next_line.h` header in your project and compile with the provided source files. Use the function in your code to read lines from a file descriptor:

```c
#include "get_next_line.h"

/* To test: cc -Wall -Wextra -Werror -I includes */
/* srcs/main.c srcs/get_next_line.c */
/* srcs/utils/utils.c */

int	main(void)
{
	int		fd;
	char	*str;

	fd = open("Test.txt", O_RDONLY);
	str = get_next_line(fd);
	while (str)
	{
		printf("%s", str);
		free(str);
		str = get_next_line(fd);
	}
	close(fd);
	return (0);
}
```

## Subject

[gnl.en.subject.pdf](https://github.com/AK7iwi/Get_next_line/files/14182842/gnl.en.subject.pdf)
