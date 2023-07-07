Project Title: 0x09. C - Static libraries
Introduction
A static library, also known as an archive library, is a collection of pre-compiled object files (.o files) that are linked directly into an application during the compilation process. It contains functions, data, and other resources that can be reused across multiple programs.

Concise Explanation of Static Libraries and Their Functioning:
Purpose: The main purpose of static libraries is to provide a convenient way to reuse code across multiple projects. They contain functions, data structures, and other reusable code that can be linked into an application.
Creation: Static libraries are created by compiling individual source code files (.c files) into object code files (.o files) using a compiler. The object files are then combined into a single library file using the "ar" (archiver) command-line tool.
File Format: Static libraries typically have the file extension ".a" on Unix-like systems (e.g., libmy.a), and ".lib" on Windows (e.g., static.lib). They consist of a table of contents (index) and the object code files.
Linking: To use a static library, you need to link it with your application during the compilation process. The linker (e.g., gcc or ld) reads the library file and resolves references to the library functions in your code. It extracts the necessary object code from the library and combines it with your application's object code to create the final executable.
Relevance: Static libraries offer several advantages. They provide a self-contained bundle of code that can be easily distributed and used by other developers. They eliminate the need to distribute source code, making it easier to protect intellectual property. Static linking also avoids dependency issues as the library code becomes an integral part of the executable.
Drawbacks: One downside of static libraries is that they increase the size of the final executable, as the library code is duplicated in every application that uses it. If multiple applications use the same library, each application will have its own copy of the library code. Additionally, if the library is updated, all applications using that library need to be recompiled and relinked to incorporate the changes.
Usage: To use a static library in your C program, you typically include the library's header files (.h files) for function declarations and link the library file during the compilation process using the "-l" flag (e.g., -lmylib) to specify the library name.
Tasks Description
Task 0 Files: libmy.a, main.h
This task involves creating a static library (libmy.a) containing a set of listed functions.

libmy.a: A static library containing the set of listed functions below:
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
main.h: A header file containing the prototypes of all functions included in libmy.a.
Task 1 File: create_static_lib.sh
This task involves creating a bash script called create_static_lib.sh that creates a static library called liball.a from all the .c files that are in the current directory.

create_static_lib.sh: The bash script that creates a static library called liball.a
Conclusion
Static libraries are fundamental building blocks in C programming, allowing for modular code organization, code reuse, and efficient distribution of compiled code. They have a drawback of consuming a relatively large amount of memory space.


