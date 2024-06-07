#  Write a Python script to check if a given key already exists in a dictionary.
dict = {
      "name" : "anjali",
      "roll no": 1, 
      "subject" : "python",
      "framework" : "django"

} 

search = input("enter the key do you want to search ")

if search in dict.keys():
        
        print("exist")
else:
    
    print("not exist")