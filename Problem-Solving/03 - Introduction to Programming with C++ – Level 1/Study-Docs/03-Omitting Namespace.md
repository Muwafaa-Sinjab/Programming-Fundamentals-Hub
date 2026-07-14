# 03 - Omitting Namespace

## Overview
This lesson explains what the `std` namespace is and how the `using namespace std;` line makes code shorter and easier to write.

## The Problem Without using namespace
Without this line, every standard command must be written with the prefix `std::`.

```cpp
#include <iostream>

int main() {
    std::cout << "Hello there";
    std::cout << std::endl;
    return 0;
}
```

Writing `std::` before every command is repetitive and makes the code harder to read.

## The Solution
Adding `using namespace std;` after the includes removes the need to write `std::` each time.

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello there";
    cout << endl;
    return 0;
}
```

Both programs above do exactly the same thing. The second version is shorter and cleaner.

## What Is a Namespace?
A namespace is a way to group related names (like functions and objects) so they do not conflict with names from other parts of a program. `std` is the namespace used by the standard C++ library, which is why commands like `cout` and `endl` belong to it.

## Correct Placement
The `using namespace std;` line must come after `#include` and before it is used in the code.

```cpp
#include <iostream>
using namespace std;   // correct position

int main() {
    cout << "Correct order";
    return 0;
}
```

Placing it before `#include`, or forgetting it while still using `cout` without `std::`, will cause an error.

## Summary
- `std::` must be written before standard commands unless `using namespace std;` is included.
- `using namespace std;` removes the need for repeating `std::`.
- It must be placed after the `#include` lines.
- A namespace groups related names together and avoids naming conflicts.
