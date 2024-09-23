#include<iostream>
using namespace std;

void SqaurePattern(int n){
    // square pattern
    for (int i = 0; i < n; i++)
    {
        
        for (int j = 0; j < n; j++)
        {
            cout << "*"; 
        }
        cout << endl;
    }
}

void TrianglePattern(int n){
    // traingle pattern
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void NumericTriangle(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void NumericTriangle2(int n){
    for (int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}

void InvertedStarPattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    SqaurePattern(n);
    
    TrianglePattern(n);

    NumericTriangle(n);

    NumericTriangle2(n);

    InvertedStarPattern(n);         
}
