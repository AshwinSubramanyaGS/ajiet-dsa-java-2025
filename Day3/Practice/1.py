""" def reserve_array(arr):
    start=0
    end=len(arr)-1
    while start<end:
        arr[start],arr[end]=arr[end],arr[start]
        start+=1
        end-=1
        my_array=['1','2','3','4']
        printf(original array:[my_array])
        reserve_array[my_array]
        printf(reserved array) """

size=int(input("Enter size of array"))
array=[]

for i in range(size):
    array.append(int(input(f"{i+1}th element: ")))

print("Original array: ",array)
print("Reversed array: ",array[::-1])