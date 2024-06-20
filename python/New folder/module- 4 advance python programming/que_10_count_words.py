#  Write a Python program to count the frequency of words in a file. 
f = open("my file.txt","r")

line = f.readlines()
word_counter = {}

for word in line:
    word_list = word.split()
    # print(word_list)
    for words in word_list:
        if words in word_counter:
            word_counter[words]+=1
        else:
            word_counter[words]=1

print(word_counter)
    