a = input()
for i in range(len(a)):
    l = a[:i] + a[i+1:]
    if(l == l[::-1]):
        print(l + " removed " + a[i])
