#palindrome_check
def palindrome_check(word):
    if word[:] == word[::-1]:
        return True
    return False

word = input("Enter any word : ")
print(palindrome_check(word))