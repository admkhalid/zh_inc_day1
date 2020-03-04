a = input()
s = set()
for i in a:
    s.add(i)
for i in range(len(a)):
    l = a[:i] + a[i+1:]
    if(l == l[::-1]):
        print(l + " removed " + a[i])
    for k in s:
        l = a[:i] + k + a[i:]
        if(l == l[::-1]):
            print(l + " added " + k)
