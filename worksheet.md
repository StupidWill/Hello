
# CSCE 155E 
## Lab 2.0 Worksheet

Name(s) and Login(s): 
Will Cook
StupidWill


1. Dennis Ritchie, the creator of the C programming language,
was born on September 9th, 1941.  If he were still alive, 
how old would he be today?  Find out by running the `birthday`
program on the appropriate inputs and enter your solution here.

Dennis would be 78 years, 50 weeks, and 1 day old today.


2. Bjarne Stroustrup, the creator of the C++ programming
language, the object-oriented extension of C, was born on 
December 30th, 1950.  How old is he today?

Bjarne would be 69 years, 34 weeks, and 1 day old today.


3. Software testing often involves testing code with known
"bad" input in an attempt to break it (sometimes this is 
referred to as *fuzzing*).  Try breaking the `birthday_cli`
program by giving it "bad" input and observe the consequences.
Give at least two examples of potentially bad input and the 
results you observe.

I added a space in the name. It told me I was 2020 years, 36 weeks, and 2 days old today.
I input 13 for the month and 32 for the day. It told me I was 0 years, -22 weeks, and -5 days old today.


4. Complete all the size and range entries below.

* `char`
  size: 1 byte
  range: -128 to 127
* `short int`
  size: 2 bytes
  range: -32768 to 32767
* `int`
  size: 2 bytes
  range: 0 to 65535
* `long int`
  size: 4 bytes
  range: -2147483648 to 2147483647
* `float`
  size: 4 bytes
  range: 7 digits of accuracy
* `double`
  size: 8 bytes
  range: 15 digits of accuracy


5. Use your working currency conversion to determine 
the exchange amounts for the following inputs:

  a) $250.25
  67.567500 British Pounds and 8648.640000 Japanes JPY
  
  b) $1,000.52
  270.140400 British Pounds and 34577.971200 Japanese JPY

  c) $968,410.12
  261470.732400 British Pounds and 33468253.747200 Japanese JPY



6. Suppose that you had used only `int` types
in your conversion program.  Would you be able 
to use it to convert the US national debt 
(which as of 2020 was \$26,009,754,625,487)?
Why or why not?

No because it doesn't have enough range.


7. Mixed types

a) Run the `area` program with 3 and 4 as inputs.  
What value do you get?  Is this result correct?

0.000000 No that's not correct

b) Execute the program again with inputs 3 and 5.
Does the program give correct results?  Why not?

No, the program must be messed up.

c) Fix the program by editing the `area.c` source 
code so that the program produces correct results.


