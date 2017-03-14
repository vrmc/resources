#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int row;
    int col;
    cin >> row;
    cin >> col;
    int wall[row][col];
    for (int i=0;i<row;i++){
        for (int j=0;j<col;j++){
            cin >> wall[i][j];
        }
    }
    for (int i=row-2;i>=0;i--){
        for (int c=0;c<col;c++){
            if (c==0){
                wall[i][c]+=max(wall[i+1][c],wall[i+1][c+1]);
            }
            else if (c==(col-1)){
                wall[i][c]+=max(wall[i+1][c],wall[i+1][c-1]);
            }
            else {
                wall[i][c]+=max(wall[i+1][c-1],max(wall[i+1][c],wall[i+1][c+1]));
            }
        }
    }
    int temp=wall[0][0];
    for (int j=1;j<col;j++){
        if (wall[0][j]>temp){
            temp = wall[0][j];
        }
    }
    cout << temp;
    return 0;
}
