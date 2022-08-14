# Chapter 3 - Decision Control Instruction

## The if-else Statement

It is used to implement the decision control instruction.
```asm
if (this condition is true)
    statement1;
else
    statement2;
```

The condition can include following kind of expressions:
1. x == y
2. x != y
3. x < y
4. x > y
5. x <= y
6. x >= y

## Multiple statements within if-else
1. The group of statements after the if up to and not including the
else is called an "if block". same goes for the else block.
2. We can drop the braces within the if and else block if there exist
only one statement.

## Nested if-else
We can add an if-else inside another if-else condition
```asm
if (condition)
{
    statement1;
}
else
{
    if (condition)
    {
        statementx;
    }
    else
    {
        statementz;
    }
}
```