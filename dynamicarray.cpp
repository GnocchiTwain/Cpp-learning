//
//  main.cpp
//  dynamic array
//
//  Created by Gnocchi on 27/8/2020.
//  Copyright © 2020 gnocchi. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    //construct and resize the one dimentiaonal dynamic array
    int size = 5;
    int *oned_array = new int[size];
    // "new" is the unary operator that allocates memory in bytes                           during the run time from the free store;
    for (int i = 0; i < size; i++)
    {
        oned_array[i] = i;
    }
    for (int i = 0; i < size; i++){
        cout << oned_array[i] << " ";
    }
    int * resizeArray = new int[size + 2];
    for(int i = 0; i < size; i++){
        resizeArray[i] = oned_array[i];
    }
    delete[] oned_array;
    oned_array = resizeArray;
    oned_array[size] = 6;
    oned_array[size+1] = 7;
    for (int i = 0; i < size+2; i++){
        cout << oned_array[i] << " ";
    }
    //construct two-dymentional dynamic array
    const int row = 2, col=2;
    int ** twod_array = new int *[row];
    for(int i = 0; i < row; i++){
        twod_array[i] = new int [col];
    }
    int k = 0;
    for(int i =0;i<row;i++){
        for(int j = 0; j<col; j++){
            twod_array[i][j] = k++;
        }
    }
    //free memory
    for(int j = 0; j< row; j++){
        delete[] twod_array[j];
    }
    delete[] twod_array;
}
