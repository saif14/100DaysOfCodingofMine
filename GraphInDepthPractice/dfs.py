class graph:
    def __init__(self, v):
        self.numVertex = v
        self.adjList = [[]for i in range(v)]

    def addEdge(self, u, v):
        self.adjList[u].append(v)
    def DFS_rec(self, s, visited):
        visited[s] = True
        print(s)
        for i in self.adjList[s]:
            if not visited[i]:
                self.DFS_rec(i, visited)
    def DFS_iter(self, s, visited):
        stk = []
        stk.append(s)
        visited[s] = True
        while len(stk)>0:
            u = stk[-1]
            stk.pop()
            print(u)
            for i in self.adjList[u]:
                if not visited[i]:
                    stk.append(i)
                    visited[i] = True

    def DFS(self, s):
        print("Recursive DFS: ")
        visited = [False]*self.numVertex
        for i in range(self.numVertex):
            if not visited[i]:
                self.DFS_rec(i, visited)
        print("Iterative DFS")
        visited2 = [False]*self.numVertex
        for j in range(self.numVertex):
            if not visited2[j]:
                self.DFS_iter(j, visited2)


g = graph(5)
g.addEdge(0, 1)
g.addEdge(0, 3)
g.addEdge(1, 2)
g.addEdge(3, 2)
g.addEdge(3, 4)

g.DFS(0)