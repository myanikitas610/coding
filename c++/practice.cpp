#include <iostream>
using namespace std;

// 2d array charFreq 
const int rows = 3;
const int cols = 3; 

int charFreq(char charArray[rows][cols], char target){
    int count = 0;
    for (int i = 0; i < rows; i++){
        for (int j =  0; j < cols; j++){
            if (charArray[i][j] == target){
                count++;
            }
        }
    }
    return count;
}

int main(){

    char arr[rows][cols] = {{'a', 'b', 'c'},
                            {'c', 'b', 'a'},
                            {'a', 'a', 'a'}};

    char target;
    cout << "What character are you looking for?" << endl; 
    cin >> target;

    int freq = charFreq(arr, target);

    cout << "There are " << freq << " occurences of " << target << " in the array" << endl;


}