# Exercise 1-2

_I'm using GCC and sometimes clang as c compilers_

I have wrote a Kotlin program to generate C code and save as separate .c files.
After that i've wrote a bash script to compile all of theese files.
Program iterates from `!` to `~` without upper case letters and sings from the book.

Kotlin code:
```Kotlin
import java.io.File

fun main() {

    var index = 1
    for (s in '!'..'~') {
        if (s == 'n' || s == '\\' || s == 't' || s == 'b' || s == '\"'|| s.isUpperCase()) continue
        val filename = "${index.toString().padStart(2,'0')}.c"
        var file = File(filename)
        val code = """
        #include <stdio.h>
        
        int main() {
            printf("test escape \\$s : \$s");
            return 0;
        }
        """.trimIndent()
        file.writeText(code)
        index++
    }
}
```
#### Generated C files:

```C    
// File: 01.c Symbol: !
#include <stdio.h>

int main() {
    printf("test escape \\! : \!");
    return 0;
}
```



```C    
// File: 02.c Symbol: #
#include <stdio.h>

int main() {
    printf("test escape \\# : \#");
    return 0;
}
```



```C    
// File: 03.c Symbol: $
#include <stdio.h>

int main() {
    printf("test escape \\$ : \$");
    return 0;
}
```



```C    
// File: 04.c Symbol: %
#include <stdio.h>

int main() {
    printf("test escape \\% : \%");
    return 0;
}
```



```C    
// File: 05.c Symbol: &
#include <stdio.h>

int main() {
    printf("test escape \\& : \&");
    return 0;
}
```



```C    
// File: 06.c Symbol: '
#include <stdio.h>

int main() {
    printf("test escape \\' : \'");
    return 0;
}
```



```C    
// File: 07.c Symbol: (
#include <stdio.h>

int main() {
    printf("test escape \\( : \(");
    return 0;
}
```



```C    
// File: 08.c Symbol: )
#include <stdio.h>

int main() {
    printf("test escape \\) : \)");
    return 0;
}
```



```C    
// File: 09.c Symbol: *
#include <stdio.h>

int main() {
    printf("test escape \\* : \*");
    return 0;
}
```



```C    
// File: 10.c Symbol: +
#include <stdio.h>

int main() {
    printf("test escape \\+ : \+");
    return 0;
}
```



```C    
// File: 11.c Symbol: ,
#include <stdio.h>

int main() {
    printf("test escape \\, : \,");
    return 0;
}
```



```C    
// File: 12.c Symbol: -
#include <stdio.h>

int main() {
    printf("test escape \\- : \-");
    return 0;
}
```



```C    
// File: 13.c Symbol: .
#include <stdio.h>

int main() {
    printf("test escape \\. : \.");
    return 0;
}
```



```C    
// File: 14.c Symbol: /
#include <stdio.h>

int main() {
    printf("test escape \\/ : \/");
    return 0;
}
```



```C    
// File: 15.c Symbol: 0
#include <stdio.h>

int main() {
    printf("test escape \\0 : \0");
    return 0;
}
```



```C    
// File: 16.c Symbol: 1
#include <stdio.h>

int main() {
    printf("test escape \\1 : \1");
    return 0;
}
```



```C    
// File: 17.c Symbol: 2
#include <stdio.h>

int main() {
    printf("test escape \\2 : \2");
    return 0;
}
```



```C    
// File: 18.c Symbol: 3
#include <stdio.h>

int main() {
    printf("test escape \\3 : \3");
    return 0;
}
```



```C    
// File: 19.c Symbol: 4
#include <stdio.h>

int main() {
    printf("test escape \\4 : \4");
    return 0;
}
```



```C    
// File: 20.c Symbol: 5
#include <stdio.h>

int main() {
    printf("test escape \\5 : \5");
    return 0;
}
```



```C    
// File: 21.c Symbol: 6
#include <stdio.h>

int main() {
    printf("test escape \\6 : \6");
    return 0;
}
```



```C    
// File: 22.c Symbol: 7
#include <stdio.h>

int main() {
    printf("test escape \\7 : \7");
    return 0;
}
```



```C    
// File: 23.c Symbol: 8
#include <stdio.h>

int main() {
    printf("test escape \\8 : \8");
    return 0;
}
```



```C    
// File: 24.c Symbol: 9
#include <stdio.h>

int main() {
    printf("test escape \\9 : \9");
    return 0;
}
```



