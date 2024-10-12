#include<iostream>
using namespace std;

int main(){

    int nm[12] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int l = sizeof(nm) / sizeof(nm[0]);
    // cout<<l<<"\n";
    int s=0;

    for (int i = 0; i < l; i++)
    {
        s+=nm[i];
        for (int j = 0; j < l; j++)
        {
            s+=nm[j];
            for (int k = 0; k < l; k++)
            {
                
                if(i!=j && j!=k && k!=i){
                    s+=nm[k];
                    if(s==8){
                        cout<<nm[i]<<","<<nm[j]<<","<<nm[k]<<endl;
                    }
                    s-=nm[k];
                }

            }
            s-=nm[j];
            
        }
        s-=nm[i];
        
    }
    


}