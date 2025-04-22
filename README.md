# Time Abstract Data Type (ADT) in C

This project implements an Abstract Data Type (ADT) for representing time, encapsulating hours, minutes, and seconds. The main objective is to create a modular, reusable set of functions for time manipulation in C.

> This is a C program *template* generated from:
>
> - <https://github.com/estsetubal-atad/CProgram_Template.git>  
> &nbsp;


## Features

- `timeCreate`: Creates a new time instance given the hour, minute, and second.

- `timeDestroy`: Frees the memory used by a time instance.

- `timeGetHour`, `timeGetMinute`, `timeGetSecond`: Get the individual components (hour, minute, second) of a time instance.

- `timeAdd`: Adds two time instances, wrapping around at 24:00:00.

- `timeDiff`: Computes the absolute difference between two time instances.

- `timePrint`: Prints the time in a human-readable format (hh:mm:ss).

- Other operations are suggested...

## Example output

The output of the base program should be:

```console
Time 1: 14:45:30
Time 2: 02:20:50
Time 1 components: 14 hours, 45 minutes, 30 seconds
Sum: 17:06:20
Difference: 12:24:40
```

