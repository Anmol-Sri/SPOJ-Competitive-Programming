#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
void niewypisz(int nr);
void wypisz(int nr);
class Sweet{
public:
long long capacity; 
int number; 
bool operator<(const Sweet &s) const { 
if (this->capacity<s.capacity)
return true;
else return false;}
}; 
vector<Sweet> s[10005];
void wypisz(int nr){
cout << nr << endl;
for (int i=0; i<s[nr].size();i++)
niewypisz(s[nr][i].number);
}
void niewypisz(int nr){
for (int i=0; i<s[nr].size();i++)
wypisz(s[nr][i].number);
} 
class Sweets{
public:
vector<Sweet> v;
void heapify(int i){
int l=2*i+1;
int p=2*i+2;
int wiekszy;
if (l<v.size()&&v[i]<v[l])
wiekszy=l;
else wiekszy=i;
if (p<v.size()&&v[wiekszy]<v[p])
wiekszy=p;
if (wiekszy!=i){
swap(v[i],v[wiekszy]);
heapify(wiekszy);
}
}
void build(){
for(int i=v.size()/2;i>0;i--)
heapify(i-1);
}
void scal(){ 
int wiekszy=1;
if ((2<v.size())&&(v[1]<v[2]))
wiekszy=2;
s[v[0].number].push_back(v[wiekszy]);
v[0].capacity-=v[wiekszy].capacity;
if (wiekszy<v.size()-1) {
swap(v[wiekszy],v[v.size()-1]);
v.resize(v.size()-1);
heapify(wiekszy);}
else v.resize(v.size()-1);
heapify(0);
}
void scalaj(){
while (v.size()>1) scal();
}
};
int main(){
Sweet* s;
Sweets v;
int M;
long long help;
cin >> M;
for (int i=0; i < M; i++){
cin >> help;
s=new Sweet();
s->number=i+1;
s->capacity=help;
v.v.push_back(*s);}
v.build();
v.scalaj();
wypisz(v.v[0].number);
return 0;
}