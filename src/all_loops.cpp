//
// Created by Himanshu Ghadigaonkar on 12/09/20.
//

#include "../include/all_loops.h"
#include <iostream>

using namespace std;

int for_loop(float a, int num){
    int no_of_times = num;
    int sep = 1;
    for(int i = 1; i <= no_of_times; i++){
        cout << "Printing " << a << " for " << i << " times." << endl;

    }
    cout << "Loop is over" << endl;

    return 0;

}

int main(){
    for_loop(12.5, 10);

}