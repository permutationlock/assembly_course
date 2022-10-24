# Hello C

In order to do anything meaningful with assembly, we need to have a
way to print some output. The C standard library function
[printf](https://cplusplus.com/reference/cstdio/printf/)
gives a standard way to print formatted output. We will use this to
print the output of our assembly functions.

It is important to note that C is compiled to assembly and we could
print output directly using assembly. However, printing output is not
something that the processor can do on its own and it requires 
