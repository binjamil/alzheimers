# Alzheimer's

An overview of commonly-occuring classes of memory-related bugs in C/C++. Following are the most frequently-occuring memory errors:

- **Memory Leaks**: memory is allocated but not deallocated, causing the program to consume more and more memory over time
- **Dangling Pointers**: a pointer to a memory location that has already been freed explicitly or by a garbage collector
- **Buffer Overflows**: write to a memory buffer beyond its allocated bounds, causing the program to crash or behave unexpectedly
- **Use After Free**: memory access that has already been freed, causing the program to crash or corrupt memory
- **Invalid Free**: attempt to free memory that has not been dynamically allocated
- **Double Free**: program attempts to free memory that has already been freed

## Usage

This repository contains at least one code example of each memory-related error defined above. You will need `gcc` or `clang` installed in your system in order to compile and run. For example, to compile `memory-leak.cc` execute the following command:

```sh
gcc -o memory-leak memory-leak.cc -Wall
```

The `-Wall` flag tells compiler to generate all warnings, which are really helpful to know more about these memory bugs.

To run the program, simply execute:

```sh
./memory-leak
```
