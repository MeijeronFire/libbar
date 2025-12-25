# BAR

This library provides a very simple bar. It works by providng the function `printBar()` with a percentage of completion and a description. Once the bar is completed, `flusBar()` may be called to provide a full bar and a different description.

## usage examples
##### printBar

```c
printBar("Lorem Ipsum - ", 50);
```
yields
``` 
Lorem Ipsum - [#########################-------------------------]
```
##### flushBar
```c
flushBar("Completed - ");
```
yields
```txt
Completed - [##################################################]
```