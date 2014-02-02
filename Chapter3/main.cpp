//
//  main.cpp
//  Chapter3
//
//  Created by Dr. Jeff S Scroggs on 1/30/14.
//  Copyright (c) 2014 Dr. Jeff S Scroggs. All rights reserved.
//

#include <iostream>

// delcaration -- using namespace "std"
using std::cin; using std::cout; using std::endl;

// Chapter 3 covers the string type
#include <string>
using std::string;

// Chapter 3 covers the vector type
#include <vector>
using std::vector;

// external functions
extern int factorial();

int main(int argc, const char * argv[])
{
    int factorial(int);
    
    cout << "Start, Dude!\n";
    
    vector<string> v2{4, "bubba"};
    
    for (auto it = v2.begin() ; it != v2.end(); it++)
        cout << *it << endl;
    int aa=6, myVal;
    
    myVal = factorial(aa);
    
    cout << myVal << endl;
    
    /*
         
    string s("bb aa cc you done it now");
    for (auto it = s.begin() ; it != s.end(); it++)
        cout << *it << endl;
    

     
     vector<int> bb(10, 1);
     vector<int> aa;
     
     cout << "size of aa " << aa.size() << endl;
     aa = bb;
     
     
     cout << "size of aa " << aa.size() << endl;

     
    vector<int> v2;
    
    for (int i = 0; i != 5; ++i)
        v2.push_back(i);
    
    for (auto &i : v2){
        i *= i;
    }
    
    for (int i = 0; i != 5; ++i){
        cout << "i is " << i << " and elt is " << v2[i] << endl;
    }
   

     */
    
    // string s1, s2, s3, s4("Bubba Wuz Here");
    
    // page 94, iteration
    /*
    for (int index = 0; index != s4.size(); ++index)
    {
        cout << s4[index] << endl;
        s4[index] = toupper(s4[index]);
    }
    cout << s4 << endl;
    */
    
    /*
     string str("Bubba Wuz Here");
    for (auto c : str)
        cout << c << endl;
    */
    
    /* Exercise 3.5
    cout << "input two strings to concatentate" << endl;
    getline(cin, s1);
    getline(cin, s2);
    s3 = s1 + " " + s2;
    cout << s3 << endl;
    */
    
    // Exercise 3.4 (two parts)
    /*
    cout << "input two strings to test if they are equal" << endl;
    getline(cin, s1);
    getline(cin, s2);
    if (s1 == s2)
        cout << "they are equal" << endl;
    else
        if (s1 > s2)
            cout << "the first string is bigger" << endl;
    else
        cout << "the second string is bigger" << endl;
    
    cout << "input two strings to test their lengths" << endl;
    getline(cin, s1);
    getline(cin, s2);
    if (s1.size() > s2.size())
        cout << "The first string is longer" << endl;
        else
              cout << "The second string is longer" << endl;
           */
    
    /*
    string s1, s2, s3, s4;
    s1 = "bubba";
    s2 = s1+"hello";
    s3 = "a" + s2 + "b";
    cout << s3 << endl;
    */
    
    /*
    string line;
    while (getline(cin, line)) {
        if (line.size()< -5)
            cout << line << endl;
    }
     */
    
    /*
    string line;
    while (getline(cin, line)) {
        if (!line.empty())
            cout << line << endl;
    } */
    
    /* page 86
    string word;
    while (cin >> word)
        cout << word << endl;
     */

     
    /* Chapter 3 example page 85
    cout << "yo, dude" << endl;
    string s1, s2;
    cin >> s1 >> s2;
    cout << s1 << endl;
    cout << s2 << endl;
    */
    
    // insert code here...
    std::cout << "Done, Dude!\n";
    return 0;
}

