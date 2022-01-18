#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


void shuffle(int *,int *,int *,int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *a,int *b,int *c,int *d){
    int Shuf[4];
    for(int i=0;i<4;i++){
    	Shuf[i]= rand()%4+1;
    	if(i!=0&&Shuf[0]==Shuf[i])	i--;
    	if(i!=1&&Shuf[1]==Shuf[i])	i--;
    	if(i!=2&&Shuf[2]==Shuf[i])	i--;
	}
	
	for(int i=0;i<4;i++){
		if(Shuf[i]==1)		Shuf[i]=50;
		else if(Shuf[i]==2)	Shuf[i]=100;
		else if(Shuf[i]==3)	Shuf[i]=500;
		else if(Shuf[i]==4)	Shuf[i]=1000;
	}
	
	while(true){
		if(Shuf[0]==*a&&Shuf[1]==*b&&Shuf[2]==*c&&Shuf[3]==*d)	shuffle(&Shuf[0],&Shuf[1],&Shuf[3],&Shuf[4]);
		else break;
	}
	
	while(true){
		if(Shuf[0]!=Shuf[1]&&Shuf[0]!=Shuf[2]&&Shuf[0]!=Shuf[3]&&Shuf[1]!=Shuf[2]&&Shuf[1]!=Shuf[3]&&Shuf[2]!=Shuf[3]){
       		*a=Shuf[0];
	    	*b=Shuf[1];
		    *c=Shuf[2];
	    	*d=Shuf[3];
	    	break;
		}
		else    shuffle(&Shuf[0],&Shuf[1],&Shuf[3],&Shuf[4]);
	}
}
