v=5
adj = [[] for i in range(v)]

adj[0].append(1)
adj[0].append(3)
adj[1].append(2)
adj[3].append(2)
adj[3].append(4)

for p in adj[3]:
    print(p)
