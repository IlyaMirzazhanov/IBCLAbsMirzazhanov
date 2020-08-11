#include <bits/stdc++.h> 
using namespace std; 
  
int change[] = { 1, 2, 5 }; 
int n = sizeof(change) / sizeof(change[0]); 
  
int minChange(int K) {
    int res = 0; 
    sort(change, change + n); 
  
    vector<int> buf; 
  
    for (int i = n - 1; i >= 0; i--) { 
  
        while (K >= change[i]) { 
            K -= change[i]; 
            buf.push_back(change[i]); 
        } 
    } 
  
    for (int i = 0; i < buf.size(); i++) {
        res++;
        cout << buf[i] << " "; 
    }
    cout << endl;
    cout << "Totlal: " << res << endl; 
} 

int main() { 
    int n; cin >> n;
    minChange(n); 
    return 0; 
} 

