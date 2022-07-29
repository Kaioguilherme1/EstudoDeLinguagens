graph = {
    '1':['2','3'],
    '2':['1','3','5'],
    '3':['1','2'],
    '4':['1'],
    '5':['2']
}

def bfs(G, S):
    visited = []
    queue = []

    visited.append(S)
    queue.append(S)

    while queue:
        u = queue.pop(0)
        print(u, end=' ')
        for v in G[u]:
            if v not in visited:
                visited.append(v)
                queue.append(v)
    


bfs(graph, '5')