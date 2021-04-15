[![](https://www.holbertonschool.com/holberton-logo.png)](https://www.holbertonschool.com/)

# Simple Shell Project
A simple Unix command line interpreter as a final first quarter project.

## Objective.
Create a simple version of the Unix command line interpreter, with certain system calls allowed. 

## Description.

Is a command line interpreter that executes commands read from standard input.


## Allowed and used system calls and functions.

 - [ ] access (man 2 access)
 - [ ] chdir (man 2 chdir)
 - [ ] close (man 2 close)
 - [ ] closedir (man 3 closedir)
 - [x] execve (man 2 execve)
 - [x] exit (man 3 exit)
 - [ ] _exit (man 2 _exit)
 - [ ] fflush (man 3 fflush)
 - [x] fork (man 2 fork)
 - [x] free (man 3 free)
 - [ ] getcwd (man 3 getcwd)
 - [x] getline (man 3 getline)
 - [x] getpid (man 2 getpid)
 - [x] isatty (man 3 isatty)
 - [ ] kill (man 2 kill)
 - [x] malloc (man 3 malloc)
 - [ ] open (man 2 open)
 - [ ] opendir (man 3 opendir)
 - [x] perror (man 3 perror)
 - [ ] read (man 2 read)
 - [ ] readdir (man 3 readdir)
 - [x] signal (man 2 signal)
 - [x] stat (__xstat) (man 2 stat)
 - [ ] lstat (__lxstat) (man 2 lstat)
 - [ ] fstat (__fxstat) (man 2 fstat)
 - [x] strtok (man 3 strtok)
 - [x] wait (man 2 wait)
 - [ ] waitpid (man 2 waitpid)
 - [ ] wait3 (man 2 wait3)
 - [ ] wait4 (man 2 wait4)
 - [x] write (man 2 write)


## Implemented functions

 - **_signal** - *Checks if a signal has been input.*

 - **read_line** - *Read the entered arguments.*
 - **tokenize** - *Parses the arguments into tokens.*
 - **get_env** - *Getting the $PATH.*
 - **check_path** - *Check if the file is in the path.*
 - **execute** - *Check if the command entered is a built in or not.*
 - **builtins** - *Default kernel commands.*
 - **launch** - *Check if the command entered is in the $PATH.*
 - **_fork** - *Create a new process to execute the command entered.*
 - **_error** - *Print the standard error.*
 - **_strncmp** - *Compare two strings in a specific range*
 - **_strcat** - *Concatenates two strings.*
 - **_strcmp** - *Compares two strings.*
 - **_strcpy** - *Copies the string.*
 - **_strlen** - *Counts string chars.*



## Compilation:
  You can compile the project "printf" by do the following command:

       gcc -Wall -Werror -Wextra -pedantic *.c -o hsh 
       

## Execution

	    ./hsh

       
## Examples:

***Interactive mode:***

    $ ls
    - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
	AUTHORS  _fork.c  auxiliar_functions.c  check_path.c
    get_env.c  launch.c  man_1_simple_shell  simple_shell
    README.md  _signal.c  builtins.c  execute.c  holberton.h
    main.c  read_line.c  tokenize.c

	---------------------------------------------------------

    $ /bin/ls
    - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    AUTHORS  _fork.c  auxiliar_functions.c  check_path.c
    get_env.c  launch.c  man_1_simple_shell  simple_shell
    README.md  _signal.c  builtins.c  execute.c  holberton.h
    main.c  read_line.c  tokenize.c

***Non interactive mode:***

    echo "/bin/ls" | ./hsh
    - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    AUTHORS  _fork.c  auxiliar_functions.c  check_path.c
    get_env.c  launch.c  man_1_simple_shell  simple_shell
    README.md  _signal.c  builtins.c  execute.c  holberton.h
    main.c  read_line.c  tokenize.c

## Manual. ##
To enter the manual use the following code:
```
man -l man_1_simple_shell
```
## Authors:

* **Sergio Orejarena Rueda** - [*GitHub*](https://github.com/SergioO21)  / [*Twitter*](https://twitter.com/SergioOR21)
* **Jaime Arturo Blanco Gutiérrez** - [*GitHub*](https://github.com/jblanco75)   / [*Twitter*](https://twitter.com/jblanco75)

## Flowchart:
<details>
       <summary>Click to view the flowchart</summary>
       <img src= "https://github.com/SergioO21/simple_shell/blob/main/Flowchart_shell.png" />
</details>

#### Finished in 14 / 04 / 2021. ####
