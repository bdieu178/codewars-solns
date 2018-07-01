"""
What is an anagram? Well, two words are anagrams of each other if they both contain the same letters. For example:

'abba' & 'baab' == true

'abba' & 'bbaa' == true

'abba' & 'abbba' == false

Write a function that will find all the anagrams of a word from a list. You will be given two inputs a word and an array with words. You should return an array of all the anagrams or an empty array if there are none. For example:

anagrams('abba', ['aabb', 'abcd', 'bbaa', 'dada']) => ['aabb', 'bbaa']

anagrams('racer', ['crazer', 'carer', 'racar', 'caers', 'racer']) => ['carer', 'racer']

anagrams('laser', ['lazing', 'lazy',  'lacer']) => []

"""
def anagrams(word, words):
    letters = [ elem for elem in word ]
    letters_sum = 0
    anagram_list = []
    # Sum up the total count of letters in target word
    for ltr in letters:
        letters_sum += letters.count(ltr)
    # Find the anagrams for the target word
    for wrd in words:
        tmp = [ x for x in wrd ]
        tmp_set = { x for x in wrd }
        tmp_sum = 0
        for ltr in tmp:
          tmp_sum += tmp.count(ltr)
        # Add word to anagram list if set of letters and sum of matching letters match
        if (tmp_sum == letters_sum) & (tmp_set.issubset(letters)) : anagram_list.append(wrd)
    return anagram_list
    
    