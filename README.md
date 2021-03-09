## Libft

*Summary: The aim of this project is to code a C library regrouping usual functions that you’ll be allowed to use in all your other projects.*

C programming can be very tedious when one doesn’t have access to those highly useful standard functions. This project gives you the opportunity to re-write those functions, understand them, and learn to use them. This library will help you for all your future C projects.
Through this project, we also give you the opportunity to expand the list of functions with your own. Take the time to expand your libft throughout the year.

**Technical considerations**

* It is forbidden to use global variables.
* If you need subfunctions to write a complex function, you should deﬁne these sub-functions as static to avoid publishing them with your library. It would be a good habit to do this in your future projects as well.
* Submit all ﬁles in the root of your repository.
* You must use the command ar to create your librairy, using the command libtool is forbidden.

**Libc functions**

In this ﬁrst part, you must re-code a set of the libc functions, as deﬁned in their man. Your functions will need to present the same prototype and behaviors as the originals. Your functions’ names must be preﬁxed by “ft\_”. For instance strlen becomes ft\_strlen.
Some of the functions’ prototypes you have to re-code use the "restrict" qualifier. This keyword is part of the c99 standard.
It is therefore forbidden to include it in your prototypes and to compile it with the flag -std=c99.
You must re-code the following functions. These function do not need any external functions:

* memset
* bzero
* strrchr
* strnstr
* strncmp
* atoi
* isalpha
* isdigit
* isalnum
* isascii
* isprint
* toupper
* tolower
* memcpy
* memccpy
* memmove
* memchr
* memcmp
* strlen
* strlcpy
* strlcat
* strchr

You must also re-code the following functions, using the function “malloc”:

* calloc
* strdup

**Additional functions**

In this second part, you must code a set of functions that are either not included in the libc, or included in a diﬀerent form. Some of these functions can be useful to write Part 1’s functions.

|Function name|ft\_substr|
|-|-|
|Prototype|char \*ft\_substr(char const \*s unsigned int start, size\_t len);|
|Parameters|1. The string from which to create the substring, 2. The start index of the substring in the string ’s’, 3. The maximum length of the substring.|
|Return value|The substring. NULL if the allocation fails.|
|External functs|malloc|
|Description|Allocates (with malloc(3)) and returns a substring from the string ’s’. The substring begins at index ’start’ and is of maximum size ’len’.|

|Function name|ft\_strjoin|
|-|-|
|Prototype|char \*ft\_strjoin(char const \*s1, char const \*s2);|
|Parameters|1. The prefix string, 2. The suffix string|
|Return value|The substring. NULL if the allocation fails.|
|External functs|malloc|
|Description|Allocates (with malloc(3)) and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’.|

|Function name|ft\_strtrim|
|-|-|
|Prototype|char \*ft\_strtrim(char const \*s1, char const \*set);|
|Parameters|1. The string to be trimmed, 2. The reference set of characters to trim.|
|Return value|The trimmed string. NULL if the allocation fails.|
|External functs|malloc|
|Description|Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string.|

|Function name|ft\_split|
|-|-|
|Prototype|char \*\*ft\_split(char const \*s, char c);|
|Parameters|1. The string to be split, 2. The delimiter character.|
|Return value|The array of new strings resulting from the split. NULL if the allocation fails.|
|External functs|malloc, free|
|Description|Allocates (with malloc(3)) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter. The array must be ended by a NULL pointer.|

|Function name|ft\_itoa|
|-|-|
|Prototype|char \*ft\_itoa(int n);|
|Parameters|1. the integer to convert|
|Return value|The string representing the integer. NULL if the allocation fails.|
|External functs|malloc|
|Description|Allocates (with malloc(3)) and returns a string representing the integer received as an argument. Negative numbers must be handled.|

|Function name|ft\_strmapi|
|-|-|
|Prototype|char \*ft\_strmapi(char const \*s, char (\*f)(unsigned int, char));|
|Parameters|1. The string on which to iterate, 2. The function to apply to each character.|
|Return value|The string created from the successive applications of ’f’. Returns NULL if the allocation fails.|
|External functs|malloc|
|Description|Applies the function ’f’ to each character of the string ’s’ to create a new string (with malloc(3)) resulting from successive applications of ’f’.|

|Function name|ft\_putchar\_fd|
|-|-|
|Prototype|void ft\_putchar\_fd(char c, int fd);|
|Parameters|1. The character to output, 2. The file descriptor on which to write.|
|Return value|none|
|External functs|write|
|Description|Outputs the character ’c’ to the given file descriptor.|

|Function name|ft\_putstr\_fd|
|-|-|
|Prototype|void ft\_putstr\_fd(char \*s, int fd);|
|Parameters|1. The string to output, 2. The file descriptor on which to write.|
|Return value|none|
|External functs|write|
|Description|Outputs the string ’s’ to the given file descriptor.|

|Function name|ft\_putendl\_fd|
|-|-|
|Prototype|void ft\_putendl\_fd(char \*s, int fd);|
|Parameters|1. The string to output, 2. The file descriptor on which to write.|
|Return value|none|
|External functs|write|
|Description|Outputs the string ’s’ to the given file descriptor, followed by a newline.|

|Function name|ft\_putnbr\_fd|
|-|-|
|Prototype|void ft\_putnbr\_fd(int n, int fd);|
|Parameters|1. The integer to output, 2. The file descriptor on which to write.|
|Return value|none|
|External functs|write|
|Description|Outputs the integer ’n’ to the given file descriptor.|