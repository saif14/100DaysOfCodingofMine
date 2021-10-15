class graph:
    def __init__(self, v):
        self.m_v = v
        self.m_adj = [[] for i in range(v)]
    def addEdge(self, u, v):
        self.m_adj[u].append(v)
        #self.m_adj[v].append(u)  -----> for undiriected graph
    def BFS(self, s):
        q = []
        visited = [False]*self.m_v
        q.append(s)
        visited[s] = True 
        while len(q)>0:
            v = q.pop(0)
            print(v)
            for u in self.m_adj[v]:
                if not visited[u]:
                    q.append(u)
                    visited[u] = True

g = graph(5)
g.addEdge(0, 1)
g.addEdge(0, 3)
g.addEdge(1, 2)
g.addEdge(3, 2)
g.addEdge(3, 4)

g.BFS(0)