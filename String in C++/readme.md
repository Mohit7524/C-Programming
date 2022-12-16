# String in CPP:
* A string variable contains a collection of characters surrounded by double quotes.
* Syntax:
          *  string greeting = "Hello";

C++ String Example:
       #include<iostream>
       using namespace std;
       int main()
       {
          string s1="Hello";
          char ch[]={'C','+','+'};
          string s2=string(ch);
          cout<<s1<<endl;
          cout<<s2<<endl;
            
       }