```C    
// File: 25.c Symbol: :
#include <stdio.h>

int main() {
    printf("test escape \\: : \:");
    return 0;
}
```



```C    
// File: 26.c Symbol: ;
#include <stdio.h>

int main() {
    printf("test escape \\; : \;");
    return 0;
}
```



```C    
// File: 27.c Symbol: <
#include <stdio.h>

int main() {
    printf("test escape \\< : \<");
    return 0;
}
```



```C    
// File: 28.c Symbol: =
#include <stdio.h>

int main() {
    printf("test escape \\= : \=");
    return 0;
}
```



```C    
// File: 29.c Symbol: >
#include <stdio.h>

int main() {
    printf("test escape \\> : \>");
    return 0;
}
```



```C    
// File: 30.c Symbol: ?
#include <stdio.h>

int main() {
    printf("test escape \\? : \?");
    return 0;
}
```



```C    
// File: 31.c Symbol: @
#include <stdio.h>

int main() {
    printf("test escape \\@ : \@");
    return 0;
}
```



```C    
// File: 32.c Symbol: [
#include <stdio.h>

int main() {
    printf("test escape \\[ : \[");
    return 0;
}
```



```C    
// File: 33.c Symbol: ]
#include <stdio.h>

int main() {
    printf("test escape \\] : \]");
    return 0;
}
```



```C    
// File: 34.c Symbol: ^
#include <stdio.h>

int main() {
    printf("test escape \\^ : \^");
    return 0;
}
```



```C    
// File: 35.c Symbol: _
#include <stdio.h>

int main() {
    printf("test escape \\_ : \_");
    return 0;
}
```



```C    
// File: 36.c Symbol: `
#include <stdio.h>

int main() {
    printf("test escape \\` : \`");
    return 0;
}
```



```C    
// File: 37.c Symbol: a
#include <stdio.h>

int main() {
    printf("test escape \\a : \a");
    return 0;
}
```



```C    
// File: 38.c Symbol: c
#include <stdio.h>

int main() {
    printf("test escape \\c : \c");
    return 0;
}
```



```C    
// File: 39.c Symbol: d
#include <stdio.h>

int main() {
    printf("test escape \\d : \d");
    return 0;
}
```



```C    
// File: 40.c Symbol: e
#include <stdio.h>

int main() {
    printf("test escape \\e : \e");
    return 0;
}
```



```C    
// File: 41.c Symbol: f
#include <stdio.h>

int main() {
    printf("test escape \\f : \f");
    return 0;
}
```



```C    
// File: 42.c Symbol: g
#include <stdio.h>

int main() {
    printf("test escape \\g : \g");
    return 0;
}
```



```C    
// File: 43.c Symbol: h
#include <stdio.h>

int main() {
    printf("test escape \\h : \h");
    return 0;
}
```



```C    
// File: 44.c Symbol: i
#include <stdio.h>

int main() {
    printf("test escape \\i : \i");
    return 0;
}
```



```C    
// File: 45.c Symbol: j
#include <stdio.h>

int main() {
    printf("test escape \\j : \j");
    return 0;
}
```



```C    
// File: 46.c Symbol: k
#include <stdio.h>

int main() {
    printf("test escape \\k : \k");
    return 0;
}
```



```C    
// File: 47.c Symbol: l
#include <stdio.h>

int main() {
    printf("test escape \\l : \l");
    return 0;
}
```



```C    
// File: 48.c Symbol: m
#include <stdio.h>

int main() {
    printf("test escape \\m : \m");
    return 0;
}
```



```C    
// File: 49.c Symbol: o
#include <stdio.h>

int main() {
    printf("test escape \\o : \o");
    return 0;
}
```



```C    
// File: 50.c Symbol: p
#include <stdio.h>

int main() {
    printf("test escape \\p : \p");
    return 0;
}
```



```C    
// File: 51.c Symbol: q
#include <stdio.h>

int main() {
    printf("test escape \\q : \q");
    return 0;
}
```



```C    
// File: 52.c Symbol: r
#include <stdio.h>

int main() {
    printf("test escape \\r : \r");
    return 0;
}
```



```C    
// File: 53.c Symbol: s
#include <stdio.h>

int main() {
    printf("test escape \\s : \s");
    return 0;
}
```



```C    
// File: 54.c Symbol: u
#include <stdio.h>

int main() {
    printf("test escape \\u : \u");
    return 0;
}
```



```C    
// File: 55.c Symbol: v
#include <stdio.h>

