# Write a program to determine the number of times T a given number A consisting N Digits or the anagrams of A occur in another B consisting of M digits in a single iteration.
# An anagram of a number is formed by using exactly the same digits of the original number but with a different arrangement. 
# For example, anagrams of the number 123 are: 321, 312. 213, 231 and 132.

# Constraints
# A and B are positive integers
# 0 < N, M < 100

# Test Case 1
# Input
# 123
# 123212321

# Output
# 4
# Explanation
# 123212321 consists of 4 anagrams of 123 i.e. 123, 321, 123, 321

A = int(input())
B = int(input())



a = str(A)
a = sorted(a)
b = str(B)
count = 0

for i in range(len(b)):
    temp = b[i:len(a)+i]

    check = sorted(temp)
    if(check == a):
        count+=1

print(count)
# Time complexity O(N*len(A))
