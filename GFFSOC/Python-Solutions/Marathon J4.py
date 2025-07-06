n,q = map(int,input().split(" "))

l = []
r = input().split(" ")
for i in range(len(r)):
    if i == 0:
        l.append(int(r[i]))
    else:
        #print(int(r[i]) + int(r[i-1]))
        l.append((int(r[i]) + int(l[i-1])))
        #print(f"I {i}: {l[i]}")
        

for i in range(q):
    i1,i2 = map(int,input().split(" "))
    #print(f"S: {l[len(l)-1],l[i2-1],l[i1-1]}")
    sum = l[len(l)-1]-l[i2-1]
    if i1>1:
        sum += l[i1-2]
    print(sum)
   
    
