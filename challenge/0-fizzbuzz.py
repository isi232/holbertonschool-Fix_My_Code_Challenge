#!/usr/bin/python3

import sys

result = []
for i in range(1, int(sys.argv[1]) + 1):
    if i % 3 == 0 and i % 5 == 0:
        result.append("FizzBuzz")
    elif i % 3 == 0:
        result.append("Fizz")
    elif i % 5 == 0:
        result.append("Buzz")
    else:
        result.append(str(i))

print(" ".join(result))

