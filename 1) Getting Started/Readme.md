# Chapter 1 : Getting Started

## Types of Constant

1. **Primary**
    1) Integer Constant
    2) Real Constant
    3) Character Constant
2. **Secondary**
    1) Array
    2) Pointer
    3) Structure
    4) Union
    5) Enum,etc.

## Type of C Variables

A particular type of variable can hold only the same type of constant.
It is compulsory to declare the type of any variable that we wish to use in a program.

## Keywords in C

There are only 32 keywords available in C.
1. **auto**
2. **break**
3. **case**
4. **char**
5. **const**
6. **continue**
7. **default**
8. **do**
9. **double**
10. **else**
11. **enum**
12. **extern**
13. **float**
14. **for**
15. **goto**
16. **if**
17. **int**
18. **long**
19. **register**
20. **return**
21. **short**
22. **signed**
23. **sizeof**
24. **static**
25. **struct**
26. **switch**
27. **typedef**
28. **union**
29. **unsigned**
30. **void**
31. **volatile**
32. **while**

## Form of C Program

1. Each instruction in a C program is written as a separate statement.
2. Order decides execution
3. Blank spaces - Improve readability
4. All statements - lower case letters
5. End statements - ;
6. U can write C statement anywhere in the line - Freeform Language
7. We can write multiple statement in one line by termination each statement using ;

## Comments in C Program

commenting a sentence - /* */

## What is main() ?

1. It is a container for a set of statements.
2. main() function always return an integer value hence int before main() - int main().
3. some compilers like turbo C/C++ allow us to use void - void main().

## printf() and its Purpose

1. printf() is used to display output.
2. It is necessary to use #include <stdio.h> for using the printf() function.
3. The general form is 
```asm
printf("<format string>", <list of variables>);
```
format string can contain,
```
%f - float
%d - integer
%c - character
```

## scanf() and its Purpose

1. Same format string is used for the input purpose
```asm
scanf("%d",&p);
```
2. While inputting multiple values add space in between the values.

