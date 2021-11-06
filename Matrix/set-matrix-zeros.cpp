#include <iostream>
#include <vector>
using namespace std;

int main() {
    // The matrix has been hard coded here 
    //if you want to take input from user you can do it
    vector<vector<int>> setZeroes = {{0,1,1},{1,0,1},{1,1,1}};
    int row = setZeroes.size();
    int col = setZeroes[0].size();
    vector<int> rowPoints(row), colPoints(col);
    //Traversing through the matrix and as soon as we get 0, store the coordinates in row and col array
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(setZeroes[i][j] == 0){
                rowPoints[i] = -1;
                colPoints[j] = -1;
            }
        }
    }
    //again traversing the matrix and using that coordinates which were stored in row and col array
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(rowPoints[i] == -1 || colPoints[j] == -1){
                setZeroes[i][j] = 0;
            }
            
        }
    }
    //printing the matrix
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout<<setZeroes[i][j];
            
        }
        cout<<endl;
    }
    
    
    return 0;
}