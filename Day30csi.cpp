#include <bits/stdc++.h>
using namespace std;
struct enroller_detail{
    string name;
    string feedback;
    void getdata(void){
        cout<<"Enter Your Name: "<<ends;
        getline(cin,name);
        cout<<"Please give us a feedback how was your experience in 30 days of code challenge: ";
        getline(cin,feedback);
    } 
    void display(void){
        cout<<endl;
        cout<<"Dear"<<" "<<name<<","<<endl<<"Thanks to you to share your feedback we are greatfull to hear about your positive experience and the  precious lessons that you have learned during the 30 days of code challenge. your dedications and enthusiasm have been inspired. At last over best Wishes you continued growth and success ahead!";
    }
};
int main(){
    struct enroller_detail en_dt;
    en_dt.getdata();
    en_dt.display();
    return 0;
} 
/*
input: 
name: vansh
feedback: I have learned a lot of things during this 30 days code challenge, and it was vey wounderfull experience after this challenge i'm filling more confident in my coding skills.

output
Dear vansh,
Thanks to you to share your feedback we are greatfull to hear about your positive experience and the  precious lessons that you have learned during the 30 days of code challenge. your dedications and enthusiasm have been inspired. At last over best Wishes you continued growth and success ahead!
*/
