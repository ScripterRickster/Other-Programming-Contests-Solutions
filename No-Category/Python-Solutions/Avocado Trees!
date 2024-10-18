n,q,h = map(int,input().split(" "))
y = []
mH = []
the_max = 0

psa = [0 for i in range(n+1)]


for i in range(n):
	a,b = map(int,input().split(" "))
	mH.append(a)
	y.append(b)

	if mH[i] <= h:
		psa[i+1] = psa[i] + y[i]
	else:
		psa[i+1] = psa[i]


for i in range(q):
	r1,r2 = map(int,input().split(" "))
	if r1 > 1:
		the_max = max(the_max,psa[r2]-psa[r1-1])
	else:
		the_max = max(the_max,psa[r2])


print(the_max)
