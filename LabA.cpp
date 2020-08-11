#include <bits/stdc++.h>
using namespace std;
#define CONST_SIZE 5
int tsp(int graph[][CONST_SIZE], int p) {
   vector<int> vertex;
   for (int i = 0; i < CONST_SIZE; i++)
      if (i != p)
         vertex.push_back(i); int buf = INT_MAX;
   do {
      int path = 0; int k = p;
      for (int i = 0; i < vertex.size(); i++) {
         path += graph[k][vertex[i]];
         k = vertex[i];
      }
      path += graph[k][p]; buf = min(buf, path);
   }
   while (next_permutation(vertex.begin(), vertex.end()));
   return buf;
}
int main() {
   int graph[][CONST_SIZE] = { { 0, 3, 13, 9, 7},
                      { 3, 0, 6, 12,10 },
                      { 13, 6, 0, 9,6 },
                      { 9, 12, 9, 0, 8 },
                      { 7, 10, 6, 8, 0 }
   };
   int p = 0;
   cout << tsp(graph, p) << endl;
   return 0;
}