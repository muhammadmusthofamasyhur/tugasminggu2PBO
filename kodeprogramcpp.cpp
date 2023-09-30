#include <iostream>
using namespace std;

int main(){
	int x; //tipedata 
	int y; //variabel
	int a[10]; //array 1d
	int b[2][2] = {2,4,7,1}; //array n-d
	char repeat;
	
	do{//dowhile loop
	cout<<"input the x values : "; //output
	cin>>x; //input
	
	cout<<"input the y values : ";
	cin>>y;
	
	if(x>y){//if else
		cout<<"x is greater than y";
	}
	else{
		cout<<"y is greater than x";
	}
	cout<<endl;
	cout<<endl;
	
	for(int i=0; i<5; i++){//for loop
		cout<<"input the a ["<<i+1<<"] values : ";
		cin>>a[i];
	}
	cout<<endl;
	
	cout<<"Array a : \n";
	int i=0;
	while(i < 5){//while loop
		cout<<a[i]<<" ";
		i++;
	}
	cout<<endl;
	cout<<endl;
	
	cout<<"Array b : \n";
	for(int i = 0; i < 2 ; i++){
      for(int j = 0; j < 2; j++){
            cout<<b[i][j]<<" ";
	  }
      cout << endl;
  	}
  	cout<<endl;
  	
  	cout<<"repeat?(y/n) : ";
    cin>>repeat;
    cout<<endl;
    
   }while(repeat=='y');
   
   /*Muhammad Musthofa Masyhur
     NIM 2200018476
     Kelas J*/
    
  	
}



