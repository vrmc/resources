N = 200
path = [-1] * (N + 1)
ms = [float('inf')] * (N + 1)

def backtrack(power, depth):
    if power > N or depth > ms[power]:
        return

    ms[power] = depth
    path[depth] = power
    for i in range(depth, -1, -1):
        backtrack(power + path[i], depth + 1)

backtrack(1, 0)
print(sum(ms[i] for i in range(1, N + 1)))

