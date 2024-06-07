#  How Do You Check The Presence Of A Key In A Dictionary? 
dic = {
       "name" : "anjali",
       "roll no" : 23,
       "study" : "python",
       "framework" : "django",
}

search = input("enter the key do you want to search ")

if  search in dic.keys():
    print("exist")
else:
    print("not exist")

