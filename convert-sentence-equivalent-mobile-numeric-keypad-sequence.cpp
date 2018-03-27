/*
https://www.geeksforgeeks.org/convert-sentence-equivalent-mobile-numeric-keypad-sequence/

*/
// C++ implementation to convert a
// sentence into its equivalent
// mobile numeric keypad sequence
#include <bits/stdc++.h>
using namespace std;
 
// Function which computes the sequence
string printSequence(string arr[],
                       string input)
{
    string output = "";
 
    // length of input string
    int n = input.length();
    for (int i=0; i<n; i++)
    {
        // Checking for space
        if (input[i] == ' ')
            output = output + "0";
 
        else
        {
            // Calculating index for each 
            // character
            int position = input[i]-'A';
            output = output + arr[position];
        }
    }
 
    // Output sequence
    return output;
}
 
// Driver function
int main()
{
    // storing the sequence in array
    string str[] = {"2","22","222",
                    "3","33","333",
                    "4","44","444",
                    "5","55","555",
                    "6","66","666",
                    "7","77","777","7777",
                    "8","88","888",
                    "9","99","999","9999"
                   };
 
    string input = "GEEKSFORGEEKS";
    cout << printSequence(str, input);
    return 0;
}

/*#include<iostream>
using namespace std;
string printSequence(string arr[],string input)
{
	int n;
	string output;
	for(n=0;input[n]!='\0';n++);
	for(int i=0;i<n;i++)
	{
		if(input[i]==' ')
		output=output+'0';
		else
		{
			int position =input[i]-'A';
			output=output+arr[position];
		}
	}
	return output;
}
int main()
{
	string str[]={"2","22","222",
				  "3","33","333",
				  "4","44","444",
				  "5","55","555",
				  "6","66","666",
				  "7","77","777","7777",
				  "8","88","888",
				  "9","99","999","9999"};
	string input="GEEKSFORGEEKS";
	cout<<printSequence(str,input);
}*/