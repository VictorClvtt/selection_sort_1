#include <iostream>
#include <string>
#include <algorithm>

int main(){

    int m, i, j, arr[5];

    for(i=0;i<=4;i++){
        std::cout << "Digite o valor " << i+1 << " do seu arranjo:";
        std::cin >> arr[i];
    }

    for(j=0;j<=3;j++){
        m = arr[j];
        for(i=0+j;i<=4;i++){
            if(arr[i]<m){
                m = arr[i];
                std::swap(arr[i],arr[j]);
            }
        }
    }

    for(i=0;i<=4;i++){
        std::cout << "Numero " << i+1 << ":" << arr[i] << std::endl;
    }

    return 0;
}
