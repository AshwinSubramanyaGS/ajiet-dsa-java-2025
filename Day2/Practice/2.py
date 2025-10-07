#WAP to remove all even numbers from a list

original_list=[1,2,3,4,5,6]

odds=list(filter(lambda x: x%2!=0,original_list))
odds2=list(i  for i in original_list if i%2!=0)

print("Original list: ",original_list)
print("Odd only list: ",odds2)

for i in original_list:
    if i%2==0:
        original_list.pop(original_list.index(i))

print("New list: ",original_list)