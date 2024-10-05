#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
	unordered_set<int> s;
	s.insert(0);
	s.insert(1);
	s.insert(2);
	s.insert(21);
	s.insert(3);
	s.insert(4);
	s.insert(9);

		
	int target=9;
	
	if(s.find(target)!=s.end()){
		cout<<"Exist"<<endl;
	}
	else 
	{
		cout<<"Not exist"<<endl;
	}
	return 0;
}

