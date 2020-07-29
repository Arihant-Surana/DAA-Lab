
def linearS(a,key,count):
    for i in range (k):
        count= count+1
        if a[i] == key:
            return ("found",count)

    return ("not found", count )

print("Enter the no of elements you want to enter")
k=int(input())
a=list(map(int,input().strip().split()))[:k]
print("Enter the element you want to search")
key=int(input())
count=0
flag=0
print("Element " ,linearS(a,key,count))
