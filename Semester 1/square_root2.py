number=int(input("Enter the number :"))
root=number/2
for i in range(10):
    root=(root+number/root)/2
print(root)