int main() {
    printf("test escape \\v : \v");
    return 0;
}
```



```C    
// File: 56.c Symbol: w
#include <stdio.h>

int main() {
    printf("test escape \\w : \w");
    return 0;
}
```



```C    
// File: 57.c Symbol: x
#include <stdio.h>

int main() {
    printf("test escape \\x : \x");
    return 0;
}
```



```C    
// File: 58.c Symbol: y
#include <stdio.h>

int main() {
    printf("test escape \\y : \y");
    return 0;
}
```



```C    
// File: 59.c Symbol: z
#include <stdio.h>

int main() {
    printf("test escape \\z : \z");
    return 0;
}
```



```C    
// File: 60.c Symbol: {
#include <stdio.h>

int main() {
    printf("test escape \\{ : \{");
    return 0;
}
```



```C    
// File: 61.c Symbol: |
#include <stdio.h>

int main() {
    printf("test escape \\| : \|");
    return 0;
}
```



```C    
// File: 62.c Symbol: }
#include <stdio.h>

int main() {
    printf("test escape \\} : \}");
    return 0;
}
```



```C    
// File: 63.c Symbol: ~
#include <stdio.h>

int main() {
    printf("test escape \\~ : \~");
    return 0;
}
```

#### Compile results:
_Note: empty result is full compilation_

```bash
$ sh ./compile.sh

compiling file 01.c

01.c: In function ‘main’:
01.c:4:12: warning: unknown escape sequence: '\!'
     printf("test escape \\! : \!");
            ^~~~~~~~~~~~~~~~~~~~~~


compiling file 02.c

02.c: In function ‘main’:
02.c:4:12: warning: unknown escape sequence: '\#'
     printf("test escape \\# : \#");
            ^~~~~~~~~~~~~~~~~~~~~~


compiling file 03.c

03.c: In function ‘main’:
03.c:4:12: warning: unknown escape sequence: '\$'
     printf("test escape \\$ : \$");
            ^~~~~~~~~~~~~~~~~~~~~~


compiling file 04.c



compiling file 05.c

05.c: In function ‘main’:
05.c:4:12: warning: unknown escape sequence: '\&'
     printf("test escape \\& : \&");
            ^~~~~~~~~~~~~~~~~~~~~~


compiling file 06.c



compiling file 07.c



compiling file 08.c

08.c: In function ‘main’:
08.c:4:12: warning: unknown escape sequence: '\)'
     printf("test escape \\) : \)");
            ^~~~~~~~~~~~~~~~~~~~~~


compiling file 09.c

09.c: In function ‘main’:
09.c:4:12: warning: unknown escape sequence: '\*'
     printf("test escape \\* : \*");
            ^~~~~~~~~~~~~~~~~~~~~~


compiling file 10.c

10.c: In function ‘main’:
10.c:4:12: warning: unknown escape sequence: '\+'
     printf("test escape \\+ : \+");
            ^~~~~~~~~~~~~~~~~~~~~~


compiling file 11.c

11.c: In function ‘main’:
11.c:4:12: warning: unknown escape sequence: '\,'
     printf("test escape \\, : \,");
            ^~~~~~~~~~~~~~~~~~~~~~


compiling file 12.c

12.c: In function ‘main’:
12.c:4:12: warning: unknown escape sequence: '\-'
     printf("test escape \\- : \-");
            ^~~~~~~~~~~~~~~~~~~~~~


compiling file 13.c

13.c: In function ‘main’:
13.c:4:12: warning: unknown escape sequence: '\.'
     printf("test escape \\. : \.");
            ^~~~~~~~~~~~~~~~~~~~~~


compiling file 14.c

14.c: In function ‘main’:
14.c:4:12: warning: unknown escape sequence: '\/'
     printf("test escape \\/ : \/");
            ^~~~~~~~~~~~~~~~~~~~~~


compiling file 15.c



compiling file 16.c



compiling file 17.c



compiling file 18.c



compiling file 19.c



compiling file 20.c



compiling file 21.c



compiling file 22.c



compiling file 23.c

23.c: In function ‘main’:
23.c:4:12: warning: unknown escape sequence: '\8'
     printf("test escape \\8 : \8");
            ^~~~~~~~~~~~~~~~~~~~~~


compiling file 24.c

24.c: In function ‘main’:
24.c:4:12: warning: unknown escape sequence: '\9'
     printf("test escape \\9 : \9");
            ^~~~~~~~~~~~~~~~~~~~~~


compiling file 25.c

