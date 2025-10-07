#input an list sort it in ascending order the second half of list print it in reverse

size=int(input("Enter the size of array"))
arr=[]
print("Enter the array contents")
for i in range(size):
    arr.append(int(input(f"{i+1}th element")))

arr.sort()

for i in range(size//2):
    print(arr[i] , end=" ")

for i in range(size-1,(size//2)-1,-1):
    print(arr[i] , end=" ")
    
