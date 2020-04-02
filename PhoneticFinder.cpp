//
// Created by rotem levy on 26/03/2020.
//

#include <iostream>
#include "PhoneticFinder.hpp"

using namespace std;

string phonetic::find(string text, string word)
{
    int i=0;
    int j=0;

    while( j<text.length() && i < word.length())
    {
        bool flag=true;

        while( (text.at(j)!=' ') && (j!=text.length()) )
        {
            bool match = false;

            if(isMatch(text.at(j),word.at(i)) && flag)
            {
                if(word.length()-1! = i)
                {
                    i++;
                }
                if(word.length()== 1 && text.at(j+1) == ' ')
                {
                    return text.substr(j - i, i+1);
                }
                if(text.length()-1!=j )
                {
                    j++;
                }
                match = true;
            }
            if ((i == word.length()-1 ) &&  match )
            {
                if ((j == text.length() - 1) || (text.at(j) == ' ') || (text.at(j + 1) == ' '))
                {
                    if(isMatch(text.at(j),word.at(i)) && flag)
                    {
                        return text.substr(j - i, i+1);
                    }
                }
            }

            if (i == word.length())
            {
                i = 0;
            }

            if(!match)
            {
                flag = false;
                i=0;
                j++;
            }
        }
        j++;
    }
    throw exception();
}

bool isMatch(char a, char b)
{
    a = (char)tolower(a);
    b = (char)tolower(b);


    switch(a)
    {
        case 'v' :
        case 'w':
            switch (b)
            {
                case 'v' : return true;
                case 'V' : return true;
                case 'w' : return true;
                case 'W' : return true;
                default  : return false;
            }

        case 'b' :
        case 'f' :
        case 'p' :
            switch (b)
            {
                case 'b' : return true;
                case 'B' : return true;
                case 'f' : return true;
                case 'F' : return true;
                case 'p' : return true;
                case 'P' : return true;
                default  : return false;
            }

        case 'g':
        case 'j':
            switch(b)
            {
                case 'g' : return true;
                case 'G' : return true;
                case 'j' : return true;
                case 'J' : return true;
                default  : return false;
            }

        case 'c':
        case 'k':
        case 'q':
            switch(b)
            {
                case 'c' : return true;
                case 'C' : return true;
                case 'k' : return true;
                case 'K' : return true;
                case 'q' : return true;
                case 'Q' : return true;
                default  : return false;
            }

        case 's':
        case 'z':
            switch(b)
            {
                case 's' : return true;
                case 'S' : return true;
                case 'z' : return true;
                case 'Z' : return true;
                default  : return false;
            }

        case 'd':
        case 't':
            switch(b)
            {
                case 'd' : return true;
                case 'D' : return true;
                case 't' : return true;
                case 'T' : return true;
                default  : return false;
            }

        case 'o':
        case 'u':
            switch(b)
            {
                case 'o' : return true;
                case 'O' : return true;
                case 'u' : return true;
                case 'U' : return true;
                default  : return false;
            }

        case 'i':
        case 'y':
            switch(b)
            {
                case 'i' : return true;
                case 'I' : return true;
                case 'y' : return true;
                case 'Y' : return true;
                default  : return false;
            }

        default : return ((a==b)||(a==b-32)||(a==b+32));
    }
}
