#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    string input;

    for (int i = 0; i < n; i++){
        cin>>input;
    
        if (input.size()>10)
        {
            cout<<input[0]<<input.size()-2<<input[input.size()-1]<<endl;
        }
        else
        {
            cout<<input<<endl;
        }
    }
    
    return 0;
}
