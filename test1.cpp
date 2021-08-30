#include <iostream>
using namespace std;
bool primo (int n){
    bool condicion;
    if(n != 1 && n != 0){
        for(int i = 2; i <= n ; i++){
            if(n % i == 0){
                if(n == i){
                    condicion = true;
                }
                else {
                    condicion = false;
                    return condicion;
                }
            }
        }
    }
    else condicion = false;
    return condicion;
}
int main(){
    int n;
    int count = 0;
    cin>>n;
    clock_t startTime = clock();

    for(int i = 1 ; i <=n ; i++){
        if(primo(i)){
            count += 1;
        }
    }
    cout << count << '\n';
    cout << double( clock() - startTime ) / (double)CLOCKS_PER_SEC<< " Segundos." << endl;
    return 0;
}