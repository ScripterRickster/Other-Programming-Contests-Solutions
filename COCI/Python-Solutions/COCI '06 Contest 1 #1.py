remainder = []

for i in range(10):
    num = int(input())
    if num%42 not in remainder:
        remainder.append(num%42)
        
print(len(remainder))
