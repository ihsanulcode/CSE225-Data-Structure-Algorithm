#include<iostream>
#include<string>
using namespace std;

string rev; //global variable for reversing the string
bool reverseString(string original,int length)
{
    if(length>=0){
        rev += original[length]; //reversing the original string and store it into rev string
        reverseString(original,length-1); //recursively calling the function
    }

    if(rev == original) //checking if the reversed string is equals to the original one
        return true; //if equals then return true
    else //else return false
        return false;
}

bool PalindromeChecker(string s)
{
    int length = s.length(); //storing the length of the original string

    if(reverseString(s,length-1)) //calling the reverse function and pass the string and it length-1 to it
        return true; //if the reverse function return true then also return true  from here
    else //else false
        return false;
}


int main()
{
    string s;
    cout << "Enter String: ";
    cin >> s; //getting a string from user input

    if(PalindromeChecker(s)) //calling the function and pass the string to it
        cout << "Palindrome." << endl; //if the function return true then it will print positive ans
    else //else negative ans will be printed
        cout << "Not Palindrome!" << endl;

}

