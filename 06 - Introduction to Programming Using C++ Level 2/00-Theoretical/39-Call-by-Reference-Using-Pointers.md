# 39 - Call by Reference: Using Pointers

## Overview

This video demonstrates how to achieve call by reference using pointers instead of standard references. It uses the example of swapping the values of two variables to show the differences in syntax, function logic, and function calls.

## Main Topics

### Pointer Parameters

To modify original variables using pointers, the function parameters are declared as pointers rather than standard references. For example, instead of writing `int& n1`, the parameter is written as `int* n1`. This tells the function to expect a memory address rather than a direct variable alias.

### Dereferencing Inside the Function

Because the parameters are now pointers, they hold memory addresses, not the actual values. To read or modify the data stored at those addresses, the dereference operator `*` must be used before the parameter name inside the function body. Without the `*` symbol, the function would attempt to modify the address itself rather than the value.

### Passing Arguments to the Function

When calling a function that uses pointer parameters, the arguments passed must be memory addresses. This means the address-of operator `&` must be placed before the variable names in the function call, such as `swap_Poin(&a, &b)`.

```cpp
void swap_Poin(int* n1, int* n2) {
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

// Calling the function requires passing addresses
// swap_Poin(&s, &r);
```

## Key Takeaways

- Pointers can be used as an alternative method for call by reference.
- Pointer parameters are declared using the `*` symbol in the function signature.
- The `*` symbol is required inside the function to access and modify the actual values.
- The function call requires passing the memory address of the variables using the `&` symbol.

Muwafaa Sinjab @Muwafaa-Sinjab