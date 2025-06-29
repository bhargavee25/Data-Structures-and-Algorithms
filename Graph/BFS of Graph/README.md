## Problem Link:
https://www.geeksforgeeks.org/problems/bfs-traversal-of-graph/1

## Problem Statement:
Given a connected undirected graph containing V vertices, represented by a 2-d adjacency list adj[][], where each adj[i] represents the list of vertices connected to vertex i. Perform a Breadth First Search (BFS) traversal starting from vertex 0, visiting vertices from left to right according to the given adjacency list, and return a list containing the BFS traversal of the graph.

## Approach:
Initialization: Enqueue the given source vertex into a queue and mark it as visited.


Exploration: While the queue is not empty:


Dequeue a node from the queue and visit it (e.g., print its value).


For each unvisited neighbor of the dequeued node:


Enqueue the neighbor into the queue.


Mark the neighbor as visited.


Termination: Repeat step 2 until the queue is empty

## Time Complexity:
O(V + E)

## Space Complexity:
O(v)
