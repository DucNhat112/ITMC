#include <iostream>
#include <vector>
#include <string>
#include <math.h>
using namespace std;
int main () {
    int a,b,c;
    cin >>a>>b>>c;
    int cam = min (a,b);
    cout<<min(cam,c)<< endl;
    return 0;
}