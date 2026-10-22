#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    string text;
    cout << "ввод ";
   string:getline(cin, text);

    
    if (text.empty())
    {
        cout << "пусто" << endl;
        return 0;
    }

 bool word = true;
    for (int i = 0; i < text.length(); i++)
    {
    if (text[i] == ' ')
     {
         word = true;
      }
    else
     {
       if (word)
         {
           text[i] = toupper(text[i]);
             word = false;
       }
         else
         {
             text[i] = tolower(text[i]);
          }
      }
   }

   
    if (text.back() != '.')
    {
        text += '.';
    }

    cout << "итог: \t" << text << endl;

    return 0;
}