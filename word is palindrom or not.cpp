    #include <iostream>
    #include<cstring>
    using namespace std;
    int main()
    {
    char str[20];
    char arr;
    char reverse_arr; 
    cout<<"Enter a word:"<<endl;
    cin>>str;
    cout<<"Array is: ";
    for(int i=0;i<strnlen(str,20);i++)
    {
        cout<<str[i];
        arr=str[i];
    }
    cout<<endl;
    cout<<"Reverse of array is: ";
    for(int j=strnlen(str,20);j>=0;j--)
    {
        cout<<str[j];
        reverse_arr=str[j];
    }
    cout<<endl;
    if(arr==reverse_arr)
    {
        cout<<"word is palindrome";
    }
    else
    {
        cout<<"word is not a palindrome";
    }
    return 0;
    }
