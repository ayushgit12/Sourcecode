#include<iostream>

using namespace std;
int arr[3][3];
void p1(){
    int g;
    cin>>g;
    arr[(g%10)-1][(g/10)%10-1] = '*';
}

void p2(){
    int g;
    cin>>g;
    arr[(g%10)-1][(g/10)%10-1] = 'O';
}

string result(char ch){
    int c=0;
    int h=0;
    int k=0;
    int h1=0;
    for(int i=0; i<3; i++){
        if(arr[i][2-i] == ch)
            k++;
        if(arr[i][i] == ch)
            c++;
            for(int j=0; j<3; j++){
                if(arr[i][j] == ch)
                    h++;
                if(arr[j][i] == ch)
                    h1++;
            }
        }
    if(k==3 || c==3 || h==3 || h1==3)
        return "won";
    return "";
    
}
string reslt(){
    if(result('*') == "won")
        return "p1 won";
    if(result('O') == "won")
        return "p2 won";
    return "";

}
int main(){
    
    string res;
    while(res == ""){
        p1();
        p2();
        res = reslt();
    }
    if(res == "")
        cout<<"DRAW";
    else
        cout<<res;
}