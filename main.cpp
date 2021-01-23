#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
    string a;
    int n;
    getline (cin, a);
    n=a.length();
    for(int i=1; i<a.length(); i += 2)
        cout << a.at (i);

return 0;
}