25.c: In function ‘main’:
25.c:4:12: warning: unknown escape sequence: '\:'
     printf("test escape \\: : \:");
            ^~~~~~~~~~~~~~~~~~~~~~


compiling file 26.c

26.c: In function ‘main’:
26.c:4:12: warning: unknown escape sequence: '\;'
     printf("test escape \\; : \;");
            ^~~~~~~~~~~~~~~~~~~~~~


compiling file 27.c

27.c: In function ‘main’:
27.c:4:12: warning: unknown escape sequence: '\<'
     printf("test escape \\< : \<");
            ^~~~~~~~~~~~~~~~~~~~~~


compiling file 28.c

28.c: In function ‘main’:
28.c:4:12: warning: unknown escape sequence: '\='
     printf("test escape \\= : \=");
            ^~~~~~~~~~~~~~~~~~~~~~


compiling file 29.c

29.c: In function ‘main’:
29.c:4:12: warning: unknown escape sequence: '\>'
     printf("test escape \\> : \>");
            ^~~~~~~~~~~~~~~~~~~~~~


compiling file 30.c



compiling file 31.c

31.c: In function ‘main’:
31.c:4:12: warning: unknown escape sequence: '\@'
     printf("test escape \\@ : \@");
            ^~~~~~~~~~~~~~~~~~~~~~


compiling file 32.c



compiling file 33.c

33.c: In function ‘main’:
33.c:4:12: warning: unknown escape sequence: '\]'
     printf("test escape \\] : \]");
            ^~~~~~~~~~~~~~~~~~~~~~


compiling file 34.c

34.c: In function ‘main’:
34.c:4:12: warning: unknown escape sequence: '\^'
     printf("test escape \\^ : \^");
            ^~~~~~~~~~~~~~~~~~~~~~


compiling file 35.c

35.c: In function ‘main’:
35.c:4:12: warning: unknown escape sequence: '\_'
     printf("test escape \\_ : \_");
            ^~~~~~~~~~~~~~~~~~~~~~


compiling file 36.c

36.c: In function ‘main’:
36.c:4:12: warning: unknown escape sequence: '\`'
     printf("test escape \\` : \`");
            ^~~~~~~~~~~~~~~~~~~~~~


compiling file 37.c



compiling file 38.c

38.c: In function ‘main’:
38.c:4:12: warning: unknown escape sequence: '\c'
     printf("test escape \\c : \c");
            ^~~~~~~~~~~~~~~~~~~~~~


compiling file 39.c

39.c: In function ‘main’:
39.c:4:12: warning: unknown escape sequence: '\d'
     printf("test escape \\d : \d");
            ^~~~~~~~~~~~~~~~~~~~~~


compiling file 40.c



compiling file 41.c



compiling file 42.c

42.c: In function ‘main’:
42.c:4:12: warning: unknown escape sequence: '\g'
     printf("test escape \\g : \g");
            ^~~~~~~~~~~~~~~~~~~~~~


compiling file 43.c

43.c: In function ‘main’:
43.c:4:12: warning: unknown escape sequence: '\h'
     printf("test escape \\h : \h");
            ^~~~~~~~~~~~~~~~~~~~~~


compiling file 44.c

44.c: In function ‘main’:
44.c:4:12: warning: unknown escape sequence: '\i'
     printf("test escape \\i : \i");
            ^~~~~~~~~~~~~~~~~~~~~~


compiling file 45.c

45.c: In function ‘main’:
45.c:4:12: warning: unknown escape sequence: '\j'
     printf("test escape \\j : \j");
            ^~~~~~~~~~~~~~~~~~~~~~


compiling file 46.c

46.c: In function ‘main’:
46.c:4:12: warning: unknown escape sequence: '\k'
     printf("test escape \\k : \k");
            ^~~~~~~~~~~~~~~~~~~~~~


compiling file 47.c

47.c: In function ‘main’:
47.c:4:12: warning: unknown escape sequence: '\l'
     printf("test escape \\l : \l");
            ^~~~~~~~~~~~~~~~~~~~~~


compiling file 48.c

48.c: In function ‘main’:
48.c:4:12: warning: unknown escape sequence: '\m'
     printf("test escape \\m : \m");
            ^~~~~~~~~~~~~~~~~~~~~~


compiling file 49.c

49.c: In function ‘main’:
49.c:4:12: warning: unknown escape sequence: '\o'
     printf("test escape \\o : \o");
            ^~~~~~~~~~~~~~~~~~~~~~


compiling file 50.c

