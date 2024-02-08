# Understanding computer applications: a simple ground-up guide

In this project I compile a collection of thoughts and examples
covering how to build computer applications from the ground up.
Specifically, the project discusses x86\_64 assembly
language, C, and the Linux operating system.
It covers how to create computer applications to run on modern
systems using only the operating system kernel interface.

Througohut the book we will build from scratch

 - a custom C "standard" library indpendent of libc[^1];
 - a set of command line utilities including a simple shell;
 - a frame buffer rendered terminal emulator;
 - a debugger and corresponding frame buffer GUI;
 - a frame buffer compositor and tiling window manager;
 - an online multiplayer videogame.

In this way we will build a custom Linux based operating system from the ground
up. Then we will show a simple way to adapt our graphical applications to target
more common Linux window managers (X, Wayland). We'll also add an option for our
library to use a
linked libc instead of our custom x86\_64 syscall version, thus making it just
as cross platform as libc. Some Windows APIs will be covered as well so our GUI
can draw to the framebuffer of a window in Windows as well.

[^1]: I call it a standard library for lack of a better term: it provides some
    of the functionality of the C standard library while specifically choosing
    to not follow the C standard.
