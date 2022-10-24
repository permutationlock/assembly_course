# Chapter 1: Circuits and Bytecode

The purpose of this chapter is to get familiar with the physical
electronics that make computing possible. Along the way we will
build a tiny 8 bit processor.

## Digital logic

Most modern computers are built from digital circuits. A digital
logic circuit is an electronic circuit where each wire carries a
binary digital value: on or off, one or zero. This differs from
analog electronics where the signal on a wire is a
continuous value determined by varying its voltage or current.

## Transistors

The fundamental building block of digital electronics is a
device known as a transistor that acts as a digital switch.
A transistor has three electric terminals known respectively
as the base, collector, and emitter. When an
electric current is applied to the base of an N-type transistor,
the transistor switches on allowing current to flow between
the collector and the emitter. In a P-type transistor the circuit
between the collector and emitter is closed by default,
applying a current to the base terminal breaks the circuit.

## Logic gates

A digital circuit takes a set of input pins and maps them to a set
of output pins. In this section we will construct a fundamental set
of basic circuits are called logic gates.

The trivial logic gate connects the input value directly to the
output: the output is on if and only if the input is on. A
slightly more useful logic gate is the NOT gate: the output is on if
and only if the input is off.

We can construct both of these gates with transistors.
Each logic gate will always have a power
source and a ground in addition to the input and output pins; think
of this as connecting the positive and negative end of a battery to
the circuit.

For the trivial gate we have an N-type transistor connecting the
power to the output pin and a P-type transistor connecting the ground
to the output pin, with the base of each transistor connected to the
input. If the input is on, N-type transistor will be switched on and
the P-type switched off, connecting the output pin to power. If the
input is on, the reverse will hold and the output will be connected
to ground.

To construct the NOT gate we simply swap the P-type and N-type
transistors.

Next, let us construct a slightly more interesting gate: the AND
gate. An AND gate has two input pins and one output. The output pin
is on only if both input pins are on. A diagram below shows how to
construct an AND gate from transistors.

It is often useful to make a
table indicating all the possible input and output combinations for a
circuit, known as a truth table. The truth tables for the three gates
we have constructed so far are shown below.

Connecting the output of an AND gate to a NOT gate we circuit known as
a NAND gate. This gate sets its output to on if and only if both
inputs are not on; the truth table can be found below. A special
property of NAND gates is that all other logic gates can be
constructed from NAND gates.

The final gates that we will create are the OR gate and the XOR gate.
An OR gate sets its output to on if either of its input pins are on.
An XOR or exclusive OR gate sets its output to on if exactly one of
its inputs are on.

To create an OR gate we can simply connect a not gate to each input
pin of a NAND gate. The circuit diagram for an XOR gate is slightly
more complicated using four NAND gates.

## Binary numbers

A fundamental part of computing is the ability to do arithmetic.
Digital circuits can only take in a set of binary inputs, so we need
a way to use these represent numbers.

The most common way for humans to write out numbers is in decimal
form. In decimal there are ten digits (0, 1, 2, 3, 4, 5, 6, 7, 8, 9)
that represent the numbers zero through nine. To represent
ten we write 10 indicating that there is a 1 in the "ten's place". To
write this out in mathematical notation 10 is 1x10 + 0x1. Similarly,
5237 is 5x1000 + 2x100 + 3x10 + 7x1.

In digital circuits we only have two "digits": on and off. We will
call these digits 1 and 0 to match decimal. These digits give us the
numbers zero and one, but what if we wanted to represent two? Well,
we can do something similar to decimal and write 10 which is
1x2 + 0x1. In order to represent 7 we would write 111 meaning 1x4 +
1x2 + 1x1. This system is known as binary and each digit is known as
a bit. So if you have ever heard of a 64 bit computer, that is
referring to the fact that integers are internally represented by 64
bits.

## Adders

Having defined a method to represent numbers with input pins, we can
now craft circuits to perform arithmetic.

## Negative binary numbers

## Flip flops

## Multiplexers

## Memory

## An 8-bit processor
