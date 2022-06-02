# Check if two words are anagrams 
# Example:
# find_anagrams("hello", "check") --> False
# find_anagrams("below", "elbow") --> True


def find_anagram(word, anagram):
    if (len(word) == len(anagram) and sorted(word)== sorted(anagram)):
        return  True
    return False

print(find_anagram("hello","check"))
print(find_anagram("below","elbow"))
