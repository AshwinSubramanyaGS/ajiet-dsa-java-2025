#WAP to square all odd number numbers from a list

original_list=[1,2,3,4,5,6]


squared_odds=list(i**2 if i%2!=0 else i for i in original_list)

print("Original list: ",original_list)
print("Squared odds: ", squared_odds)