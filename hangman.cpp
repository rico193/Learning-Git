//FIX WIN CONDITIONS ZAINI IN THE MORNING
#include <iostream>
#include <ctime> // for random number generator
using namespace std;

//artwork from https://gist.github.com/chrishorton/8510732aa9a80a03c829b09f12e20d9c
//all rights reserved (this comment was made by daini art theif gang)
void mistake0()
{
    cout << "+-----+" << endl;
    cout << "      |" << endl;
    cout << "      |" << endl;
    cout << "      |" << endl;
    cout << "      |" << endl;
    cout << "      |" << endl;
    cout << "=========" << endl;
}

void mistake1()
{
    cout << "+-----+" << endl;
    cout << "  |   |" << endl;
    cout << "      |" << endl;
    cout << "      |" << endl;
    cout << "      |" << endl;
    cout << "      |" << endl;
    cout << "=========" << endl;
}

void mistake2()
{
    cout << "+-----+" << endl;
    cout << "  |   |" << endl;
    cout << "  O   |" << endl;
    cout << "      |" << endl;
    cout << "      |" << endl;
    cout << "      |" << endl;
    cout << "=========" << endl;
}

void mistake3()
{
    cout << "+-----+" << endl;
    cout << "  |   |" << endl;
    cout << "  O   |" << endl;
    cout << "  |   |" << endl;
    cout << "      |" << endl;
    cout << "      |" << endl;
    cout << "=========" << endl;
}

void mistake4()
{
    cout << "+-----+" << endl;
    cout << "  |   |" << endl;
    cout << "  O   |" << endl;
    cout << " /|   |" << endl;
    cout << "      |" << endl;
    cout << "      |" << endl;
    cout << "=========" << endl;
}

void mistake5()
{
    cout << "+-----+" << endl;
    cout << "  |   |" << endl;
    cout << "  O   |" << endl;
    cout << " /|\\  |" << endl;
    cout << "      |" << endl;
    cout << "      |" << endl;
    cout << "=========" << endl;
}

void mistake6()
{
    cout << "+-----+" << endl;
    cout << "  |   |" << endl;
    cout << "  O   |" << endl;
    cout << " /|\\  |" << endl;
    cout << " /    |" << endl;
    cout << "      |" << endl;
    cout << "=========" << endl;
}

void mistake7()
{
    cout << "+-----+" << endl;
    cout << "  |   |" << endl;
    cout << "  O   |" << endl;
    cout << " /|\\  |" << endl;
    cout << " / \\  |" << endl;
    cout << "      |" << endl;
    cout << "=========" << endl;
}


