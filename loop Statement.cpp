// For loop.
//Sum upto n. of a given number n.
#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    
    int sum=0;
    for(int counter=1;counter<=n;counter++){
        sum=sum+counter;
    }
    cout<<sum<<endl;
   
    return 0;

   
    
}



// do While loop.
//take input upto -ve number from user.
#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    
    do{
        cout<<n<<endl;
        cin>>n;
    }while(n>0);
    
    return 0;
}



// While loop.
//take input upto -ve number from user.
#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    
    while(n>0){
        cout<<n<<endl;
        cin>>n;
    }
    

    return 0;

   
    
}


// While loop.
//take input upto -ve number from user.
#include<iostream>
using namespace std;

int main(){
    int pocketMoney=3000;
    for(int date=1;date<=30;date++){
        
        if(date%2==0){
            continue;  //Continue statement is used to skip to the next iternatioon of loop.
        }
        if(pocketMoney==0){
            break; // break statement is used to terminate a loop.
        }
        cout<<"Go Out today!"<<endl;
        pocketMoney=pocketMoney-300;
    }
    

    return 0;

   
    
}
