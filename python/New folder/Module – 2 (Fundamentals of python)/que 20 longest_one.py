# Write a Python function that takes a list of words and returns the length 
# of the longest one.
word_data = input("enter word ").split()

print(word_data)

print(max(word_data,key=len))

