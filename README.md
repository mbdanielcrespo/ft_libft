## Project Outline
This project is a library of fundamental functions that will be used throughout the course. The library is written in C and contains a variety of functions, including string manipulation, memory management, and list operations. The function descriptions only include the description of the most important functions of the project.

## **Makefile Explanation**
The Makefile is a tool that simplifies the build process for the project. It contains a set of directives that describe how to compile and link the program. Here's a brief overview of how it works:

* **'CC'** and **'CFLAGS'** are variables that define the compiler (gcc) and the flags to be used during compilation (-Wall -Wextra -Werror).
* **'SRC'** is a variable that holds all the .c files in the current directory.
* **'OBJ** is a variable that holds the corresponding .o files for each .c file.
* **'all: $(NAME)'** is a target that builds the entire project. It depends on the file named in **'$(NAME)'**.
* **'$(NAME): $(OBJ)'** is a target that creates the library file. It depends on all the .o files and uses the ar command to create the library.
* **'%.o: %.c'** is a pattern rule that describes how to create a .o file from a .c file. It uses the **'$(CC) $(CFLAGS)'** to compile the .c files.
* **'bonus'** is a target that includes bonus features.
* **'clean'** is a target that removes all .o files.
* **'fclean'** is a target that removes all .o files and the library file.
* **'re'** is a target that forces a complete rebuild of the project.

## **Function Descriptions**
* **'ft_itoa'**: This function converts an integer to a string. It handles both positive and negative numbers and allocates memory for the resulting string. The function also includes error checking to ensure that memory allocation was successful.

* **'ft_memmove'**: This function copies n bytes from src to dst. If src and dst overlap, the copy is done in a non-destructive manner. If either src or dst is NULL, the function returns NULL.

* **'ft_split'**: This function splits a string s into an array of strings using the character ch as a delimiter. The function allocates memory for the resulting array of strings and includes error checking to ensure that memory allocation was successful.

* **'ft_lstmap**': This function iterates over a list lst and applies the function f to the content of each element. It creates a new list resulting from successive applications of f and uses the function del to delete content if needed. The function includes error checking to ensure that memory allocation was successful.

