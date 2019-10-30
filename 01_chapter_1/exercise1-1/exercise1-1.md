# Exercise 1-1

I'm using GCC and sometimes clang as c compilers


Personally, I don't like the idea to remove code parts from file so i decided to escape code parts using comments:

#### 1) The first thing is to remove preprocessor statememt `#include <stdio.h>`:
```C

//#include <stdio.h>

main() {
    printf("hello, world!\n");
}
```

The program compiles but compiler outputs this:
```bash
$ gcc main.c -o main
main.c:3:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
main() {
^~~~
main.c: In function ‘main’:
main.c:4:5: warning: implicit declaration of function ‘printf’ [-Wimplicit-function-declaration]
     printf("hello, world!\n");
     ^~~~~~
main.c:4:5: warning: incompatible implicit declaration of built-in function ‘printf’
main.c:4:5: note: include ‘<stdio.h>’ or provide a declaration of ‘printf’ 
```

The program works as usual:
```bash
$ ./main
hello, world!
```



#### 2) The second thing is to remove `printf("hello, world!\n");`:

```C

#include <stdio.h>

main() {
  //printf("hello, world!\n");
}
```

The program compiles but compiler outputs this:
```bash
main.c:3:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
main() {
^~~~
```

The program works but there are no actions to do in `main()` function so there is no output:
```bash
$ ./main

```


#### 3) The third thing is to remove `main() {`:

```C

#include <stdio.h>

//main() {
  printf("hello, world!\n");
}
```

The program doesn't compile and the output is:
```bash

$ gcc main.c -o main
main.c:4:12: error: expected declaration specifiers or ‘...’ before string constant
     printf("hello, world!\n");
            ^~~~~~~~~~~~~~~~~
main.c:5:1: error: expected identifier or ‘(’ before ‘}’ token
 }
```

#### 4) The fourth thing is to remove `}` or `{`:

```C

#include <stdio.h>

main() {
  printf("hello, world!\n");
//}
```

and

```C

#include <stdio.h>

main() //{
  printf("hello, world!\n");
}
```

The program doesn't compile and the output with removed `}` is :
```bash

$ gcc main.c -o main
main.c:3:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main() {
 ^~~~
main.c: In function ‘main’:
main.c:4:5: error: expected declaration or statement at end of input
     printf("hello, world!\n");
     ^~~~~~
```
The output with removed `{` is:
```bash

$ gcc main.c -o main
main.c:3:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main() //{
 ^~~~
main.c: In function ‘main’:
main.c:4:5: error: expected declaration specifiers before ‘printf’
     printf("hello, world!\n");
     ^~~~~~
main.c:5:1: error: expected declaration specifiers before ‘}’ token
 }
 ^
main.c:5:1: error: expected ‘{’ at end of input
```


#### 5) The fifth thing is to remove `;`:

```C

#include <stdio.h>

main() {
  printf("hello, world!\n")//;
}
```

The program doesn't compile and the output is:
```bash

$ gcc main.c -o main
main.c:3:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main() {
 ^~~~
main.c: In function ‘main’:
main.c:5:1: error: expected ‘;’ before ‘}’ token
 }
 ^
 ```
 
 #### 6) The next thing is to remove `printf()`:

```C

#include <stdio.h>

main() {
  /*printf(*/"hello, world!\n"/*)*/;
}
```

The program compiles and the compiler output is:
```bash

$ gcc main.c -o main
main.c:3:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main() {
 ^~~~
 ```
 
 The program works but there are no actions to do in `main()` function so there is no output:
```bash
$ ./main

```

 #### 7) The last thing is to remove `"hello, world!\n"`:

```C

#include <stdio.h>

main() {
  printf();
}
```

The program doesn't compiles and the compiler output is:
```bash

$ gcc main.c -o main
main.c:3:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main() {
 ^~~~
main.c: In function ‘main’:
main.c:4:4: error: too few arguments to function ‘printf’
    printf();
    ^~~~~~
In file included from main.c:1:0:
/usr/include/stdio.h:200:5: note: declared here
 int printf (const char *__restrict, ...)
     ^~~~~~
 ```
 

