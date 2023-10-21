#include<iostream>
#include<vector>
using namespace std;
void reverse (vector<int>c){
int s=0;
int e=c.size()-1;
cout<<e<<endl;
while(s<e){
swap(c[s],c[e]);

s++;
e--;
}
c.pop_back();
for(int i:c){

cout<<i;
}

}


int main(){
vector<int>a={1,2,3,4,1};
vector<int>b={1,1};
vector<int>c;
int sum=0;
int  cary=0;
int j=2;
int i=5;
while(i>=0 &&j>=0){
sum=a[i]+b[j]+cary;

sum=sum%10;
cary=sum/10;
c.push_back(sum);
i--;
j--;
}
while(i>=0){
sum=a[i]+cary;
sum=sum%10;
cary=sum/10;
c.push_back(sum);
i--;
}
while(j>=0){
sum=b[j]+cary;
sum=sum%10;
cary=sum/10;
c.push_back(sum);
j--;
}
while(cary!=0)
{
int sum=cary;
c.push_back(sum);

}

reverse(c);



}
