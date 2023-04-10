#include <iostream>
using namespace std;

#define nV 4
#define INF 999

void printMatrix(int matrix[][nV]) {
  for (int i = 0; i < nV; i++) {
      cout<<"Minimum Cost With Respect to Node:"<<i<<endl;
    for (int j = 0; j < nV; j++) {
      if (matrix[i][j] == INF)
        cout<<"INF ";
      else
        cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
  }
}

void floydWarshall(int graph[][nV]) {
  int matrix[nV][nV], i, j, k;

  for (i = 0; i < nV; i++){
    for (j = 0; j < nV; j++){
        matrix[i][j] = graph[i][j];
    }
  }
      
  for (k = 0; k < nV; k++) {
    for (i = 0; i < nV; i++) {
      for (j = 0; j < nV; j++) {
        if (matrix[i][j] > matrix[i][k] + matrix[k][j])
          matrix[i][j] = matrix[i][k] + matrix[k][j];
      }
    }
  }
  printMatrix(matrix);
}


int main() {
  int graph[nV][nV] = {{0, 3, INF, 5},
             {2, 0, INF, 4},
             {INF, 1, 0, INF},
             {INF, INF, 2, 0}};
  floydWarshall(graph);
}

/*
Output:
Minimum Cost With Respect to Node:0
0 3 7 5 
Minimum Cost With Respect to Node:1
2 0 6 4 
Minimum Cost With Respect to Node:2
3 1 0 5 
Minimum Cost With Respect to Node:3
5 3 2 0 
*/