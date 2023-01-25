# 0x0E. C - Structures, typedef

`C`

![](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/medias/2021/3/50af78a28a081e809856d4cdbde2d7ca9d4aa93d.jpg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20230125%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20230125T012144Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=5988488d3a71bbfb3447c7341af9a6f6ffed82e395b9b7e002fadb411a44e2c6)

### Resources
Read or watch:

0x0d. Structures.pdf
struct (C programming language)
Documentation: structures
0x0d. Typedef and structures.pdf
typedef
Programming in C by Stephen Kochan - Chapter 8, Working with Structures p163-189
The Lost Art of C Structure Packing (Advanced - not mandatory)

## Learning Objectives
At the end of this project, you are expected to be able to [explain to anyone](https://fs.blog/feynman-learning-technique/), **without the help of Google:**

#### General
What are structures, when, why and how to use them
How to use `typedef`

### Requirements

### General
* Allowed editors: `vi`, `vim`, `emacs`
* All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
* All your files should end with a new line
* A `README.md` file, at the root of the folder of the project is mandatory
* Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
* You are not allowed to use global variables
* No more than 5 functions per file
* The only C standard library functions allowed are `malloc` and `free`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden
* You are allowed to use [_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c)
* You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
* * In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
* Don’t forget to push your header file
* All your header files should be include guarded

### Tasks

#### 0. Poppy
![](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/medias/2021/3/3b534d73d79949ef8b7535d462014518256953f2.jpg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20230125%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20230125T012144Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=98c73c98805a8aadc377693fd7d89fb298c1b4d97290df4ae121124df7afded3)

Define a new type struct dog with the following elements:

name, type = char *
age, type = float
owner, type = char *
julien@ubuntu:~/0x0d. structures, typedef$ cat 0-main.c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c -o a
julien@ubuntu:~/0x0d. structures, typedef$ ./a 
My name is Poppy, and I am 3.5 :) - Woof!
julien@ubuntu:~/0x0d. structures, typedef$
```

#### 1. A dog is the only thing on earth that loves you more than you love yourself
Write a function that initialize a variable of type struct dog

Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);
julien@ubuntu:~/0x0d. structures, typedef$ cat 1-main.c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    init_dog(&my_dog, "Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-init_dog.c -o b
julien@ubuntu:~/0x0d. structures, typedef$ ./b 
My name is Poppy, and I am 3.5 :) - Woof!
julien@ubuntu:~/0x0d. structures, typedef$
```

#### 2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad
![](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/medias/2021/3/bb940d2ab10c3a4740f3c154cb980133e65e438e.jpg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20230125%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20230125T012144Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=22822879eaa395406782bdba4b6aa5dde285e54b3352bc192ae0b058c0aac398 )
