n = int(input())
s = input()

vowels = set('aeiou')


result = []
for char in s:
    if char in vowels:
        result.append('0')  
    else:
        result.append('1') 

print(''.join(result))
