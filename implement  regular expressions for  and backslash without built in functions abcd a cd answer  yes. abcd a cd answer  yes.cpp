#include<stdio.h>
#include<iostream>
using namespace std;

bool star_regex(char *s , char *p ){
    
    if(*s=='\0'&&*p=='\0')
    return true;
    else if(*p=='\0')
    return false;
    // If current element in pattern is not *
    if((*p!='\\') && (*p!='*')  )
	{
        // If both characters are same in search string and pattern
        if(*s==*p)
        return star_regex(s+1,p+1);
        else
        return false;
    }
    // If current element in pattern is *
    else
        return star_regex(s,p+1)||star_regex(s+1,p+1)||star_regex(s+1,p);	
}

int main()
{
	char str1[10],str2[10];
	gets(str1);
	gets(str2);
	if(star_regex(str1,str2))
    cout <<"YES";
    else 
    cout<<"NO";
    return 0;
}
