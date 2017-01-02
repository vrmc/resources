max_n = 0
for i in range(100, 1000):
    for j in range(100, 1000):
        n = i * j
        if list(str(n)) == list(reversed(str(n))) and n > max_n:
            max_n = n

print(max_n)
