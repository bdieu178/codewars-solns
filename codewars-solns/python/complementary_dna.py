"""
By: CodeWars
Description:
Deoxyribonucleic acid (DNA) is a chemical found in the nucleus of cells and carries the "instructions" for the development and functioning of living organisms.

If you want to know more http://en.wikipedia.org/wiki/DNA

In DNA strings, symbols "A" and "T" are complements of each other, as "C" and "G". You have function with one side of the DNA (string, except for Haskell); you need to get the other complementary side. DNA strand is never empty or there is no DNA at all (again, except for Haskell).

i.e.
DNA_strand ("ATTGC") # return "TAACG"

DNA_strand ("GTAT") # return "CATA"

"""
def DNA_strand(dna):
    dna_out = []
    for letter in dna:
        if letter == 'A':
            dna_out.append('T')
            continue
        if letter == 'T':
            dna_out.append('A')
            continue
        if letter == 'C':
            dna_out.append('G')
            continue
        if letter == 'G':
            dna_out.append('C')
            continue
    strand = ""
    for i in dna_out:
       strand += str(i)
    return strand
