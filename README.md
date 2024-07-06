# C Program to Write Current Date  and Time to a File


This repository contains a C program that captures the current system date and time and writes it to a file named `date.txt`. Each time the program is run, it overwrites the `date.txt` file with the new date and time.


## Overview


The program demonstrates basic file I/O operations in C by:
- Retrieving the current date and time from the system.
- Formatting the date and time as `YYYY-MM-DD HH:MM:SS`.
- Writing the formatted date and time to a file named `date.txt`.
- Printing a success message to the console.


## Features


- Retrieves the current date and time from the system.
- Writes the date and time to `date.txt`, overwriting the file if it already exists.
- Simple and easy-to-understand example of C file I/O operations.


# How to Compile and Run


To compile and run the C program, follow these steps:


### 1. Clone the Repository:


```
git clone git@github.com:Cemrecicek/DateWriter.git
cd DateWriter
```

### 2. Compile the Program:


Write the following code to terminal.

```
gcc -o date-writer main.c
```


### 3.Run the Program:


Execute the compiled program with:

```
./date-writer
```


### Check `date.txt`:


```
cat date.txt
```


