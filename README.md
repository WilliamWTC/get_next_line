# get_next_line (core_project)

The aim of this project is to make you code a function that returns a 
line ending with a newline character '\n' read from a file descriptor.

Run the following commands to compile the libft and the gnl function.

```
make -C libft/ fclean && make -C libft/
clang -Wall -Werror -Wextra -I libft/includes -o get_next_line.o -c get_next_line.c
clang -Wall -Werror -Wextra -I libft/includes -o main.o -c main.c
clang -o gnl_test main.o get_next_line.o -I libft/includes -L libft/ -lft
```

### Running the Get_Next_Line function:

To test the function, you need to have files you want to read.

Run the executable with './gnl_test' and add the file name you want to read:

```
./gnl_test [file name]
```

## WeThinkCode :

**Mandatory:** 100/100  
**Bonus:** 25/25  
  
**Total:** 125/100
