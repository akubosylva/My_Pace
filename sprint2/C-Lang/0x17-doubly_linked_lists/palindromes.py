#!/usr/bin/python3

def isPalindrome(num):
    return (str(num) == str(num)[::-1])

def biggest_palindrome():
    biggest = 0
    for i in range(100, 999):
        for j in range(100, 999):
            num = i * j
            if (isPalindrome(num)):
                if num > biggest:
                    biggest = num
    return (biggest)
print(biggest_palindrome())
