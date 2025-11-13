#include <iostream>
using namespace std;

void min_max(int *arr, int size, int *min, int *max){
    *min=*max=*arr;
    for(int *p = arr;p<arr+size;p++){

        if(*min>*p){
            *min = *p;
        }
        if(*max<*p){
            *max = *p;
        }

    }

}

int main(){    
    int tab[5]={1,2,3,4,5};
    int tab2[6]={9,8,7,6,5,4};
    int min = 0;
    int max = 0;
    min_max(tab,5,&min,&max);
    cout<<"min: "<<min<< " " <<"max: "<<max<<endl;
    min_max(tab2,6,&min,&max);
    cout<<"min: "<<min << " " <<"max: "<<max<<endl;
}