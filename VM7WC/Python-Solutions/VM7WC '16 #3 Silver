from collections import deque
n,m,a,b  = map(int, input().split(" "))

arr = [[] for i in range(n+1)]
for i in range(m):
    e1,e2 = map(int,input().split(" "))
    arr[e1].append(e2)
    arr[e2].append(e1)
    
vis = [False for i in range(n+1)]

q = deque()
q.append(a)
vis[a] = True
while q:
    cur = q.popleft()
    for nxt in arr[cur]:
        if not vis[nxt]:
            vis[nxt] = True
            q.append(nxt)

if vis[b] == True:
    print("GO SHAHIR!")
else:
    print("NO SHAHIR!")
