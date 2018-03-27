#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>

using namespace std;

#define log(x) cout << x << endl; 


void check_mono (string i){

	int start_number;
	bool flag = true;
	char c = i.at(0);
	char t;
	start_number = atoi (&c);
	int count =1;

	if (start_number > 0){
		//log (start_number)
		//could clean this part up...  
		for (int j=1; j< i.length() ; ){
            
			if (i[j]-'0'==start_number){
				count++;
				j++;
			}
				else if ( (i[j]-'0')+(i[j+1]-'0') == start_number || (i[j]-'0')-(i[j+1]-'0') == start_number){
				count++;
				j+=2;
			}

			else {
				count++;
				flag = false;
				break;
			}

		}

	}

	if (!flag){
		flag = true;
		c = i.at(0);
		t = i[1];
		count=1;
		start_number = (c-'0') + (t-'0');
		//log (start_number)
		//copy paste 
		for (int j =2; j< i.length(); ){
        
			if (i[j]-'0' ==start_number){
				count++;
				j++;
			}
			else if ( (i[j]-'0')+(i[j+1]-'0') == start_number || (i[j]-'0')-(i[j+1]-'0') == start_number){
				count++;
				j+=2;
			}
			else {
				flag = false;
				break;
			}
		}
	}

	if (!flag){
		flag = true;
		count =1;
		start_number = atoi(&c) - atoi (&t);
		//copy paste
		for (int j =2; j< i.length(); ){

			if (i[0]-'0'==start_number){
				count++;
				j++;
			}
				else if ( (i[j]-'0')+(i[j+1]-'0') == start_number || (i[j]-'0')-(i[j+1]-'0') == start_number){	
					count++;
					j+=2;
			}

			else {
				flag = false;
				break;
			}
		}
	}

	if (flag){
		cout << "mono digit"<<endl;
		while (count --){
			cout << start_number;
		}
		cout <<endl;
	}else {
		cout <<"not mono"<<endl;
	}
	
	return;
}

int main () {

	string s ;
	cin>>s;
	check_mono (s);
	
}
/*
#include<iostream>

using namespace std;
void check_mono(string i)
{
	int start_number=0;
	char c,t;
	bool flag=true;
	int j,count=1;
	c=i[0];
	start_number=c-'0';
	if(start_number>0)
	{
		for(j=1;j<i.length();)
		{
			if(i[j]-'0'==start_number)
			{
				count++;
				j++;
			}
			else if(((i[j]-'0')+(i[j+1]-'0')==start_number )|| ((i[j]-'0')-(i[j+1]-'0')==start_number))
			{
				count++;
				j+=2;
			}
			else{
				flag=false;
				count=1;
				break;
			}
		}
	}
	if(!flag)
	{
		flag=true;
		c=i[0];
		t=i[1];
		start_number=c-'0'+t-'0';
		for(j=2;j<i.length();)
		{
			if(i[j]-'0'==start_number)
			{
				count++;
				j++;
			}
			else if((i[j]-'0')+(i[j+1]-'0')==start_number || (i[j]-'0')-(i[j+1]-'0')==start_number)
			{
				count++;
				j+=2;
			}
			else
			{
				flag=false;
				count=1;
				break;
				
			}
		}
	}
	if(!flag)
	{
		flag=true;
		c=i[0];
		t=i[1];
		start_number=(c-'0')- (t-'0');
		for(j=2;j<i.length();)
		{
			if(i[j]==start_number)
			{
				count++;
				j++;
			}
			else if(((i[j]-'0')+(i[j+1]-'0') ==start_number )|| ((i[j]-'0')-(i[j+1]-'0')==start_number))
			{
				count++;
				j+=2;
			}
			else{
				flag=false;
				count=1;
				break;
			}
		}
	}
	if(flag)
	{
		cout<<"Mono Digit ";
		while(count--)
		{
			cout<<start_number;
		}	
	}	
	else
	{
		cout<<"Not A Mono Digit";
	}
}

int main()
{
	string no;
	cin>>no;
	check_mono(no);
	
}
*/
