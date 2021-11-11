x=int(input("Enter any Number: "))
y=x
rev=0
while(x>0):
    r=x%10
    rev=rev*10+r
    x=x//10
if(y==rev):
    print("Entered Number is Palindrome Number")
else:
    print("Entered Number is not a Palindrome Number")
