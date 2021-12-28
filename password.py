
#  py program to cracked password

def cracked(password): #this is function in python

    if password <=-1:
        print("Enter positive charcator only")
        exit(0)
    
    for i in range(0,999999):
        if(i == password):
            print("Your password is"+ str(i))
            break;
        else:
            print("Trying password[" + str(i) +"]")

        
print("CODE BY:- SHUBHAM PANDAV ")
password = input("Enter your password:")
password = int(password)

cracked(password) #calling function 


    




