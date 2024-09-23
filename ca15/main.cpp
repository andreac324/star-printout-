//
//  main.cpp
//  ca15
//
//  Created by Andrea d Cazares on 9/23/24.
//

#include <iostream>
using namespace std;
int main(){
    int rows;
    cout<< "how many rows"<<endl;
    cin >>rows;

    for (int i=0; i<rows;i++){
        cout<< " \n";
        for (int j= 0; j<=i;j++){
        cout<< "*";

        }
        
    }
    
    return 0;

    
}
