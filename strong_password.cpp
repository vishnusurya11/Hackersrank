//link
//https://www.hackerrank.com/contests/hourrank-24/challenges/strong-password/problem



#include <bits/stdc++.h>

using namespace std;

int minimumNumber(int n, string password) {
    // Return the minimum number of characters to make the password strong
    int found(0),count(0),i(0);
    string numbers,lower_case,upper_case,special_characters;
    numbers = "0123456789";
    lower_case = "abcdefghijklmnopqrstuvwxyz";
    upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    special_characters = "!@#$%^&*()-+";
    //checking for numbers
    for(i =0 ; i< n ; i++){
        found = numbers.find(password[i]);
        if( found > -1){
        count = count+1;
        break;
        }
    }
    //checking for lower_case
    for(i =0 ; i< n ; i++){
        found = lower_case.find(password[i]);
        if( found > -1){
        count = count+1;
        break;
        }
    }
    //checking for upper_case
    for(i =0 ; i< n ; i++){
        found = upper_case.find(password[i]);
        if( found > -1){
        count = count+1;
        break;
        }
    }
    //checking for special_characters
    for(i =0 ; i< n ; i++){
        found = special_characters.find(password[i]);
        if( found > -1){
        count = count+1;
        break;
        }
    }
    if (count == 4){
        if(password.size() > 5){
            return 0;
        }
        else{
            return 6-password.size();
        }
    }
    if (count < 4){
        if(password.size() > 5){
            return 4-count;
        }
        else{
            if(6-password.size() > 4-count){
            return 6-password.size();
            }
            else{
                return 4-count;
            }
        }
        
    }
        
    //cout<<count<<endl;
    return 0;
}

int main() {
    int n;
    cin >> n;
    string password;
    cin >> password;
    int answer = minimumNumber(n, password);
    cout << answer << endl;
    return 0;
}
