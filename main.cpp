#include <bits/stdc++.h>
using namespace std;

int main()
{
cout<<"  ahlan ya user ya habiby"<<endl;
cout<<"  What do you like to do today?"<<endl;
cout<<"  1- Cipher a message"<<endl;
cout<<"  2- Decipher a message"<<endl;
cout<<"  3- End"<<endl;
int op,si;
string text;
bool cipher=false ,decipher=false ,exit=false;
cout << "Enter your option:";
cin>>op;
while (op!=1 && op!=2 && op!=3){
    cout << "Enter a correct number:" ;
    cin>>op;
}
if(op==1)cipher=true;
else if (op==2) decipher=true;
while(cipher==true){
    getline(cin,text);
    for(int i =0 ;i< (text.length()) ;i+=1)
        {

             if (text[i]=='a'||text[i]=='A')
            {
                text[i]='p';
            }
             else if (text[i]=='b'||text[i]=='B')
            {
                text[i]='h';
            }
             else if (text[i]=='c'||text[i]=='C')
            {
                text[i]='q';
            }
             else if (text[i]=='d'||text[i]=='D')
            {
                text[i]='g';
            }
             else if (text[i]=='e'||text[i]=='E')
            {
                text[i]='i';
            }
             else if (text[i]=='f'||text[i]=='F')
            {
                text[i]='u';
            }
             else if (text[i]=='g'||text[i]=='G')
            {
                text[i]='m';
            }
             else if (text[i]=='h'||text[i]=='H')
            {
                text[i]='e';
            }
             else if (text[i]=='i'||text[i]=='I')
            {
                text[i]='a';
            }
            else if (text[i]=='j'||text[i]=='J')
            {
                text[i]='y';
            }
             else if (text[i]=='k'||text[i]=='K')
            {
                text[i]='l';
            }
             else if (text[i]=='l'||text[i]=='L')
            {
                text[i]='n';
            }
            else if (text[i]=='m'||text[i]=='M')
            {
                text[i]='o';
            }
             else if (text[i]=='n'||text[i]=='N')
            {
                text[i]='f';
            }
             else if (text[i]=='o'||text[i]=='O')
            {
                text[i]='d';
            }
             else if (text[i]=='p'||text[i]=='P')
            {
                text[i]='x';
            }
             else if (text[i]=='q'||text[i]=='Q')
            {
                text[i]='j';
            }
             else if (text[i]=='r'||text[i]=='R')
            {
                text[i]='k';
            }
             else if (text[i]=='s'||text[i]=='S')
            {
                text[i]='r';
            }
             else if (text[i]=='t'||text[i]=='T')
            {
                text[i]='c';
            }
             else if (text[i]=='u'||text[i]=='U')
            {
                text[i]='v';
            }
             else if (text[i]=='v'||text[i]=='V')
            {
                text[i]='s';
            }
             else if (text[i]=='w'||text[i]=='W')

            {
                text[i]='t';
            }
             else if (text[i]=='x'||text[i]=='X')
            {
                text[i]='z';
            }
             else if (text[i]=='y'||text[i]=='Y')
            {
                text[i]='w';
            }
             else if (text[i]=='z'||text[i]=='Z')
            {
                text[i]='b';
            }


        }cout <<text<<endl;
        cout <<"Please enter the message to cipher"<<endl;

     }
while(decipher==true){
    getline(cin,text);
    for(int i =0 ;i<(text.length());i+=1)
        {

             if (text[i]=='e'||text[i]=='E')
            {
                text[i]='h';
            }
             else if (text[i]=='i'||text[i]=='I')
            {
                text[i]='e';
            }
             else if (text[i]=='v'||text[i]=='V')
            {
                text[i]='u';
            }
             else if (text[i]=='z'||text[i]=='Z')
            {
                text[i]='x';
            }
             else if (text[i]=='w'||text[i]=='W')
            {
                text[i]='y';
            }
             else if (text[i]=='k'||text[i]=='K')
            {
                text[i]='r';
            }
             else if (text[i]=='j'||text[i]=='J')
            {
                text[i]='q';
            }
             else if (text[i]=='l'||text[i]=='L')
            {
                text[i]='k';
            }
             else if (text[i]=='h'||text[i]=='H')
            {
                text[i]='b';
            }
            else if (text[i]=='p'||text[i]=='P')
            {
                text[i]='a';
            }
             else if (text[i]=='x'||text[i]=='X')
            {
                text[i]='p';
            }
             else if (text[i]=='a'||text[i]=='A')
            {
                text[i]='i';
            }
            else if (text[i]=='f'||text[i]=='F')
            {
                text[i]='n';
            }
             else if (text[i]=='d'||text[i]=='D')
            {
                text[i]='o';
            }
             else if (text[i]=='c'||text[i]=='C')
            {
                text[i]='t';
            }
             else if (text[i]=='u'||text[i]=='U')
            {
                text[i]='f';
            }
             else if (text[i]=='b'||text[i]=='B')
            {
                text[i]='z';
            }
             else if (text[i]=='g'||text[i]=='G')
            {
                text[i]='d';
            }
             else if (text[i]=='y'||text[i]=='Y')
            {
                text[i]='j';
            }
             else if (text[i]=='m'||text[i]=='M')
            {
                text[i]='g';
            }
             else if (text[i]=='o'||text[i]=='O')
            {
                text[i]='m';
            }
             else if (text[i]=='n'||text[i]=='N')
            {
                text[i]='l';
            }
             else if (text[i]=='q'||text[i]=='Q')

            {
                text[i]='c';
            }
             else if (text[i]=='s'||text[i]=='S')
            {
                text[i]='v';
            }
             else if (text[i]=='t'||text[i]=='T')
            {
                text[i]='w';
            }
             else if (text[i]=='r'||text[i]=='R')
            {
                text[i]='s';
            }


        }cout <<text<<endl;
        cout <<"Please enter the message to Decipher"<<endl;

     }
if (exit==true){
        cout<<"end"<<endl;
     }
    return 0;
}
