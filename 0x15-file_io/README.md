#ALX Project: 0x15. C - File I/O ( Covering system calling in C programming )

Learning Objectives:

How to create, open, close, read and write files
What are file descriptors
What are the 3 standard file descriptors, what are their purpose and what are their POSIX names
How to use the I/O system calls open, close, read and write
What are and how to use the flags O-RDONLY, O-WRONLY, O-RDWR
What are file permissions, and how to set them when creating a file with the open system call
What is a system call
What is the difference between a function and a system call

#Quiz questions:

a)What is the unistd symbolic constant for the standard input?
b)is open a function or a system call?
c)Most of the time, on a classic, modern Linux system, what will be the value of the first file descriptor you will get after opening a new file with open (if open succeeds of course)
d)Without context, on Ubuntu 14.04 LTS, write is a…?
e)What happens if you try to write “Best” to the standard input on Ubuntu 14.04 LTS?
f)True or False, When I am using O-WRONLY | O-CREAT | O-APPEND -> the | are bitwise operators?
g)What is the oflag used to open a file in mode read + write?
h)What is the oflag used to open a file with the mode read only?
i)What is the unistd symbolic constant for the standard output?
j)What is the return value of the system call open if it fails?
k)What is the unistd symbolic constant for the Standard error?
l)What is the equivalent of O-RDWR on Ubuntu 14.04 LTS?
m)What is the correct combination of oflags used to open a file with the mode write only, create it if it doesn’t exist and append new content at the end if it already exists?
n)What system call would you use to write to a file descriptor?

#Tasks:

0.Create a function that reads a text file and prints it to the POSIX standard output and returns the actual number of letters it could read and print, if the file can not be opened or read return 0, if filename is NULL return 0, if write fails or does not write the expected amount of bytes return 0

1.Create a function that creates a file, where filename is the name of the file to create and text-content is a NULL terminated string to write to the file, and returns 1 on success or -1 on failure, the created file must havepermissions rw-------

2.Create a function that appends text at the end of a file, where filename is the name of the file and text-content is the NULL terminated string to add at the end of the file and returns 1 on success and -1 on failure.

3.Crate a program that copies the content of a file to another file with rw-rw-r-- Permissions of the created file.

4.Create a program that displays the information contained in the ELF header at the start of an ELF file (Usage: elf-header elf-filename)
