# Libft
First project of the 42 cursus, **42Paris**, **2021**.

The aim of this project is to code a C library regrouping usual functions that you’ll be allowed to use in all your other projects.

# Mandatory Functions

Re-code a set of the **libc** functions.

Use `man` to see the description of the following functions :

* ft_memset
* ft_bzero
* ft_memcpy
* ft_memccpy
* ft_memmove
* ft_memchr
* ft_memcmp
* ft_strlen
* ft_isalpha
* ft_isdigit
* ft_isalnum
* ft_isascii
* ft_isprint
* ft_toupper
* ft_tolower
* ft_strchr
* ft_strrchr
* ft_strncmp
* ft_strlcpy
* ft_strlcat
* ft_strnstr
* ft_atoi
* ft_calloc
* ft_strdup

# Additionnal Functions

Re-code a set of customized functions.

#### ft_substr
> Allocates (with `malloc(3)`) and returns a substring from the string `s`. The substring begins at index `start` and is of size `len`. If the allocation fails, the function returns `NULL`.
#### ft_strjoin
> Allocates (with `malloc(3)`) and returns a string, result of the concatenation of `s1` and `s2`. If the allocation fails the function returns `NULL`.
#### ft_strtrim
> Allocates (with `malloc(3)`) and returns a copy of the string `s1` without `set` characters at the beginning or at the end of the string. If the allocation fails the function returns `NULL`
#### ft_split
> Allocates (with `malloc(3)`) and returns an array of strings obtained by spliting `s` using the character `c` as a delimiter. If the allocation fails the function returns `NULL`.
#### ft_itoa
> Allocate (with `malloc(3)`) and returns a string representing the integer `n` given as argument. Negative numbers must be supported. If the allocation fails, the function returns `NULL`.
#### ft_strmapi
> Applies the function `f` to each character of the string `s` given as argument to create a new string (with `malloc(3)`) resulting from the successive applications of `f`.
#### ft_putchar_fd
> Outputs the char `c` to the file descriptor `fd`.
#### ft_putstr_fd
> Outputs the string `s` to the file descriptor `fd`.
#### ft_putendl_fd
> Outputs the string `s` to the file descriptor `fd` followed by a `’\n’`.
#### ft_putnbr_fd
> Outputs the integer `n` to the file descriptor `fd`.

# Bonus Functions

Code functions to manipulate lists.

#### ft_lstnew
> Allocates (with `malloc(3)`) and returns a new element. The variable content is initialized with the value of `content` given as argument. The variable next is initialized to `NULL`.
#### ft_lstadd_front
> Adds the element `new` to the beginning of the list.
#### ft_lstsize
> Counts the number of elements of the list.
#### ft_lstlast
> Returns the last element of the list.
#### ft_lstadd_back
> Adds the element `new` to the end of the list.
#### ft_lstdelone
> Frees the memory of the element `lst` given as argument using `del` function and then with `free(3)`. The memory of `next` must not be freed.
#### ft_lstclear
> Deletes and frees the memory of the element `alst` passed as argument and every successors of that element using the function `del` and `free(3)`. The initial pointer must be set to `NULL`.
#### ft_lstiter
> Iterates the list `lst` and applies the function `f` to the content of each element.
#### ft_lstmap
> Iterates a list `lst` and applies the function `f` to the content of each element. Creates a new list resulting from the successive applications of `f`. The function `del` is here to delete the content of an element if needed.
