#include<iostream>
using namespace std;
class Vector{
    public:
    int *arr;
    int size;
    int capacity;
    Vector(){
        arr = new int (1);
        size = 0;
        capacity = 0;
    }
    void Apush(int ele){
        if (size ==  capacity){
            capacity *= 2;
            int *arr1 = new int (capacity);
            for (int i=0;i<size;i++){
                arr[i] = arr1[i];
            }
            //arr = arr1;
        }
          arr[size++] = ele;

    }
    void print(){
        for (int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
    }
    void remove(){
        size--;
    }
    void index(int idx){
        cout<<arr[idx]<<endl;
    }
    };
int main ()
{
    Vector v1;
    v1.Apush(10);
    v1.Apush(15);
    v1.Apush(10);
    v1.Apush(10);
    v1.Apush(10);

    // v1.print();
    v1.remove();
    v1.index(1);
    v1.print();


    return 0;
}