int main() {
    srand(time(0)); // random number seeder
    
    // ASCII design & how to play the game
    cout << " _   _    _    _   _  ____ __  __    _    _   _ " << endl;
    cout << "| | | |  / \\  | \\ | |/ ___|  \\/  |  / \\  | \\ | |" << endl;
    cout << "| |_| | / _ \\ |  \\| | |  _| |\\/| | / _ \\ |  \\| |" << endl;
    cout << "|  _  |/ ___ \\| |\\  | |_| | |  | |/ ___ \\| |\\  |" << endl;
    cout << "|_| |_/_/   \\_\\_| \\_|\\____|_|  |_/_/   \\_\\_| \\_|" << endl;
    cout << "             Developed by Zain193\n";
    cout << endl;

    cout << "+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-++-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-++-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n";
    cout << "GAME OVERVIEW:\n";
    cout << "Hangman is a word-guessing game where you try to guess a hidden word by selecting letters one at a time.\n";
    cout << "In this version, a random category will be chosen for each round. The categories include:\n";
    cout << "- Animals\n";
    cout << "- Vegetables\n";
    cout << "- Countries\n\n";
    cout << "For each incorrect guess, a part of the hangman figure will be drawn. You need to guess the word before the\n";
    cout << "figure is completely drawn. Can you guess the word in time?\n";
    cout << "+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-++-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-++-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n";
    cout<<endl;
    system("pause");
    cout<<endl;

    //mistake system, if the player reaches 7 mistakes, he loses
    //catergory selection
    int mistakes=0;
    //victory status, 1 represents win and 0 represents defeat
    int status=-1;
    int category=0;
    //random catergory selector
    category=rand();
    category=category%3;
    if (category==0)
    {
        category=1;
    }
    if (category>3)
    {
        category=3;
    }
    //game system begins here
    if (category==1)
    {
        cout<<"+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-++-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-++-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n";
        cout<<"Selected Category: Animals\n";
        cout<<"+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-++-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-++-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n";
        int n=rand();
        n=n&6;
        if (n==0)
        {
            n=1;
        }
        if (n>6)
        {
            n=6;
        }
        if (n==1)
        {
            char cat[3];
            cat[0]='c';
            cat[1]='a';
            cat[2]='t';
            char temp[3];
            temp[0]='_';
            temp[1]='_';
            temp[2]='_';
            char wrong[7]={'_','_','_','_','_','_','_'};
            int j=0;

            char input;
            while (status!=1&&status!=0) //1=win, 0=defeat
            {
                //more if else yay (mistakes go here)
                if (mistakes==7)
                {
                    cout<<endl;
                    cout << " ____        __            _   _ \n";
                    cout << "|  _ \\  ___ / _| ___  __ _| |_| |\n";
                    cout << "| | | |/ _ \\ |_ / _ \\/ _` | __| |\n";
                    cout << "| |_| |  __/  _|  __/ (_| | |_|_|\n";
                    cout << "|____/ \\___|_|  \\___|\\__,_|\\__(_)\n";
                    cout<<endl;
                    cout<<"The Word was: \n";
                    cout<<cat[0]<<cat[1]<<cat[2]<<endl;
                    cout<<endl;
                    system("pause");
                    status=0;
                    return 0;
                }
                //add if for win position, if empty array with '-' equals to cat array
                 
                if (temp[0]=='c'&&temp[1]=='a'&&temp[2]=='t')
                {
                    cout<<endl;
                    cout << " __     ___      _                   _ " << endl;
                    cout << " \\ \\   / (_) ___| |_ ___  _ __ _   _| |" << endl;
                    cout << "  \\ \\ / /| |/ __| __/ _ \\| '__| | | | |" << endl;
                    cout << "   \\ V / | | (__| || (_) | |  | |_| |_|" << endl;
                    cout << "    \\_/  |_\\___|\\__\\___/|_|   \\__, (_)" << endl;
                    cout << "                               |___/   " << endl;
                    status=1;
                    cout<<endl;
                    system("pause");
                    return 0;
                }

                //mistakes (artwork)
                if (mistakes==0)
                {
                    mistake0();
                }
                if (mistakes==1)
                {
                    mistake1();
                }
                if (mistakes==2)
                {
                    mistake2();
                }
                if (mistakes==3)
                {
                    mistake3();
                }
                if (mistakes==4)
                {
                    mistake4();
                }
                if (mistakes==5)
                {
                    mistake5();
                }
                if (mistakes==6)
                {
                    mistake6();
                }
                if (mistakes==7)
                {
                    mistake7();
                }

                cout<<endl;
                cout<<"Word: "<<temp[0]<<temp[1]<<temp[2]<<endl;
                cout<<endl;
                cout<<"Wrong Guesses: \n";
                cout << " _____\n";
                cout << "|" << wrong[0] << "|" << wrong[1] << "|" << wrong[2] << "|\n";
                cout << "|" << wrong[3] << "|" << wrong[4] << "|" << wrong[5] << "|\n";
                cout << "|" << wrong[6] << "|" << " \n";
                cout<<endl;
                cout<<"Input: ";
                cin>>input;
                if (input==cat[0])
                {
                    temp[0]=cat[0];
                }
                else if (input==cat[1])
                {
                    temp[1]=cat[1];
                }
                else if (input==cat[2])
                {
                    temp[2]=cat[2];
                }
                else
                {
                    mistakes++;
                    wrong[j]=input;
                    j++;
                }
                cout<<endl;
                
            }
        }
        if (n==2)
        {
            char cow[3];
            cow[0]='c';
            cow[1]='o';
            cow[2]='w';
            char temp[3];
            temp[0]='_';
            temp[1]='_';
            temp[2]='_';
            char wrong[7]={'_','_','_','_','_','_','_'};
            int j=0;

            char input;
            while (status!=1&&status!=0) //1=win, 0=defeat
            {
                //more if else yay (mistakes go here)
                if (mistakes==7)
                {
                    cout<<endl;
                    cout << " ____        __            _   _ \n";
                    cout << "|  _ \\  ___ / _| ___  __ _| |_| |\n";
                    cout << "| | | |/ _ \\ |_ / _ \\/ _` | __| |\n";
                    cout << "| |_| |  __/  _|  __/ (_| | |_|_|\n";
                    cout << "|____/ \\___|_|  \\___|\\__,_|\\__(_)\n";
                    cout<<endl;
                    cout<<"The Word was: \n";
                    cout<<cow[0]<<cow[1]<<cow[2]<<endl;
                    cout<<endl;
                    system("pause");
                    status=0;
                    return 0;
                }
                //add if for win position, if empty array with '-' equals to cat array
                 
                if (temp[0]=='c'&&temp[1]=='o'&&temp[2]=='w')
                {
                    cout<<endl;
                    cout << " __     ___      _                   _ " << endl;
                    cout << " \\ \\   / (_) ___| |_ ___  _ __ _   _| |" << endl;
                    cout << "  \\ \\ / /| |/ __| __/ _ \\| '__| | | | |" << endl;
                    cout << "   \\ V / | | (__| || (_) | |  | |_| |_|" << endl;
                    cout << "    \\_/  |_\\___|\\__\\___/|_|   \\__, (_)" << endl;
                    cout << "                               |___/   " << endl;
                    status=1;
                    cout<<endl;
                    system("pause");
                    return 0;
                }

                //mistakes (artwork)
                if (mistakes==0)
                {
                    mistake0();
                }
                if (mistakes==1)
                {
                    mistake1();
                }
                if (mistakes==2)
                {
                    mistake2();
                }
                if (mistakes==3)
                {
                    mistake3();
                }
                if (mistakes==4)
                {
                    mistake4();
                }
                if (mistakes==5)
                {
                    mistake5();
                }
                if (mistakes==6)
                {
                    mistake6();
                }
                if (mistakes==7)
                {
                    mistake7();
                }

                cout<<endl;
                cout<<"Word: "<<temp[0]<<temp[1]<<temp[2]<<endl;
                cout<<endl;
                cout<<"Wrong Guesses: \n";
                cout << " _____\n";
                cout << "|" << wrong[0] << "|" << wrong[1] << "|" << wrong[2] << "|\n";
                cout << "|" << wrong[3] << "|" << wrong[4] << "|" << wrong[5] << "|\n";
                cout << "|" << wrong[6] << "|" << " \n";
                cout<<endl;
                cout<<"Input: ";
                cin>>input;
                if (input==cow[0])
                {
                    temp[0]=cow[0];
                }
                else if (input==cow[1])
                {
                    temp[1]=cow[1];
                }
                else if (input==cow[2])
                {
                    temp[2]=cow[2];
                }
                else
                {
                    mistakes++;
                    wrong[j]=input;
                    j++;
                }
                cout<<endl;
                
            }
        }
        if (n==3)
        {
            char fox[3];
            fox[0]='f';
            fox[1]='o';
            fox[2]='x';
            char temp[3];
            temp[0]='_';
            temp[1]='_';
            temp[2]='_';
            char wrong[7]={'_','_','_','_','_','_','_'};
            int j=0;

            char input;
            while (status!=1&&status!=0) //1=win, 0=defeat
            {
                //more if else yay (mistakes go here)
                if (mistakes==7)
                {
                    cout<<endl;
                    cout << " ____        __            _   _ \n";
                    cout << "|  _ \\  ___ / _| ___  __ _| |_| |\n";
                    cout << "| | | |/ _ \\ |_ / _ \\/ _` | __| |\n";
                    cout << "| |_| |  __/  _|  __/ (_| | |_|_|\n";
                    cout << "|____/ \\___|_|  \\___|\\__,_|\\__(_)\n";
                    cout<<endl;
                    cout<<"The Word was: \n";
                    cout<<fox[0]<<fox[1]<<fox[2]<<endl;
                    cout<<endl;
                    system("pause");
                    status=0;
                    return 0;
                }
                //add if for win position, if empty array with '-' equals to cat array
                 
                if (temp[0]=='f'&&temp[1]=='o'&&temp[2]=='x')
                {
                    cout<<endl;
                    cout << " __     ___      _                   _ " << endl;
                    cout << " \\ \\   / (_) ___| |_ ___  _ __ _   _| |" << endl;
                    cout << "  \\ \\ / /| |/ __| __/ _ \\| '__| | | | |" << endl;
                    cout << "   \\ V / | | (__| || (_) | |  | |_| |_|" << endl;
                    cout << "    \\_/  |_\\___|\\__\\___/|_|   \\__, (_)" << endl;
                    cout << "                               |___/   " << endl;
                    status=1;
                    cout<<endl;
                    system("pause");
                    return 0;
                }

                //mistakes (artwork)
                if (mistakes==0)
                {
                    mistake0();
                }
                if (mistakes==1)
                {
                    mistake1();
                }
                if (mistakes==2)
                {
                    mistake2();
                }
                if (mistakes==3)
                {
                    mistake3();
                }
                if (mistakes==4)
                {
                    mistake4();
                }
                if (mistakes==5)
                {
                    mistake5();
                }
                if (mistakes==6)
                {
                    mistake6();
                }
                if (mistakes==7)
                {
                    mistake7();
                }

                cout<<endl;
                cout<<"Word: "<<temp[0]<<temp[1]<<temp[2]<<endl;
                cout<<endl;
                cout<<"Wrong Guesses: \n";
                cout << " _____\n";
                cout << "|" << wrong[0] << "|" << wrong[1] << "|" << wrong[2] << "|\n";
                cout << "|" << wrong[3] << "|" << wrong[4] << "|" << wrong[5] << "|\n";
                cout << "|" << wrong[6] << "|" << " \n";
                cout<<endl;
                cout<<"Input: ";
                cin>>input;
                if (input==fox[0])
                {
                    temp[0]=fox[0];
                }
                else if (input==fox[1])
                {
                    temp[1]=fox[1];
                }
                else if (input==fox[2])
                {
                    temp[2]=fox[2];
                }
                else
                {
                    mistakes++;
                    wrong[j]=input;
                    j++;
                }
                cout<<endl;
                
            }
        }
        if (n==4)
        {
            char bee[3];
            bee[0]='b';
            bee[1]='e';
            bee[2]='e';
            char temp[3];
            temp[0]='_';
            temp[1]='_';
            temp[2]='_';
            char wrong[7]={'_','_','_','_','_','_','_'};
            int j=0;

            char input;
            while (status!=1&&status!=0) //1=win, 0=defeat
            {
                //more if else yay (mistakes go here)
                if (mistakes==7)
                {
                    cout<<endl;
                    cout << " ____        __            _   _ \n";
                    cout << "|  _ \\  ___ / _| ___  __ _| |_| |\n";
                    cout << "| | | |/ _ \\ |_ / _ \\/ _` | __| |\n";
                    cout << "| |_| |  __/  _|  __/ (_| | |_|_|\n";
                    cout << "|____/ \\___|_|  \\___|\\__,_|\\__(_)\n";
                    cout<<endl;
                    cout<<"The Word was: \n";
                    cout<<bee[0]<<bee[1]<<bee[2]<<endl;
                    cout<<endl;
                    system("pause");
                    status=0;
                    return 0;
                }
                //add if for win position, if empty array with '-' equals to cat array
                 
                if (temp[0]=='b'&&temp[1]=='e'&&temp[2]=='e')
                {
                    cout<<endl;
                    cout << " __     ___      _                   _ " << endl;
                    cout << " \\ \\   / (_) ___| |_ ___  _ __ _   _| |" << endl;
                    cout << "  \\ \\ / /| |/ __| __/ _ \\| '__| | | | |" << endl;
                    cout << "   \\ V / | | (__| || (_) | |  | |_| |_|" << endl;
                    cout << "    \\_/  |_\\___|\\__\\___/|_|   \\__, (_)" << endl;
                    cout << "                               |___/   " << endl;
                    status=1;
                    cout<<endl;
                    system("pause");
                    return 0;
                }

                //mistakes (artwork)
                if (mistakes==0)
                {
                    mistake0();
                }
                if (mistakes==1)
                {
                    mistake1();
                }
                if (mistakes==2)
                {
                    mistake2();
                }
                if (mistakes==3)
                {
                    mistake3();
                }
                if (mistakes==4)
                {
                    mistake4();
                }
                if (mistakes==5)
                {
                    mistake5();
                }
                if (mistakes==6)
                {
                    mistake6();
                }
                if (mistakes==7)
                {
                    mistake7();
                }

                cout<<endl;
                cout<<"Word: "<<temp[0]<<temp[1]<<temp[2]<<endl;
                cout<<endl;
                cout<<"Wrong Guesses: \n";
                cout << " _____\n";
                cout << "|" << wrong[0] << "|" << wrong[1] << "|" << wrong[2] << "|\n";
                cout << "|" << wrong[3] << "|" << wrong[4] << "|" << wrong[5] << "|\n";
                cout << "|" << wrong[6] << "|" << " \n";
                cout<<endl;
                cout<<"Input: ";
                cin>>input;
                if (input==bee[0])
                {
                    temp[0]=bee[0];
                }
                if (input==bee[1])
                {
                    temp[1]=bee[1];
                }
                if (input==bee[2])
                {
                    temp[2]=bee[2];
                }
                if (input!=bee[0]&&input!=bee[1]&&input!=bee[2])
                {
                    mistakes++;
                    wrong[j]=input;
                    j++;
                }
                cout<<endl;
                
            }
        }
        if (n==5)
        {
            char hen[3];
            hen[0]='h';
            hen[1]='e';
            hen[2]='n';
            char temp[3];
            temp[0]='_';
            temp[1]='_';
            temp[2]='_';
            char wrong[7]={'_','_','_','_','_','_','_'};
            int j=0;

            char input;
            while (status!=1&&status!=0) //1=win, 0=defeat
            {
                //more if else yay (mistakes go here)
                if (mistakes==7)
                {
                    cout<<endl;
                    cout << " ____        __            _   _ \n";
                    cout << "|  _ \\  ___ / _| ___  __ _| |_| |\n";
                    cout << "| | | |/ _ \\ |_ / _ \\/ _` | __| |\n";
                    cout << "| |_| |  __/  _|  __/ (_| | |_|_|\n";
                    cout << "|____/ \\___|_|  \\___|\\__,_|\\__(_)\n";
                    cout<<endl;
                    cout<<"The Word was: \n";
                    cout<<hen[0]<<hen[1]<<hen[2]<<endl;
                    cout<<endl;
                    system("pause");
                    status=0;
                    return 0;
                }
                //add if for win position, if empty array with '-' equals to cat array
                 
                if (temp[0]=='h'&&temp[1]=='e'&&temp[2]=='n')
                {
                    cout<<endl;
                    cout << " __     ___      _                   _ " << endl;
                    cout << " \\ \\   / (_) ___| |_ ___  _ __ _   _| |" << endl;
                    cout << "  \\ \\ / /| |/ __| __/ _ \\| '__| | | | |" << endl;
                    cout << "   \\ V / | | (__| || (_) | |  | |_| |_|" << endl;
                    cout << "    \\_/  |_\\___|\\__\\___/|_|   \\__, (_)" << endl;
                    cout << "                               |___/   " << endl;
                    status=1;
                    cout<<endl;
                    system("pause");
                    return 0;
                }

                //mistakes (artwork)
                if (mistakes==0)
                {
                    mistake0();
                }
                if (mistakes==1)
                {
                    mistake1();
                }
                if (mistakes==2)
                {
                    mistake2();
                }
                if (mistakes==3)
                {
                    mistake3();
                }
                if (mistakes==4)
                {
                    mistake4();
                }
                if (mistakes==5)
                {
                    mistake5();
                }
                if (mistakes==6)
                {
                    mistake6();
                }
                if (mistakes==7)
                {
                    mistake7();
                }

                cout<<endl;
                cout<<"Word: "<<temp[0]<<temp[1]<<temp[2]<<endl;
                cout<<endl;
                cout<<"Wrong Guesses: \n";
                cout << " _____\n";
                cout << "|" << wrong[0] << "|" << wrong[1] << "|" << wrong[2] << "|\n";
                cout << "|" << wrong[3] << "|" << wrong[4] << "|" << wrong[5] << "|\n";
                cout << "|" << wrong[6] << "|" << " \n";
                cout<<endl;
                cout<<"Input: ";
                cin>>input;
                if (input==hen[0])
                {
                    temp[0]=hen[0];
                }
                else if (input==hen[1])
                {
                    temp[1]=hen[1];
                }
                else if (input==hen[2])
                {
                    temp[2]=hen[2];
                }
                else
                {
                    mistakes++;
                    wrong[j]=input;
                    j++;
                }
                cout<<endl;
                
            }
        }
        if (n==6)
        {
            char bat[3];
            bat[0]='b';
            bat[1]='a';
            bat[2]='t';
            char temp[3];
            temp[0]='_';
            temp[1]='_';
            temp[2]='_';
            char wrong[7]={'_','_','_','_','_','_','_'};
            int j=0;

            char input;
            while (status!=1&&status!=0) //1=win, 0=defeat
            {
                //more if else yay (mistakes go here)
                if (mistakes==7)
                {
                    cout<<endl;
                    cout << " ____        __            _   _ \n";
                    cout << "|  _ \\  ___ / _| ___  __ _| |_| |\n";
                    cout << "| | | |/ _ \\ |_ / _ \\/ _` | __| |\n";
                    cout << "| |_| |  __/  _|  __/ (_| | |_|_|\n";
                    cout << "|____/ \\___|_|  \\___|\\__,_|\\__(_)\n";
                    cout<<endl;
                    cout<<"The Word was: \n";
                    cout<<bat[0]<<bat[1]<<bat[2]<<endl;
                    system("pause");
                    status=0;
                    return 0;
                }
                //add if for win position, if empty array with '-' equals to cat array
                 
                if (temp[0]=='b'&&temp[1]=='a'&&temp[2]=='t')
                {
                    cout<<endl;
                    cout << " __     ___      _                   _ " << endl;
                    cout << " \\ \\   / (_) ___| |_ ___  _ __ _   _| |" << endl;
                    cout << "  \\ \\ / /| |/ __| __/ _ \\| '__| | | | |" << endl;
                    cout << "   \\ V / | | (__| || (_) | |  | |_| |_|" << endl;
                    cout << "    \\_/  |_\\___|\\__\\___/|_|   \\__, (_)" << endl;
                    cout << "                               |___/   " << endl;
                    status=1;
                    cout<<endl;
                    system("pause");
                    return 0;
                }

                //mistakes (artwork)
                if (mistakes==0)
                {
                    mistake0();
                }
                if (mistakes==1)
                {
                    mistake1();
                }
                if (mistakes==2)
                {
                    mistake2();
                }
                if (mistakes==3)
                {
                    mistake3();
                }
                if (mistakes==4)
                {
                    mistake4();
                }
                if (mistakes==5)
                {
                    mistake5();
                }
                if (mistakes==6)
                {
                    mistake6();
                }
                if (mistakes==7)
                {
                    mistake7();
                }

                cout<<endl;
                cout<<"Word: "<<temp[0]<<temp[1]<<temp[2]<<endl;
                cout<<endl;
                cout<<"Wrong Guesses: \n";
                cout << " _____\n";
                cout << "|" << wrong[0] << "|" << wrong[1] << "|" << wrong[2] << "|\n";
                cout << "|" << wrong[3] << "|" << wrong[4] << "|" << wrong[5] << "|\n";
                cout << "|" << wrong[6] << "|" << " \n";
                cout<<endl;
                cout<<"Input: ";
                cin>>input;
                if (input==bat[0])
                {
                    temp[0]=bat[0];
                }
                else if (input==bat[1])
                {
                    temp[1]=bat[1];
                }
                else if (input==bat[2])
                {
                    temp[2]=bat[2];
                }
                else
                {
                    mistakes++;
                    wrong[j]=input;
                    j++;
                }
                cout<<endl;
                
            }
        }
        
    }

    
    
    if (category==2)
    {
        cout<<"+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-++-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-++-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n";
        cout<<"Selected Category: Vegetables\n";
        cout<<"+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-++-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-++-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n";
        int n=rand();
        n=n&6;
        if (n==0)
        {
            n=1;
        }
        if (n>6)
        {
            n=6;
        }
        if (n==1)
        {
            char pea[3];
            pea[0]='p';
            pea[1]='e';
            pea[2]='a';
            char temp[3];
            temp[0]='_';
            temp[1]='_';
            temp[2]='_';
            char wrong[7]={'_','_','_','_','_','_','_'};
            int j=0;

            char input;
            while (status!=1&&status!=0) //1=win, 0=defeat
            {
                //more if else yay (mistakes go here)
                if (mistakes==7)
                {
                    cout<<endl;
                    cout << " ____        __            _   _ \n";
                    cout << "|  _ \\  ___ / _| ___  __ _| |_| |\n";
                    cout << "| | | |/ _ \\ |_ / _ \\/ _` | __| |\n";
                    cout << "| |_| |  __/  _|  __/ (_| | |_|_|\n";
                    cout << "|____/ \\___|_|  \\___|\\__,_|\\__(_)\n";
                    cout<<endl;
                    cout<<"The Word was: \n";
                    cout<<pea[0]<<pea[1]<<pea[2]<<endl;
                    cout<<endl;
                    system("pause");
                    status=0;
                    return 0;
                }
                //add if for win position, if empty array with '-' equals to cat array
                 
                if (temp[0]=='p'&&temp[1]=='e'&&temp[2]=='a')
                {
                    cout<<endl;
                    cout << " __     ___      _                   _ " << endl;
                    cout << " \\ \\   / (_) ___| |_ ___  _ __ _   _| |" << endl;
                    cout << "  \\ \\ / /| |/ __| __/ _ \\| '__| | | | |" << endl;
                    cout << "   \\ V / | | (__| || (_) | |  | |_| |_|" << endl;
                    cout << "    \\_/  |_\\___|\\__\\___/|_|   \\__, (_)" << endl;
                    cout << "                               |___/   " << endl;
                    status=1;
                    cout<<endl;
                    system("pause");
                    return 0;
                }

                //mistakes (artwork)
                if (mistakes==0)
                {
                    mistake0();
                }
                if (mistakes==1)
                {
                    mistake1();
                }
                if (mistakes==2)
                {
                    mistake2();
                }
                if (mistakes==3)
                {
                    mistake3();
                }
                if (mistakes==4)
                {
                    mistake4();
                }
                if (mistakes==5)
                {
                    mistake5();
                }
                if (mistakes==6)
                {
                    mistake6();
                }
                if (mistakes==7)
                {
                    mistake7();
                }

                cout<<endl;
                cout<<"Word: "<<temp[0]<<temp[1]<<temp[2]<<endl;
                cout<<endl;
                cout<<"Wrong Guesses: \n";
                cout << " _____\n";
                cout << "|" << wrong[0] << "|" << wrong[1] << "|" << wrong[2] << "|\n";
                cout << "|" << wrong[3] << "|" << wrong[4] << "|" << wrong[5] << "|\n";
                cout << "|" << wrong[6] << "|" << " \n";
                cout<<endl;
                cout<<"Input: ";
                cin>>input;
                if (input==pea[0])
                {
                    temp[0]=pea[0];
                }
                else if (input==pea[1])
                {
                    temp[1]=pea[1];
                }
                else if (input==pea[2])
                {
                    temp[2]=pea[2];
                }
                else
                {
                    mistakes++;
                    wrong[j]=input;
                    j++;
                }
                cout<<endl;
                
            }
        }
        if (n==2)
        {
            char yam[3];
            yam[0]='y';
            yam[1]='a';
            yam[2]='m';
            char temp[3];
            temp[0]='_';
            temp[1]='_';
            temp[2]='_';
            char wrong[7]={'_','_','_','_','_','_','_'};
            int j=0;

            char input;
            while (status!=1&&status!=0) //1=win, 0=defeat
            {
                //more if else yay (mistakes go here)
                if (mistakes==7)
                {
                    cout<<endl;
                    cout << " ____        __            _   _ \n";
                    cout << "|  _ \\  ___ / _| ___  __ _| |_| |\n";
                    cout << "| | | |/ _ \\ |_ / _ \\/ _` | __| |\n";
                    cout << "| |_| |  __/  _|  __/ (_| | |_|_|\n";
                    cout << "|____/ \\___|_|  \\___|\\__,_|\\__(_)\n";
                    cout<<endl;
                    cout<<"The Word was: \n";
                    cout<<yam[0]<<yam[1]<<yam[2]<<endl;
                    cout<<endl;
                    system("pause");
                    status=0;
                    return 0;
                }
                //add if for win position, if empty array with '-' equals to cat array
                 
                if (temp[0]=='y'&&temp[1]=='a'&&temp[2]=='m')
                {
                    cout<<endl;
                    cout << " __     ___      _                   _ " << endl;
                    cout << " \\ \\   / (_) ___| |_ ___  _ __ _   _| |" << endl;
                    cout << "  \\ \\ / /| |/ __| __/ _ \\| '__| | | | |" << endl;
                    cout << "   \\ V / | | (__| || (_) | |  | |_| |_|" << endl;
                    cout << "    \\_/  |_\\___|\\__\\___/|_|   \\__, (_)" << endl;
                    cout << "                               |___/   " << endl;
                    status=1;
                    cout<<endl;
                    system("pause");
                    return 0;
                }

                //mistakes (artwork)
                if (mistakes==0)
                {
                    mistake0();
                }
                if (mistakes==1)
                {
                    mistake1();
                }
                if (mistakes==2)
                {
                    mistake2();
                }
                if (mistakes==3)
                {
                    mistake3();
                }
                if (mistakes==4)
                {
                    mistake4();
                }
                if (mistakes==5)
                {
                    mistake5();
                }
                if (mistakes==6)
                {
                    mistake6();
                }
                if (mistakes==7)
                {
                    mistake7();
                }

                cout<<endl;
                cout<<"Word: "<<temp[0]<<temp[1]<<temp[2]<<endl;
                cout<<endl;
                cout<<"Wrong Guesses: \n";
                cout << " _____\n";
                cout << "|" << wrong[0] << "|" << wrong[1] << "|" << wrong[2] << "|\n";
                cout << "|" << wrong[3] << "|" << wrong[4] << "|" << wrong[5] << "|\n";
                cout << "|" << wrong[6] << "|" << " \n";
                cout<<endl;
                cout<<"Input: ";
                cin>>input;
                if (input==yam[0])
                {
                    temp[0]=yam[0];
                }
                else if (input==yam[1])
                {
                    temp[1]=yam[1];
                }
                else if (input==yam[2])
                {
                    temp[2]=yam[2];
                }
                else
                {
                    mistakes++;
                    wrong[j]=input;
                    j++;
                }
                cout<<endl;
                
            }
        }
        if (n==3)
        {
            char potato[6];
            potato[0]='p';
            potato[1]='o';
            potato[2]='t';
            potato[3]='a';
            potato[4]='t';
            potato[5]='o';
            char temp[6];
            temp[0]='_';
            temp[1]='_';
            temp[2]='_';
            temp[3]='_';
            temp[4]='_';
            temp[5]='_';
            char wrong[7]={'_','_','_','_','_','_','_'};
            int j=0;

            char input;
            while (status!=1&&status!=0) //1=win, 0=defeat
            {
                //more if else yay (mistakes go here)
                if (mistakes==7)
                {
                    cout<<endl;
                    cout << " ____        __            _   _ \n";
                    cout << "|  _ \\  ___ / _| ___  __ _| |_| |\n";
                    cout << "| | | |/ _ \\ |_ / _ \\/ _` | __| |\n";
                    cout << "| |_| |  __/  _|  __/ (_| | |_|_|\n";
                    cout << "|____/ \\___|_|  \\___|\\__,_|\\__(_)\n";
                    cout<<endl;
                    cout<<"The Word was: \n";
                    cout<<potato[0]<<potato[1]<<potato[2]<<potato[3]<<potato[4]<<potato[5]<<endl;
                    cout<<endl;
                    system("pause");
                    status=0;
                    return 0;
                }
                //add if for win position, if empty array with '-' equals to cat array
                 
                if (temp[0]=='p'&&temp[1]=='o'&&temp[2]=='t'&&temp[3]=='a'&&temp[4]=='t'&&temp[5]=='o')
                {
                    cout<<endl;
                    cout << " __     ___      _                   _ " << endl;
                    cout << " \\ \\   / (_) ___| |_ ___  _ __ _   _| |" << endl;
                    cout << "  \\ \\ / /| |/ __| __/ _ \\| '__| | | | |" << endl;
                    cout << "   \\ V / | | (__| || (_) | |  | |_| |_|" << endl;
                    cout << "    \\_/  |_\\___|\\__\\___/|_|   \\__, (_)" << endl;
                    cout << "                               |___/   " << endl;
                    status=1;
                    cout<<endl;
                    system("pause");
                    return 0;
                }

                //mistakes (artwork)
                if (mistakes==0)
                {
                    mistake0();
                }
                if (mistakes==1)
                {
                    mistake1();
                }
                if (mistakes==2)
                {
                    mistake2();
                }
                if (mistakes==3)
                {
                    mistake3();
                }
                if (mistakes==4)
                {
                    mistake4();
                }
                if (mistakes==5)
                {
                    mistake5();
                }
                if (mistakes==6)
                {
                    mistake6();
                }
                if (mistakes==7)
                {
                    mistake7();
                }

                cout<<endl;
                cout<<"Word: "<<temp[0]<<temp[1]<<temp[2]<<temp[3]<<temp[4]<<temp[5]<<endl;
                cout<<endl;
                cout<<"Wrong Guesses: \n";
                cout << " _____\n";
                cout << "|" << wrong[0] << "|" << wrong[1] << "|" << wrong[2] << "|\n";
                cout << "|" << wrong[3] << "|" << wrong[4] << "|" << wrong[5] << "|\n";
                cout << "|" << wrong[6] << "|" << " \n";
                cout<<endl;
                cout<<"Input: ";
                cin>>input;
                if (input==potato[0])
                {
                    temp[0]=potato[0];
                }
                if (input==potato[1])
                {
                    temp[1]=potato[1];
                }
                if (input==potato[2])
                {
                    temp[2]=potato[2];
                }
                if (input==potato[3])
                {
                    temp[3]=potato[3];
                }
                if (input==potato[4])
                {
                    temp[4]=potato[4];
                }
                if (input==potato[5])
                {
                    temp[5]=potato[5];
                }
                if (input!=potato[0]&&input!=potato[1]&&input!=potato[2]&&input!=potato[3]&&input!=potato[4]&&input!=potato[5])
                {
                    mistakes++;
                    wrong[j]=input;
                    j++;
                }
                cout<<endl;
                
            }
        }
        if (n==4)
        {
            char onion[5];
            onion[0]='o';
            onion[1]='n';
            onion[2]='i';
            onion[3]='o';
            onion[4]='n';
            char temp[5];
            temp[0]='_';
            temp[1]='_';
            temp[2]='_';
            temp[3]='_';
            temp[4]='_';
            char wrong[7]={'_','_','_','_','_','_','_'};
            int j=0;

            char input;
            while (status!=1&&status!=0) //1=win, 0=defeat
            {
                //more if else yay (mistakes go here)
                if (mistakes==7)
                {
                    cout<<endl;
                    cout << " ____        __            _   _ \n";
                    cout << "|  _ \\  ___ / _| ___  __ _| |_| |\n";
                    cout << "| | | |/ _ \\ |_ / _ \\/ _` | __| |\n";
                    cout << "| |_| |  __/  _|  __/ (_| | |_|_|\n";
                    cout << "|____/ \\___|_|  \\___|\\__,_|\\__(_)\n";
                    cout<<endl;
                    cout<<"The Word was: \n";
                    cout<<onion[0]<<onion[1]<<onion[2]<<onion[3]<<onion[4]<<endl;
                    cout<<endl;
                    system("pause");
                    status=0;
                    return 0;
                }
                //add if for win position, if empty array with '-' equals to cat array
                 
                if (temp[0]=='o'&&temp[1]=='n'&&temp[2]=='i'&&temp[3]=='o'&&temp[4]=='n')
                {
                    cout<<endl;
                    cout << " __     ___      _                   _ " << endl;
                    cout << " \\ \\   / (_) ___| |_ ___  _ __ _   _| |" << endl;
                    cout << "  \\ \\ / /| |/ __| __/ _ \\| '__| | | | |" << endl;
                    cout << "   \\ V / | | (__| || (_) | |  | |_| |_|" << endl;
                    cout << "    \\_/  |_\\___|\\__\\___/|_|   \\__, (_)" << endl;
                    cout << "                               |___/   " << endl;
                    status=1;
                    cout<<endl;
                    system("pause");
                    return 0;
                }

                //mistakes (artwork)
                if (mistakes==0)
                {
                    mistake0();
                }
                if (mistakes==1)
                {
                    mistake1();
                }
                if (mistakes==2)
                {
                    mistake2();
                }
                if (mistakes==3)
                {
                    mistake3();
                }
                if (mistakes==4)
                {
                    mistake4();
                }
                if (mistakes==5)
                {
                    mistake5();
                }
                if (mistakes==6)
                {
                    mistake6();
                }
                if (mistakes==7)
                {
                    mistake7();
                }

                cout<<endl;
                cout<<"Word: "<<temp[0]<<temp[1]<<temp[2]<<temp[3]<<temp[4]<<endl;
                cout<<endl;
                cout<<"Wrong Guesses: \n";
                cout << " _____\n";
                cout << "|" << wrong[0] << "|" << wrong[1] << "|" << wrong[2] << "|\n";
                cout << "|" << wrong[3] << "|" << wrong[4] << "|" << wrong[5] << "|\n";
                cout << "|" << wrong[6] << "|" << " \n";
                cout<<endl;
                cout<<"Input: ";
                cin>>input;
                if (input==onion[0])
                {
                    temp[0]=onion[0];
                }
                if (input==onion[1])
                {
                    temp[1]=onion[1];
                }
                if (input==onion[2])
                {
                    temp[2]=onion[2];
                }
                if (input==onion[3])
                {
                    temp[3]=onion[3];
                }
                if (input==onion[4])
                {
                    temp[4]=onion[4];
                }
                if (input!=onion[0]&&input!=onion[1]&&input!=onion[2]&&input!=onion[3]&&input!=onion[4])
                {
                    mistakes++;
                    wrong[j]=input;
                    j++;
                }
                cout<<endl;
                
            }
        }
        if (n==5)
        {
            char carrot[6];
            carrot[0]='c';
            carrot[1]='a';
            carrot[2]='r';
            carrot[3]='r';
            carrot[4]='o';
            carrot[5]='t';
            char temp[6];
            temp[0]='_';
            temp[1]='_';
            temp[2]='_';
            temp[3]='_';
            temp[4]='_';
            temp[5]='_';
            char wrong[7]={'_','_','_','_','_','_','_'};
            int j=0;

            char input;
            while (status!=1&&status!=0) //1=win, 0=defeat
            {
                //more if else yay (mistakes go here)
                if (mistakes==7)
                {
                    cout<<endl;
                    cout << " ____        __            _   _ \n";
                    cout << "|  _ \\  ___ / _| ___  __ _| |_| |\n";
                    cout << "| | | |/ _ \\ |_ / _ \\/ _` | __| |\n";
                    cout << "| |_| |  __/  _|  __/ (_| | |_|_|\n";
                    cout << "|____/ \\___|_|  \\___|\\__,_|\\__(_)\n";
                    cout<<endl;
                    cout<<"The Word was: \n";
                    cout<<carrot[0]<<carrot[1]<<carrot[2]<<carrot[3]<<carrot[4]<<carrot[5]<<endl;
                    cout<<endl;
                    system("pause");
                    status=0;
                    return 0;
                }
                //add if for win position, if empty array with '-' equals to cat array
                 
                if (temp[0]=='c'&&temp[1]=='a'&&temp[2]=='r'&&temp[3]=='r'&&temp[4]=='o'&&temp[5]=='t')
                {
                    cout<<endl;
                    cout << " __     ___      _                   _ " << endl;
                    cout << " \\ \\   / (_) ___| |_ ___  _ __ _   _| |" << endl;
                    cout << "  \\ \\ / /| |/ __| __/ _ \\| '__| | | | |" << endl;
                    cout << "   \\ V / | | (__| || (_) | |  | |_| |_|" << endl;
                    cout << "    \\_/  |_\\___|\\__\\___/|_|   \\__, (_)" << endl;
                    cout << "                               |___/   " << endl;
                    status=1;
                    cout<<endl;
                    system("pause");
                    return 0;
                }

                //mistakes (artwork)
                if (mistakes==0)
                {
                    mistake0();
                }
                if (mistakes==1)
                {
                    mistake1();
                }
                if (mistakes==2)
                {
                    mistake2();
                }
                if (mistakes==3)
                {
                    mistake3();
                }
                if (mistakes==4)
                {
                    mistake4();
                }
                if (mistakes==5)
                {
                    mistake5();
                }
                if (mistakes==6)
                {
                    mistake6();
                }
                if (mistakes==7)
                {
                    mistake7();
                }

                cout<<endl;
                cout<<"Word: "<<temp[0]<<temp[1]<<temp[2]<<temp[3]<<temp[4]<<temp[5]<<endl;
                cout<<endl;
                cout<<"Wrong Guesses: \n";
                cout << " _____\n";
                cout << "|" << wrong[0] << "|" << wrong[1] << "|" << wrong[2] << "|\n";
                cout << "|" << wrong[3] << "|" << wrong[4] << "|" << wrong[5] << "|\n";
                cout << "|" << wrong[6] << "|" << " \n";
                cout<<endl;
                cout<<"Input: ";
                cin>>input;
                if (input==carrot[0])
                {
                    temp[0]=carrot[0];
                }
                if (input==carrot[1])
                {
                    temp[1]=carrot[1];
                }
                if (input==carrot[2])
                {
                    temp[2]=carrot[2];
                }
                if (input==carrot[3])
                {
                    temp[3]=carrot[3];
                }
                if (input==carrot[4])
                {
                    temp[4]=carrot[4];
                }
                if (input==carrot[5])
                {
                    temp[5]=carrot[5];
                }
                if (input!=carrot[0]&&input!=carrot[1]&&input!=carrot[2]&&input!=carrot[3]&&input!=carrot[4]&&input!=carrot[5])
                {
                    mistakes++;
                    wrong[j]=input;
                    j++;
                }
                cout<<endl;
                
            }
        }
        if (n==6)
        {
            char tomato[6];
            tomato[0]='t';
            tomato[1]='o';
            tomato[2]='m';
            tomato[3]='a';
            tomato[4]='t';
            tomato[5]='o';
            char temp[6];
            temp[0]='_';
            temp[1]='_';
            temp[2]='_';
            temp[3]='_';
            temp[4]='_';
            temp[5]='_';
            char wrong[7]={'_','_','_','_','_','_','_'};
            int j=0;

            char input;
            while (status!=1&&status!=0) //1=win, 0=defeat
            {
                //more if else yay (mistakes go here)
                if (mistakes==7)
                {
                    cout<<endl;
                    cout << " ____        __            _   _ \n";
                    cout << "|  _ \\  ___ / _| ___  __ _| |_| |\n";
                    cout << "| | | |/ _ \\ |_ / _ \\/ _` | __| |\n";
                    cout << "| |_| |  __/  _|  __/ (_| | |_|_|\n";
                    cout << "|____/ \\___|_|  \\___|\\__,_|\\__(_)\n";
                    cout<<endl;
                    cout<<"The Word was: \n";
                    cout<<tomato[0]<<tomato[1]<<tomato[2]<<tomato[3]<<tomato[4]<<tomato[5]<<endl;
                    cout<<endl;
                    system("pause");
                    status=0;
                    return 0;
                }
                //add if for win position, if empty array with '-' equals to cat array
                 
                if (temp[0]=='t'&&temp[1]=='o'&&temp[2]=='m'&&temp[3]=='a'&&temp[4]=='t'&&temp[5]=='o')
                {
                    cout<<endl;
                    cout << " __     ___      _                   _ " << endl;
                    cout << " \\ \\   / (_) ___| |_ ___  _ __ _   _| |" << endl;
                    cout << "  \\ \\ / /| |/ __| __/ _ \\| '__| | | | |" << endl;
                    cout << "   \\ V / | | (__| || (_) | |  | |_| |_|" << endl;
                    cout << "    \\_/  |_\\___|\\__\\___/|_|   \\__, (_)" << endl;
                    cout << "                               |___/   " << endl;
                    status=1;
                    cout<<endl;
                    system("pause");
                    return 0;
                }

                //mistakes (artwork)
                if (mistakes==0)
                {
                    mistake0();
                }
                if (mistakes==1)
                {
                    mistake1();
                }
                if (mistakes==2)
                {
                    mistake2();
                }
                if (mistakes==3)
                {
                    mistake3();
                }
                if (mistakes==4)
                {
                    mistake4();
                }
                if (mistakes==5)
                {
                    mistake5();
                }
                if (mistakes==6)
                {
                    mistake6();
                }
                if (mistakes==7)
                {
                    mistake7();
                }

                cout<<endl;
                cout<<"Word: "<<temp[0]<<temp[1]<<temp[2]<<temp[3]<<temp[4]<<temp[5]<<endl;
                cout<<endl;
                cout<<"Wrong Guesses: \n";
                cout << " _____\n";
                cout << "|" << wrong[0] << "|" << wrong[1] << "|" << wrong[2] << "|\n";
                cout << "|" << wrong[3] << "|" << wrong[4] << "|" << wrong[5] << "|\n";
                cout << "|" << wrong[6] << "|" << " \n";
                cout<<endl;
                cout<<"Input: ";
                cin>>input;
                if (input==tomato[0])
                {
                    temp[0]=tomato[0];
                }
                if (input==tomato[1])
                {
                    temp[1]=tomato[1];
                }
                if (input==tomato[2])
                {
                    temp[2]=tomato[2];
                }
                if (input==tomato[3])
                {
                    temp[3]=tomato[3];
                }
                if (input==tomato[4])
                {
                    temp[4]=tomato[4];
                }
                if (input==tomato[5])
                {
                    temp[5]=tomato[5];
                }
                if (input!=tomato[0]&&input!=tomato[1]&&input!=tomato[2]&&input!=tomato[3]&&input!=tomato[4]&&input!=tomato[5])
                {
                    mistakes++;
                    wrong[j]=input;
                    j++;
                }
                cout<<endl;
                
            }
    }
    
    if (category==3)
    {
        cout<<"+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-++-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-++-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n";
        cout<<"Selected Category: Countries\n";
        cout<<"+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-++-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-++-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n";
        int n=rand();
        n=n&6;
        if (n==0)
        {
            n=1;
        }
        if (n>6)
        {
            n=6;
        }
        if (n==1)
        {
            char pakistan[8]; // Note: length is 8 because "Pakistan" has 8 characters
            pakistan[0] = 'p';
            pakistan[1] = 'a';
            pakistan[2] = 'k';
            pakistan[3] = 'i';
            pakistan[4] = 's';
            pakistan[5] = 't';
            pakistan[6] = 'a';
            pakistan[7] = 'n';

            char temp[8]; // Update temp to match the length of "Pakistan"
            temp[0] = '_';
            temp[1] = '_';
            temp[2] = '_';
            temp[3] = '_';
            temp[4] = '_';
            temp[5] = '_';
            temp[6] = '_';
            temp[7] = '_';

            char wrong[8] = {'_', '_', '_', '_', '_', '_', '_', '_'};
            int j = 0;

            char input;
            while (status != 1 && status != 0) //1=win, 0=defeat
            {
                if (mistakes == 7)
                {
                    cout << endl;
                    cout << " ____        __            _   _ \n";
                    cout << "|  _ \\  ___ / _| ___  __ _| |_| |\n";
                    cout << "| | | |/ _ \\ |_ / _ \\/ _` | __| |\n";
                    cout << "| |_| |  __/  _|  __/ (_| | |_|_|\n";
                    cout << "|____/ \\___|_|  \\___|\\__,_|\\__(_)\n";
                    cout << endl;
                    cout << "The Word was: \n";
                    cout << pakistan[0] << pakistan[1] << pakistan[2] << pakistan[3] << pakistan[4] << pakistan[5] << pakistan[6] << pakistan[7] << endl;
                    cout << endl;
                    system("pause");
                    status = 0;
                    return 0;
                }

                if (temp[0] == 'p' && temp[1] == 'a' && temp[2] == 'k' && temp[3] == 'i' && temp[4] == 's' && temp[5] == 't' && temp[6] == 'a' && temp[7] == 'n')
                {
                    cout << endl;
                    cout << " __     ___      _                   _ " << endl;
                    cout << " \\ \\   / (_) ___| |_ ___  _ __ _   _| |" << endl;
                    cout << "  \\ \\ / /| |/ __| __/ _ \\| '__| | | | |" << endl;
                    cout << "   \\ V / | | (__| || (_) | |  | |_| |_|" << endl;
                    cout << "    \\_/  |_\\___|\\__\\___/|_|   \\__, (_)" << endl;
                    cout << "                               |___/   " << endl;
                    status = 1;
                    cout << endl;
                    system("pause");
                    return 0;
                }

                if (mistakes == 0)
                {
                    mistake0();
                }
                if (mistakes == 1)
                {
                    mistake1();
                }
                if (mistakes == 2)
                {
                    mistake2();
                }
                if (mistakes == 3)
                {
                    mistake3();
                }
                if (mistakes == 4)
                {
                    mistake4();
                }
                if (mistakes == 5)
                {
                    mistake5();
                }
                if (mistakes == 6)
                {
                    mistake6();
                }
                if (mistakes == 7)
                {
                    mistake7();
                }

                cout << endl;
                cout << "Word: " << temp[0] << temp[1] << temp[2] << temp[3] << temp[4] << temp[5] << temp[6] << temp[7] << endl;
                cout << endl;
                cout << "Wrong Guesses: \n";
                cout << " _____\n";
                cout << "|" << wrong[0] << "|" << wrong[1] << "|" << wrong[2] << "|\n";
                cout << "|" << wrong[3] << "|" << wrong[4] << "|" << wrong[5] << "|\n";
                cout << "|" << wrong[6] << "|" << wrong[7] << " \n"; // Added the 8th slot
                cout << endl;
                cout << "Input: ";
                cin >> input;
                if (input == pakistan[0])
                {
                    temp[0] = pakistan[0];
                }
                if (input == pakistan[1])
                {
                    temp[1] = pakistan[1];
                }
                if (input == pakistan[2])
                {
                    temp[2] = pakistan[2];
                }
                if (input == pakistan[3])
                {
                    temp[3] = pakistan[3];
                }
                if (input == pakistan[4])
                {
                    temp[4] = pakistan[4];
                }
                if (input == pakistan[5])
                {
                    temp[5] = pakistan[5];
                }
                if (input == pakistan[6])
                {
                    temp[6] = pakistan[6];
                }
                if (input == pakistan[7])
                {
                    temp[7] = pakistan[7];
                }
                if (input != pakistan[0] && input != pakistan[1] && input != pakistan[2] && input != pakistan[3] && input != pakistan[4] && input != pakistan[5] && input != pakistan[6] && input != pakistan[7])
                {
                    mistakes++;
                    wrong[j] = input;
                    j++;
                }
                cout << endl;
            }
        }

        if (n==2)
        {
            char china[5];
            china[0]='c';
            china[1]='h';
            china[2]='i';
            china[3]='n';
            china[4]='a';
            char temp[5];
            temp[0]='_';
            temp[1]='_';
            temp[2]='_';
            temp[3]='_';
            temp[4]='_';
            char wrong[7]={'_','_','_','_','_','_','_'};
            int j=0;

            char input;
            while (status!=1&&status!=0) //1=win, 0=defeat
            {
                //more if else yay (mistakes go here)
                if (mistakes==7)
                {
                    cout<<endl;
                    cout << " ____        __            _   _ \n";
                    cout << "|  _ \\  ___ / _| ___  __ _| |_| |\n";
                    cout << "| | | |/ _ \\ |_ / _ \\/ _` | __| |\n";
                    cout << "| |_| |  __/  _|  __/ (_| | |_|_|\n";
                    cout << "|____/ \\___|_|  \\___|\\__,_|\\__(_)\n";
                    cout<<endl;
                    cout<<"The Word was: \n";
                    cout<<china[0]<<china[1]<<china[2]<<china[3]<<china[4]<<endl;
                    cout<<endl;
                    system("pause");
                    status=0;
                    return 0;
                }
                //add if for win position, if empty array with '-' equals to cat array
                 
                if (temp[0] == 'c' && temp[1] == 'h' && temp[2] == 'i' && temp[3] == 'n' && temp[4] == 'a' )
                {
                    cout<<endl;
                    cout << " __     ___      _                   _ " << endl;
                    cout << " \\ \\   / (_) ___| |_ ___  _ __ _   _| |" << endl;
                    cout << "  \\ \\ / /| |/ __| __/ _ \\| '__| | | | |" << endl;
                    cout << "   \\ V / | | (__| || (_) | |  | |_| |_|" << endl;
                    cout << "    \\_/  |_\\___|\\__\\___/|_|   \\__, (_)" << endl;
                    cout << "                               |___/   " << endl;
                    status=1;
                    cout<<endl;
                    system("pause");
                    return 0;
                }

                //mistakes (artwork)
                if (mistakes==0)
                {
                    mistake0();
                }
                if (mistakes==1)
                {
                    mistake1();
                }
                if (mistakes==2)
                {
                    mistake2();
                }
                if (mistakes==3)
                {
                    mistake3();
                }
                if (mistakes==4)
                {
                    mistake4();
                }
                if (mistakes==5)
                {
                    mistake5();
                }
                if (mistakes==6)
                {
                    mistake6();
                }
                if (mistakes==7)
                {
                    mistake7();
                }

                cout<<endl;
                cout<<"Word: "<<temp[0]<<temp[1]<<temp[2]<<temp[3]<<temp[4]<<endl;
                cout<<endl;
                cout<<"Wrong Guesses: \n";
                cout << " _____\n";
                cout << "|" << wrong[0] << "|" << wrong[1] << "|" << wrong[2] << "|\n";
                cout << "|" << wrong[3] << "|" << wrong[4] << "|" << wrong[5] << "|\n";
                cout << "|" << wrong[6] << "|" << " \n";
                cout<<endl;
                cout<<"Input: ";
                cin>>input;
                if (input==china[0])
                {
                    temp[0]=china[0];
                }
                if (input==china[1])
                {
                    temp[1]=china[1];
                }
                if (input==china[2])
                {
                    temp[2]=china[2];
                }
                if (input==china[3])
                {
                    temp[3]=china[3];
                }
                if (input==china[4])
                {
                    temp[4]=china[4];
                }
                if (input!=china[0]&&input!=china[1]&&input!=china[3]&&input!=china[4])
                {
                    mistakes++;
                    wrong[j]=input;
                    j++;
                }
                cout<<endl;
                
            }
        }
        if (n==3)
        {
            char india[5];
            india[0]='i';
            india[1]='n';
            india[2]='d';
            india[3]='i';
            india[4]='a';
            char temp[5];
            temp[0]='_';
            temp[1]='_';
            temp[2]='_';
            temp[3]='_';
            temp[4]='_';
            char wrong[7]={'_','_','_','_','_','_','_'};
            int j=0;

            char input;
            while (status!=1&&status!=0) //1=win, 0=defeat
            {
                //more if else yay (mistakes go here)
                if (mistakes==7)
                {
                    cout<<endl;
                    cout << " ____        __            _   _ \n";
                    cout << "|  _ \\  ___ / _| ___  __ _| |_| |\n";
                    cout << "| | | |/ _ \\ |_ / _ \\/ _` | __| |\n";
                    cout << "| |_| |  __/  _|  __/ (_| | |_|_|\n";
                    cout << "|____/ \\___|_|  \\___|\\__,_|\\__(_)\n";
                    cout<<endl;
                    cout<<"The Word was: \n";
                    cout<<india[0]<<india[1]<<india[2]<<india[3]<<india[4]<<endl;
                    cout<<endl;
                    system("pause");
                    status=0;
                    return 0;
                }
                //add if for win position, if empty array with '-' equals to cat array
                 
                if (temp[0]=='i'&&temp[1]=='n'&&temp[2]=='d'&&temp[3]=='i'&&temp[4]=='a')
                {
                    cout<<endl;
                    cout << " __     ___      _                   _ " << endl;
                    cout << " \\ \\   / (_) ___| |_ ___  _ __ _   _| |" << endl;
                    cout << "  \\ \\ / /| |/ __| __/ _ \\| '__| | | | |" << endl;
                    cout << "   \\ V / | | (__| || (_) | |  | |_| |_|" << endl;
                    cout << "    \\_/  |_\\___|\\__\\___/|_|   \\__, (_)" << endl;
                    cout << "                               |___/   " << endl;
                    status=1;
                    cout<<endl;
                    system("pause");
                    return 0;
                }

                //mistakes (artwork)
                if (mistakes==0)
                {
                    mistake0();
                }
                if (mistakes==1)
                {
                    mistake1();
                }
                if (mistakes==2)
                {
                    mistake2();
                }
                if (mistakes==3)
                {
                    mistake3();
                }
                if (mistakes==4)
                {
                    mistake4();
                }
                if (mistakes==5)
                {
                    mistake5();
                }
                if (mistakes==6)
                {
                    mistake6();
                }
                if (mistakes==7)
                {
                    mistake7();
                }

                cout<<endl;
                cout<<"Word: "<<temp[0]<<temp[1]<<temp[2]<<temp[3]<<temp[4]<<endl;
                cout<<endl;
                cout<<"Wrong Guesses: \n";
                cout << " _____\n";
                cout << "|" << wrong[0] << "|" << wrong[1] << "|" << wrong[2] << "|\n";
                cout << "|" << wrong[3] << "|" << wrong[4] << "|" << wrong[5] << "|\n";
                cout << "|" << wrong[6] << "|" << " \n";
                cout<<endl;
                cout<<"Input: ";
                cin>>input;
                if (input==india[0])
                {
                    temp[0]=india[0];
                }
                if (input==india[1])
                {
                    temp[1]=india[1];
                }
                if (input==india[2])
                {
                    temp[2]=india[2];
                }
                if (input==india[3])
                {
                    temp[3]=india[3];
                }
                if (input==india[4])
                {
                    temp[4]=india[4];
                }
                if (input!=india[0]&&input!=india[1]&&input!=india[2]&&input!=india[3]&&input!=india[4])
                {
                    mistakes++;
                    wrong[j]=input;
                    j++;
                }
                cout<<endl;
                
            }
        }
        if (n==4)
        {
            char brazil[6];
            brazil[0]='b';
            brazil[1]='r';
            brazil[2]='a';
            brazil[3]='z';
            brazil[4]='i';
            brazil[5]='l';
            char temp[6];
            temp[0]='_';
            temp[1]='_';
            temp[2]='_';
            temp[3]='_';
            temp[4]='_';
            temp[5]='_';
            char wrong[7]={'_','_','_','_','_','_','_'};
            int j=0;

            char input;
            while (status!=1&&status!=0) //1=win, 0=defeat
            {
                //more if else yay (mistakes go here)
                if (mistakes==7)
                {
                    cout<<endl;
                    cout << " ____        __            _   _ \n";
                    cout << "|  _ \\  ___ / _| ___  __ _| |_| |\n";
                    cout << "| | | |/ _ \\ |_ / _ \\/ _` | __| |\n";
                    cout << "| |_| |  __/  _|  __/ (_| | |_|_|\n";
                    cout << "|____/ \\___|_|  \\___|\\__,_|\\__(_)\n";
                    cout<<endl;
                    cout<<"The Word was: \n";
                    cout<<brazil[0]<<brazil[1]<<brazil[2]<<brazil[3]<<brazil[4]<<brazil[5]<<endl;
                    cout<<endl;
                    system("pause");
                    status=0;
                    return 0;
                }
                //add if for win position, if empty array with '-' equals to cat array
                 
                if (temp[0]=='b'&&temp[1]=='r'&&temp[2]=='a'&&temp[3]=='z'&&temp[4]=='i'&&temp[5]=='l')
                {
                    cout<<endl;
                    cout << " __     ___      _                   _ " << endl;
                    cout << " \\ \\   / (_) ___| |_ ___  _ __ _   _| |" << endl;
                    cout << "  \\ \\ / /| |/ __| __/ _ \\| '__| | | | |" << endl;
                    cout << "   \\ V / | | (__| || (_) | |  | |_| |_|" << endl;
                    cout << "    \\_/  |_\\___|\\__\\___/|_|   \\__, (_)" << endl;
                    cout << "                               |___/   " << endl;
                    status=1;
                    cout<<endl;
                    system("pause");
                    return 0;
                }

                //mistakes (artwork)
                if (mistakes==0)
                {
                    mistake0();
                }
                if (mistakes==1)
                {
                    mistake1();
                }
                if (mistakes==2)
                {
                    mistake2();
                }
                if (mistakes==3)
                {
                    mistake3();
                }
                if (mistakes==4)
                {
                    mistake4();
                }
                if (mistakes==5)
                {
                    mistake5();
                }
                if (mistakes==6)
                {
                    mistake6();
                }
                if (mistakes==7)
                {
                    mistake7();
                }

                cout<<endl;
                cout<<"Word: "<<temp[0]<<temp[1]<<temp[2]<<temp[3]<<temp[4]<<temp[5]<<endl;
                cout<<endl;
                cout<<"Wrong Guesses: \n";
                cout << " _____\n";
                cout << "|" << wrong[0] << "|" << wrong[1] << "|" << wrong[2] << "|\n";
                cout << "|" << wrong[3] << "|" << wrong[4] << "|" << wrong[5] << "|\n";
                cout << "|" << wrong[6] << "|" << " \n";
                cout<<endl;
                cout<<"Input: ";
                cin>>input;
                if (input==brazil[0])
                {
                    temp[0]=brazil[0];
                }
                else if (input==brazil[1])
                {
                    temp[1]=brazil[1];
                }
                else if (input==brazil[2])
                {
                    temp[2]=brazil[2];
                }
                else if (input==brazil[3])
                {
                    temp[3]=brazil[3];
                }
                else if (input==brazil[4])
                {
                    temp[4]=brazil[4];
                }
                else if (input==brazil[5])
                {
                    temp[5]=brazil[5];
                }
                else
                {
                    mistakes++;
                    wrong[j]=input;
                    j++;
                }
                cout<<endl;
                
            }
        }
        if (n==5)
        {
            char italy[5];
            italy[0]='i';
            italy[1]='t';
            italy[2]='a';
            italy[3]='l';
            italy[4]='y';
            char temp[5];
            temp[0]='_';
            temp[1]='_';
            temp[2]='_';
            temp[3]='_';
            temp[4]='_';
            char wrong[7]={'_','_','_','_','_','_','_'};
            int j=0;

            char input;
            while (status!=1&&status!=0) //1=win, 0=defeat
            {
                //more if else yay (mistakes go here)
                if (mistakes==7)
                {
                    cout<<endl;
                    cout << " ____        __            _   _ \n";
                    cout << "|  _ \\  ___ / _| ___  __ _| |_| |\n";
                    cout << "| | | |/ _ \\ |_ / _ \\/ _` | __| |\n";
                    cout << "| |_| |  __/  _|  __/ (_| | |_|_|\n";
                    cout << "|____/ \\___|_|  \\___|\\__,_|\\__(_)\n";
                    cout<<endl;
                    cout<<"The Word was: \n";
                    cout<<italy[0]<<italy[1]<<italy[2]<<italy[3]<<italy[4]<<endl;
                    cout<<endl;
                    system("pause");
                    status=0;
                    return 0;
                }
                //add if for win position, if empty array with '-' equals to cat array
                 
                if (temp[0]=='i'&&temp[1]=='t'&&temp[2]=='a'&&temp[3]=='l'&&temp[4]=='y')
                {
                    cout<<endl;
                    cout << " __     ___      _                   _ " << endl;
                    cout << " \\ \\   / (_) ___| |_ ___  _ __ _   _| |" << endl;
                    cout << "  \\ \\ / /| |/ __| __/ _ \\| '__| | | | |" << endl;
                    cout << "   \\ V / | | (__| || (_) | |  | |_| |_|" << endl;
                    cout << "    \\_/  |_\\___|\\__\\___/|_|   \\__, (_)" << endl;
                    cout << "                               |___/   " << endl;
                    status=1;
                    cout<<endl;
                    system("pause");
                    return 0;
                }

                //mistakes (artwork)
                if (mistakes==0)
                {
                    mistake0();
                }
                if (mistakes==1)
                {
                    mistake1();
                }
                if (mistakes==2)
                {
                    mistake2();
                }
                if (mistakes==3)
                {
                    mistake3();
                }
                if (mistakes==4)
                {
                    mistake4();
                }
                if (mistakes==5)
                {
                    mistake5();
                }
                if (mistakes==6)
                {
                    mistake6();
                }
                if (mistakes==7)
                {
                    mistake7();
                }

                cout<<endl;
                cout<<"Word: "<<temp[0]<<temp[1]<<temp[2]<<temp[3]<<temp[4]<<endl;
                cout<<endl;
                cout<<"Wrong Guesses: \n";
                cout << " _____\n";
                cout << "|" << wrong[0] << "|" << wrong[1] << "|" << wrong[2] << "|\n";
                cout << "|" << wrong[3] << "|" << wrong[4] << "|" << wrong[5] << "|\n";
                cout << "|" << wrong[6] << "|" << " \n";
                cout<<endl;
                cout<<"Input: ";
                cin>>input;
                if (input==italy[0])
                {
                    temp[0]=italy[0];
                }
                else if (input==italy[1])
                {
                    temp[1]=italy[1];
                }
                else if (input==italy[2])
                {
                    temp[2]=italy[2];
                }
                else if (input==italy[3])
                {
                    temp[3]=italy[3];
                }
                else if (input==italy[4])
                {
                    temp[4]=italy[4];
                }
                else
                {
                    mistakes++;
                    wrong[j]=input;
                    j++;
                }
                cout<<endl;
                
            }
        }
        if (n==6)
        {
            char niger[5];
            niger[0]='n';
            niger[1]='i';
            niger[2]='g';
            niger[3]='e';
            niger[4]='r';
            char temp[5];
            temp[0]='_';
            temp[1]='_';
            temp[2]='_';
            temp[3]='_';
            temp[4]='_';
            char wrong[7]={'_','_','_','_','_','_','_'};
            int j=0;

            char input;
            while (status!=1&&status!=0) //1=win, 0=defeat
            {
                //more if else yay (mistakes go here)
                if (mistakes==7)
                {
                    cout<<endl;
                    cout << " ____        __            _   _ \n";
                    cout << "|  _ \\  ___ / _| ___  __ _| |_| |\n";
                    cout << "| | | |/ _ \\ |_ / _ \\/ _` | __| |\n";
                    cout << "| |_| |  __/  _|  __/ (_| | |_|_|\n";
                    cout << "|____/ \\___|_|  \\___|\\__,_|\\__(_)\n";
                    cout<<endl;
                    cout<<"The Word was: \n";
                    cout<<niger[0]<<niger[1]<<niger[2]<<niger[3]<<niger[4]<<endl;
                    system("pause");
                    status=0;
                    return 0;
                }
                //add if for win position, if empty array with '-' equals to cat array
                 
                if (temp[0]=='n'&&temp[1]=='i'&&temp[2]=='g'&&temp[3]=='e'&&temp[4]=='r')
                {
                    cout<<endl;
                    cout << " __     ___      _                   _ " << endl;
                    cout << " \\ \\   / (_) ___| |_ ___  _ __ _   _| |" << endl;
                    cout << "  \\ \\ / /| |/ __| __/ _ \\| '__| | | | |" << endl;
                    cout << "   \\ V / | | (__| || (_) | |  | |_| |_|" << endl;
                    cout << "    \\_/  |_\\___|\\__\\___/|_|   \\__, (_)" << endl;
                    cout << "                               |___/   " << endl;
                    status=1;
                    cout<<endl;
                    system("pause");
                    return 0;
                }

                //mistakes (artwork)
                if (mistakes==0)
                {
                    mistake0();
                }
                if (mistakes==1)
                {
                    mistake1();
                }
                if (mistakes==2)
                {
                    mistake2();
                }
                if (mistakes==3)
                {
                    mistake3();
                }
                if (mistakes==4)
                {
                    mistake4();
                }
                if (mistakes==5)
                {
                    mistake5();
                }
                if (mistakes==6)
                {
                    mistake6();
                }
                if (mistakes==7)
                {
                    mistake7();
                }

                cout<<endl;
                cout<<"Word: "<<temp[0]<<temp[1]<<temp[2]<<temp[3]<<temp[4]<<endl;
                cout<<endl;
                cout<<"Wrong Guesses: \n";
                cout << " _____\n";
                cout << "|" << wrong[0] << "|" << wrong[1] << "|" << wrong[2] << "|\n";
                cout << "|" << wrong[3] << "|" << wrong[4] << "|" << wrong[5] << "|\n";
                cout << "|" << wrong[6] << "|" << " \n";
                cout<<endl;
                cout<<"Input: ";
                cin>>input;
                if (input==niger[0])
                {
                    temp[0]=niger[0];
                }
                else if (input==niger[1])
                {
                    temp[1]=niger[1];
                }
                else if (input==niger[2])
                {
                    temp[2]=niger[2];
                }
                else if (input==niger[3])
                {
                    temp[3]=niger[3];
                }
                else if (input==niger[4])
                {
                    temp[4]=niger[4];
                }
                else
                {
                    mistakes++;
                    wrong[j]=input;
                    j++;
                }
                cout<<endl;
                
            }
        }
    }

    return 0;
} }

// the word was bee
//tomato (didnt work on updating word is victory = true)