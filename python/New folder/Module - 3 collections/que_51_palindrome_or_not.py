# Write a Python function that checks whether a passed string is palindrome or not 
# str = input("enter a string ")
def palindrome(str):
    rev = " "
    for ch in str:
        rev = ch + rev
    # print(rev)
    if str == rev:
         print("string is palindrome")
    else:
        print("string is not palindrome")
    return rev
result = palindrome("anjali")
print(result)