//
// Created by rotem levy on 26/03/2020.
//

#include <iostream>
#include "PhoneticFinder.hpp"

using namespace std;

/*
 * Main function - find
 */
string phonetic::find(string text, string word)
{
    /**
     * Aiding variables
     */
    int i=0;
    int j=0;
    int text_len = text.length();
    int word_len = word.length();

    /**
     * Main loop
     */
    while( j<text_len && i < word_len)
    {
        bool flag=true;

        while( (text.at(j)!=' ') && (j!=text_len) )
        {
            bool match = false;

            if(isMatch(text.at(j),word.at(i)) && flag)
            {
                if(word_len-1 != i)
                {
                    i++;
                }
                if(word_len == 1 && text.at(j+1) == ' ')
                {
                    return text.substr(j - i, i+1);
                }
                if(text_len-1!=j )
                {
                    j++;
                }
                match = true;
            }
            if ((i == word_len-1 ) &&  match )
            {
                if ((j == text_len - 1) || (text.at(j) == ' ') || (text.at(j + 1) == ' '))
                {
                    if(isMatch(text.at(j),word.at(i)) && flag)
                    {
                        return text.substr(j - i, i+1);
                    }
                }
            }

            if (i == word_len)
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
/*
 * Helping function - checking if two chars are the same
 */
bool isMatch(char ch1, char ch2)
{
    ch1 = (char)tolower(ch1);
    ch2 = (char)tolower(ch2);


    switch(ch1)
    {
        case 'v' :
        case 'w':
            switch (ch2)
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
            switch (ch2)
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
            switch(ch2)
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
            switch(ch2)
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
            switch(ch2)
            {
                case 's' : return true;
                case 'S' : return true;
                case 'z' : return true;
                case 'Z' : return true;
                default  : return false;
            }

        case 'd':
        case 't':
            switch(ch2)
            {
                case 'd' : return true;
                case 'D' : return true;
                case 't' : return true;
                case 'T' : return true;
                default  : return false;
            }

        case 'o':
        case 'u':
            switch(ch2)
            {
                case 'o' : return true;
                case 'O' : return true;
                case 'u' : return true;
                case 'U' : return true;
                default  : return false;
            }

        case 'i':
        case 'y':
            switch(ch2)
            {
                case 'i' : return true;
                case 'I' : return true;
                case 'y' : return true;
                case 'Y' : return true;
                default  : return false;
            }

        default : return ((ch1 == ch2)||(ch1 == ch2-32)||(ch1 == ch2+32));
    }
}
