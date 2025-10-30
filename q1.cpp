
#include <iostream>
using namespace std;

int main() {
    
    int* arr1 = new int[100];
    
    for (int i=0; i<100; i++){
        arr1[i] = (i+1);
    }
    int arr2[200];
    for(int i=0; i<100; i++){
        arr2[i] = arr1[i];
    }
    delete[] arr1;
    arr1 = nullptr;
    bool contin;
    cout<<"Do you wanna enter the 101st sales figure ?\nEnter yes(y) or no(n): ";
    string response;
    cin>>response;
   
    if(response == "y"){
        contin = true;
    }
    else{
        contin = false;
        cout<<"Ok, got it"; 
    }
    int i = 100;
    while(contin){
        cout<<"Enter the figure : ";
        cin>>arr2[i];
        cout<<endl;
        cout<<"Do you wanna continue giving input?\nEnter yes(y) or no(n): ";
        cin>>response;
        if(response == "y"){
            contin = true;
        }
        else{
            contin = false;
            cout<<"Ok, got it";
            
        }
    }
    return 0;
}
