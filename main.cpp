#include <QCoreApplication>
#include <string.cpp>

using namespace String;

int main(int argc, char *argv[])
{
 //2
 String str1=argv[0];
 String str2=argv[1];
 int countSpaces=0;

if(argc!=2)
    cout<<"Invalid input. Must enter 2 Strings"<<endl;
//3
cout<<"String 1: <"<<str1<<">\n"<<"String 2: <"<<str2<<">"<<end;

//4
cout<<"String 1 lenght: "<<str1.lenght<<'\n'<<"String 2 lenght: "<<str2.length<<endl;

//5
for(Iterator it(str1)=str1[0];it!='\0';it++){
    if(it==' ')
        countSpaces++;
}
cout<<"String 1 Spaces: "<<countSpaces<<endl;

countSpaces=0;

for(Iterator it(str2)=str1[0];it!='\0';it++){
    if(it==' ')
        countSpaces++;
}
cout<<"String 2 Spaces: "<<countSpaces<<endl;

//6
if(str1==str2)
cout<<"<"<<str1<<">"<<"is equal to <"<<str2<<">"<<endl;
if(str1!=str2)
cout<<"<"<<str1<<">"<<"is not equal to <"<<str2<<">"<<endl;
if(str1>str2)
cout<<"<"<<str1<<">"<<"is greater than <"<<str2<<">"<<endl;
if(str1<str2)
cout<<"<"<<str1<<">"<<"is less than <"<<str2<<">"<<endl;

//7
cout<<"String 1: <"<<str1.push_back('!')<<">"<<endl;
cout<<"String 2: <"<<str2.push_back('!')<<">"<<endl;

//8
String str=str1+str2;
cout<<"concatenation: <"<<str<<">"<<endl;

//9
cout<<"concatenation lenght: "<<str.lenght()<<endl;

//11
for(int i=0;i<str.lenght();i++){
    if(str[i]=='!'){
        cout<<"Index of !: "<<i<<endl;
         break;
    }

//12
String substr=substr.substr(12,4);
cout<<"Substring: <"<<substr<<">"<<endl;

    return a.exec();
}
