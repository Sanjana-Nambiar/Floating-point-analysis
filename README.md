# Floating point analysis

## Problem statement:
Write a program in C that computes the following summations:

### Result = 1 - 1/2 + 1/3 - 1/4 + 1/5 – 1/6 +...........+1/9999 – 1/10000

The calculations should be done in the following ways:
1. Addition of operands from left to right.
2. Addition of operands from right to left.
3. Separate additions of positive and negative operands, each from left to right (add all the positive numbers together and then add all the negative numbers together, for each of them perform the operation from left to right, and then add the two results together).
4. Separate additions of positive and negative operands, each from right to left (same as C).

The summations above is accumulated first as float numbers, then double float numbers. Therefore, the program will print eight different calculations.

##### So that there will be eight possible results:
- **Result-1:** addition from left to right accumulated in float
- **Result-2:** addition from right to left accumulated in float
- **Result-3:** all positives + all negatives from left to right accumulated in float 
- **Result-4:** all positives + all negatives from right to left accumulated in float 
- **Result-5:** addition from left to right accumulated in double float
- **Result-6:** addition from right to left accumulated in double float
- **Result-7:** all positives + all negatives from left to right accumulated in double float 
- **Result-8:** all positives + all negatives from right to left accumulated in double float

## Reasearch work:
To analyze these eight results and explain the observed differences. Why one results are more accurate then the other, and suggest the advantages and disadvantages of calculating the additions one way or another. 