50.c: In function ‘main’:
50.c:4:12: warning: unknown escape sequence: '\p'
     printf("test escape \\p : \p");
            ^~~~~~~~~~~~~~~~~~~~~~


compiling file 51.c

51.c: In function ‘main’:
51.c:4:12: warning: unknown escape sequence: '\q'
     printf("test escape \\q : \q");
            ^~~~~~~~~~~~~~~~~~~~~~


compiling file 52.c



compiling file 53.c

53.c: In function ‘main’:
53.c:4:12: warning: unknown escape sequence: '\s'
     printf("test escape \\s : \s");
            ^~~~~~~~~~~~~~~~~~~~~~


compiling file 54.c

54.c: In function ‘main’:
54.c:4:12: error: incomplete universal character name \u
     printf("test escape \\u : \u");
            ^~~~~~~~~~~~~~~~~~~~~~


compiling file 55.c



compiling file 56.c

56.c: In function ‘main’:
56.c:4:12: warning: unknown escape sequence: '\w'
     printf("test escape \\w : \w");
            ^~~~~~~~~~~~~~~~~~~~~~


compiling file 57.c

57.c: In function ‘main’:
57.c:4:12: error: \x used with no following hex digits
     printf("test escape \\x : \x");
            ^~~~~~~~~~~~~~~~~~~~~~


compiling file 58.c

58.c: In function ‘main’:
58.c:4:12: warning: unknown escape sequence: '\y'
     printf("test escape \\y : \y");
            ^~~~~~~~~~~~~~~~~~~~~~


compiling file 59.c

59.c: In function ‘main’:
59.c:4:12: warning: unknown escape sequence: '\z'
     printf("test escape \\z : \z");
            ^~~~~~~~~~~~~~~~~~~~~~


compiling file 60.c



compiling file 61.c

61.c: In function ‘main’:
61.c:4:12: warning: unknown escape sequence: '\|'
     printf("test escape \\| : \|");
            ^~~~~~~~~~~~~~~~~~~~~~


compiling file 62.c

62.c: In function ‘main’:
62.c:4:12: warning: unknown escape sequence: '\}'
     printf("test escape \\} : \}");
            ^~~~~~~~~~~~~~~~~~~~~~


compiling file 63.c

63.c: In function ‘main’:
63.c:4:12: warning: unknown escape sequence: '\~'
     printf("test escape \\~ : \~");
            ^~~~~~~~~~~~~~~~~~~~~~
```

#### Run result:
```bash

$ ./01
test escape \! : !

$ ./02
test escape \# : #

$ ./03
test escape \$ : $

$ ./04
test escape \:

$ ./05
test escape \& : &

$ ./06
test escape \' : '

$ ./07
test escape \( : (

$ ./08
test escape \) : )

$ ./09
test escape \* : *

$./10
test escape \+ : +

$./11
test escape \, : ,

$./12
test escape \- : -

$./13
test escape \. : .

$./14
test escape \/ : /

$./15
test escape \0 :

$./16
test escape \1 :

$./17
test escape \2 :

$./18
test escape \3 : 

$./19
test escape \4 : 

$./20
test escape \5 : 

$./21
test escape \6 : 

$./22
test escape \7 :

$./23
test escape \8 : 8

$./24
test escape \9 : 9

$./25
test escape \: : :

$./26
test escape \; : ;

$./27
test escape \< : <

$./28
test escape \= : =

$./29
test escape \> : >

$./30
test escape \? : ?

$./31
test escape \@ : @

$./32
test escape \[ : [

$./33
test escape \] : ]

$./34
test escape \^ : ^

$./35
test escape \_ : _

$./36
test escape \` : `

$./37
test escape \a :

$./38
test escape \c : c

$./39
test escape \d : d

$./40
test escape \e :

$./41
test escape \f :

$./42
test escape \g : g

$./43
test escape \h : h

$./44
test escape \i : i

$./45
test escape \j : j

$./46
test escape \k : k

$./47
test escape \l : l

$./48
test escape \m : m

$./49
test escape \o : o

$./50
test escape \p : p

$./51
test escape \q : q

$./52
 est escape \r :

$./53
test escape \s : s

$./55
test escape \v :

$./56
test escape \w : w

$./58
test escape \y : y

$./59
test escape \z : z

$./60
test escape \{ : {

$./61
test escape \| : |

$./62
test escape \} : }

$./63
test escape \~ : ~

```

_Note: Some output isn't correct for escaping wit numbers_
