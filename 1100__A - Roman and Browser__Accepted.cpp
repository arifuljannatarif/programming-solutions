n,k = map(int, input().split())
l = [*map(int, input().split())]
print(max([abs(sum(l) - sum(l[u::k])) for u in range(k)]))