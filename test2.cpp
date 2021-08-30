#include <iostream>

using namespace std;
int main()
{
    int n, count=0;
    cin>>n;
    clock_t startTime = clock();

    for (int a=2 ; a < n ; a++)
    {
        bool prime = true;
        for (int c=2 ; c*c <= a ; c++)
        {
            if(a % c == 0)
            {
                prime = false;
                break;
            }
         }
        if(prime) count++;
    }
    cout << count << '\n';
    cout << double( clock() - startTime ) / (double)CLOCKS_PER_SEC<< " Segundos." << endl;
    return 0;
}