#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int check_kth_bit(int x,int k){
    return (x>>k)&1;
}
void print_on_bits(int x){
    for (int k=0;k<32;k++){
        if (check_kth_bit(x,k))cout<<k<<" ";
    }
}

void print_off_bits(int x){
    for (int k=0;k<32;k++){
        if (!check_kth_bit(x,k))cout<<k<<" ";
    }
}
int main(){
     print_on_bits(11);
     cout<<endl;
    print_off_bits(11 );
    return 0;
}