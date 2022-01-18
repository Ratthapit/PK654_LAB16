#include<iostream>
using namespace std;

int main(){
	int a=5;
    char b=65;
    char &c=b;
    int *x=&a;
    void *y=&b;
    void *z=&x;
    cout<<a<<" "<<b<<" "<<c<<" "<<x<<" "<<y<<" "<<z<<" \n";
        
	cout<<&a<<" "<<(void *) &b<<" "<<(void *) &c<<" "<<&x<<" "<<&y<<" "<<&z<<" \n";
	
	*(&c)=70;
	cout<<a<<" "<<b<<" "<<c<<" "<<x<<" "<<y<<" "<<z<<" \n";
	
	*(char*)y =87;
	cout<<a<<" "<<b<<" "<<c<<" "<<x<<" "<<y<<" "<<z<<" \n";
	
	*x=6;
	cout<<a<<" "<<b<<" "<<c<<" "<<x<<" "<<y<<" "<<z<<" \n";
	
	**(int **)z=7;
	cout<<a<<" "<<b<<" "<<c<<" "<<x<<" "<<y<<" "<<z<<" \n";
	
	return 0;
}
