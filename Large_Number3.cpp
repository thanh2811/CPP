#include<bits/stdc++.h> 
 
using namespace std;
 
typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)
 
// bo bai nay di


string operator + (string a,string b){
    string c="";
    int n=a.length(),m=b.length(),nho=0,len=0;
    if(n<m) { for(int i=1;i<=abs(n-m);i++) a = '0' + a; len = m; }

    else { for(int i=1;i<=abs(n-m);i++) b = '0' + b; len = n; 
        int x=a[i]-'0'+b[i]-'0'+nho;
        if(x>9) nho=1,x-=10;
        else nho = 0;
        c+=(x+'0');
    }
    if(nho==1) c+='1';
    reverse(c.begin(),c.end());
    return c;   
}
string operator * (string a,char x){
	string c="";
	int n=a.length(),nho=0;
	for(int i=n-1;i>=0;i--){
		int t = (a[i]-'0')*(x-'0') + nho;
		int k=t;
		if(t>9) t=t%10,nho=(k-t)/10;
		else nho=0;
		c+=(t+'0');
	}	
	if(nho) c+=(nho+'0');
	reverse(c.begin(),c.end());
	return c;
}
string operator * (string a,string b){
	string c="";
	int n=a.length(),m=b.length(),k=0,x=0;
	while(b[m-1]=='0') k++,m--;
	for(int i=m-1;i>=0;i--){
		string d="";
		d = a*b[i];
		for(int j=1;j<=x;j++) d = d + '0';
		c = c + d;
		x++;
	}
	For(i,1,k) c+='0';
	return c;
}
 
void Res(){
	string a,b;
	cin>>a>>b;
	cout<<a*b<<endl;
}
int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int test = 1;
	cin>>test;
	while(test--){
		Res();
	}
} 