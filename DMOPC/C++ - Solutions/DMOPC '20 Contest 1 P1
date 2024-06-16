tests = []
k = int(input())
for i in range(0,k):
    v = input()
    tests.append(v)
    
    
for n in tests:
    p = True
    m = False
    c = False
    if "M" in n:
        m = True
        p = False
    if "C" in n:
        c = True
        p = False
    
    if (m and c) and p == False:
        print("NEGATIVE MARKS")
    elif (m or c) and p == False:
        print("FAIL")
    elif (m == False and c == False) and p == True:
        print("PASS")
