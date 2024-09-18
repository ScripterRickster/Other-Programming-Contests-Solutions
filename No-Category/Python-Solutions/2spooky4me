inp = input().split(" ")
n = int(inp[0])
l = int(inp[1])
s = int(inp[2])

events = []

for i in range(n):
    inp2 = input().split(" ")
    x = int(inp2[0])
    y = int(inp2[1])
    sep = int(inp2[2])
    events.append((x-1, sep))
    events.append((y, -sep))

events.sort()

current_value = 0
total = 0
prev_position = 0

for position, change in events:
    if current_value < s:
        total += position - prev_position
    current_value += change
    prev_position = position


if current_value < s:
    total += l - prev_position

print(total)
