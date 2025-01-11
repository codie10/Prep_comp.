
/*
Ratul made a linked list, a list made of n nodes, where every node has two variables, the velocity and the mass of a particle.
Since all the particles have the velocity in the same direction, find the total momentum of the entity made by the particles from the linked list.
  */
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int s = 0; 
    cin >> n;

    for (int i = 0; i < n; i++) {
        int m, v;
        cin >> m >> v; 
        s += (m * v);  
    }

    cout << s << endl; 
    return 0;
}
