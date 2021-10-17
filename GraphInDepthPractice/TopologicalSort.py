class graph:
    def __init__(self, v):
        self.numVertex = v
        self.adjList = [[]for i in range(v)]

    def addEdge(self, u, v):
        self.adjList[u].append(v)


    def TPSortRecur(self, s, visited):
        visited[s] = True
        for u in self.adjList[s]:
            if not visited[u]:
                self.TPSortRecur(u, visited)
        self.stk.append(s)
        

    def topologicalSortAlgo(self):
        visited = [False]*self.numVertex
        self.stk = []
        for i in range(self.numVertex):
            if not visited[i]:
                self.TPSortRecur(i, visited)
        while len(self.stk)>0:
            u = self.stk[-1]
            print(u," ")
            self.stk.pop()




g = graph(5)
g.addEdge(0, 1)
g.addEdge(0, 3)
g.addEdge(0, 4)
g.addEdge(1, 2)
g.addEdge(3, 4)

g.topologicalSortAlgo()