# Circular Buffer Implementation in C

A lightweight, fixed-size circular buffer (FIFO queue) implemented in standard C.  
This program demonstrates enqueue/dequeue operations using a circular array, with a practical example that processes user input.

## Features

- **Fixed-size buffer** – configurable via `SIZE` macro (default: 5)
- **Circular indexing** – wraps around using modulo arithmetic
- **Overflow/underflow protection** – prevents read/write on full/empty buffer
- **Example use case** – reads a name, appends `"CE-ESY"`, then buffers and outputs the result

## Code Overview

### Core Functions

| Function      | Description                                      |
|---------------|--------------------------------------------------|
| `reset()`     | Resets buffer pointers and element counter       |
| `empty()`     | Returns `1` if buffer is empty, otherwise `0`    |
| `full()`      | Returns `1` if buffer is full, otherwise `0`     |
| `insert(char)`| Adds a character to the buffer (if space exists) |
| `removeChar()`| Removes and returns the oldest character         |

### Buffer Logic

- `start` – index of the oldest element (read pointer)
- `end` – index where the next element will be written
- `elements` – current number of stored characters
- Buffer indices wrap after reaching `SIZE - 1`

## Example Run
