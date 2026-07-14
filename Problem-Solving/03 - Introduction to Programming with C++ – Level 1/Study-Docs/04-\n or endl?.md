# 04 - \n or endl?

## Overview
This lesson compares `\n` and `endl`, two ways to move output to a new line in C++, and explains why they are not exactly the same.

## Same Output, Different Behavior
Both lines below print the same visible result.

```cpp
cout << "Line one" << endl;
cout << "Line two\n";
```

The difference is not in what appears on the screen, but in how the program handles the output behind the scenes.

## What Is a Buffer?
A buffer is a temporary storage area in memory. Output is often collected in the buffer first, and then sent to the screen later, instead of being sent immediately every time.

## How endl Works
`endl` does two things:
- It moves the output to a new line.
- It immediately empties (flushes) the buffer, forcing the output to appear right away.

## How \n Works
`\n` only moves the output to a new line. It does not flush the buffer. The buffer is emptied later, either when it becomes full or when the program ends.

## Why the Difference Matters
Flushing the buffer takes extra time. This has little effect when printing a few lines, but it can slow a program down when printing many lines.

```cpp
for (int i = 0; i < 1000; i++) {
    cout << "Line " << i << "\n";
}
```

Using `\n` in a loop like this is more efficient, because the buffer is not flushed on every single line.

## When to Use Each
- Use `\n` when printing many lines, or when immediate display is not required.
- Use `endl` when it is important to see the output right away, such as at the end of a program or while checking for errors.

A common approach is to combine both: use `\n` inside loops or repeated print statements, and use `endl` for a final, important line.

```cpp
for (int i = 0; i < 1000; i++) {
    cout << "Line " << i << "\n";
}
cout << "Process completed!" << endl;
```

Here, `\n` keeps the loop fast, while `endl` makes sure the final message is flushed and shown immediately.

## Summary
- `\n` and `endl` both start a new line.
- `endl` also flushes the output buffer; `\n` does not.
- `\n` is usually faster for large amounts of output.
- `endl` is useful when the output must appear immediately.
