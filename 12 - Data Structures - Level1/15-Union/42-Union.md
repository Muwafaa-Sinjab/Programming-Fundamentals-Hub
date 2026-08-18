# 42 - Union

## Overview
This lesson explains the Union data type in C++. It shows that a Union allows different data types to share the same memory location. It also explains the risks and rules of using a Union.

## Main Topics
### What is a Union?
A Union is a user-defined data type. In a structure, each member has its own memory space. In a Union, all members share the **same** memory space. This means you can store different types of data in the same memory location, but you can only use one type at a time.

### Code Example
This example shows a Union that can store an `int`, a `float`, or a `char`.

```cpp
#include <iostream>

union MyUnion {
    int intValue;
    float floatValue;
    char charValue;
};

int main() {
    MyUnion myUnion;

    myUnion.intValue = 42;
    std::cout << "Integer value: " << myUnion.intValue << std::endl;

    myUnion.floatValue = 3.14f;
    std::cout << "Float value: " << myUnion.floatValue << std::endl;

    myUnion.charValue = 'A';
    std::cout << "Char value: " << myUnion.charValue << std::endl;

    return 0;
}
```

When you assign a value to one member, it changes the shared memory. If you then read another member, the computer reads the same memory but interprets the bits as a different type.

### Undefined Behavior
You must be very careful when reading from a Union. You should **only** read the member that was last assigned a value. Reading a different member causes **undefined behavior**. This means the result is unpredictable and might not make sense for that type.

### Careful Member Access
If you store an integer and then try to read it as a floating-point number, the bits will be interpreted differently. You will get an unexpected and wrong result. Always know which member was last written to.

### Size of a Union
The size of a Union is determined by its **largest** member. For example, if a Union has an `int` (4 bytes), a `float` (4 bytes), and a `char` (1 byte), the size of the Union will be 4 bytes. This can lead to wasted memory if the design is not careful.

## Key Takeaways
- A Union allows different data types to share the same memory location.
- All members in a Union share the same memory space.
- You can only safely use one member at a time.
- Reading a member that was not the last one written causes undefined behavior.
- The size of a Union is equal to the size of its largest member.

[Muwafaa Sinjab] @[**Muwafaa-Sinjab**](https://github.com/Muwafaa-Sinjab)