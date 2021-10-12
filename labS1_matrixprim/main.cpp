#include <iostream>
#include <fstream>
using namespace std;

int main()
{
   ifstream input("input.txt")
   int v[100][100], i, j, n, S=0;
   input >> n;
   for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        input >> v[i][j];
        bool prim = true;
        for (int oszto=2; oszto < v[i][j]/2+1; oszto++){
            if( v[i][j] % oszto == 0){
                prim = false;
            }
        }
        if (prim){
            S=S+v[i][j];
        }
     }
   }

    cout << S << endl;
    return 0;
}
