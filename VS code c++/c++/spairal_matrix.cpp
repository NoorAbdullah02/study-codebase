#include<iostream>
using namespace std;
int main ()
{
    int r,c;
    cin>>r>>c;
int arr[r][c];
for (int i=0;i<r;i++){
    for (int j=0;j<c;j++){
    cin>>arr[i][j];
}
}
int top_row = 0, right_col = c-1, bottom_row = r-1, left_col = 0;
int num = 0;
while(num<r*c){
    //Top_Row = left to right
    for (int i = left_col;i<=right_col&&num<r*c;i++ ){
        cout<<arr[top_row][i]<<" ";
        num++;
    }
    top_row++;
    //right = top to bottom
    for (int i=top_row ;i <=bottom_row&&num<r*c;i++){
        cout<<arr[i][right_col]<<" ";
        num++;
    }
    right_col--;
    //bottom = left to right
    for (int i=right_col;i>=left_col&&num<r*c;i--){
        cout<<arr[bottom_row][i]<<" ";
        num++;
    }
    bottom_row--;
    
    //left = bottom to top
    for (int i = bottom_row ;i>= top_row&&num<r*c;i--){
        cout<<arr[i][left_col]<<" ";
        num++;
    }
    left_col++;

} 

    return 0;
}