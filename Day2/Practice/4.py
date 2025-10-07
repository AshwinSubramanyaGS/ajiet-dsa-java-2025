#Filter out any repeated list elements

original_list=[1,2,3,1,2,3,3,4,5,9]

new_list=list(set(original_list))

print("Original list: ",original_list)
print("No repeat list: ",new_list)