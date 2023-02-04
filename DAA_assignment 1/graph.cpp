#include<bits/stdc++.h>
#define ll long long
using namespace std;
class LinkedListNode {
 public:
  int val;
  LinkedListNode* next;
  LinkedListNode(int value) : val(value), next(nullptr) {}
};

class Graph {
 public:
  int V;
  vector<LinkedListNode*> adjList;
  Graph(int v) : V(v) {
    adjList.resize(V);
    for (int i = 0; i < V; i++) {
      adjList[i] = nullptr;
    }
  }
  void addEdge(int u, int v) {
    LinkedListNode* node = new LinkedListNode(v);
    node->next = adjList[u];
    adjList[u] = node;
  }
  void printGraph() {
    for (int i = 0; i < V; i++) {
      LinkedListNode* pCrawl = adjList[i];
      cout << "Adjacency list of vertex " << i << ": head ";
      while (pCrawl) {
        cout << "-> " << pCrawl->val;
        pCrawl = pCrawl->next;
      }
      cout << std::endl;
    }
  }
};

int main() {
  Graph g(5);
  g.addEdge(0, 1);
  g.addEdge(0, 4);
  g.addEdge(1, 2);
  g.addEdge(1, 3);
  g.addEdge(1, 4);
  g.addEdge(2, 3);
  g.addEdge(3, 4);
  g.addEdge(4, 1);
  g.addEdge(4, 2);
  g.printGraph();
  return 0;
}
