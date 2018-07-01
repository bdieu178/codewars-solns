
"""
Given an array, find the int that appears an odd number of times.

There will always be only one integer that appears an odd number of times.
"""
#by Bryan Dieudonne

def find_it(seq):
    odd_set = set(range(1,len(seq),2))
    #even_set = set(range(0,len(seq),2))
    for num2 in seq:
        if seq.count(num2) in odd_set:
           return num2
        if seq.count(num2) == 1:
           return num2
