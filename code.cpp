//Summative.cpp
//Alex Blagojevic
//
//Chemistry Aid
#include <iostream>
#include <windows.h>//calls windows commands
#include <string>
#include <fstream>
#include <conio.h>
#include <stdio.h>
#include <cstdlib>
using namespace std;

//function prototypes
int PeriodicTable (void);//periodic table function
int textbook (void);//textbook function
int navHelp (void);//navigation help function
int nameCom (void);//naming compounds function
int gloss (void);//glossary function
int quiz (void);//quiz on all units

int JuniorList (string name);//presents a list to the students


int main()
{
    string name;//string for users name
    bool isNameNull;//determines if the name is blank or not

    cout<<"Welcome To The Junior Chemistry Assistance Program, Created For Students."<<endl;//welcoming statement
    cout<<"Created By: Alex Blagojevic"<<endl;
    cout<<endl;//space for user readability
    system("pause");
    system ("cls");//something that will clear the screen

    cout<<"What Is Your Name?"<<endl;//something that asks user name

    do
    {
        getline(cin,name);//name input, getline will allow for spaces

        if (!name.empty() )//if name is not empty, continue through the loop
        {
            break;//contibnues through the loop
        }

        else//else it must be blank, and nameNull is true
            system ("cls");
        cout<<"Enter A Name Please"<<endl;
        isNameNull == true;

    }
    while (isNameNull == true);//loop until nameNull is false

    system ("cls");//something that will clear the screen
    cout<<"*  *  *  *  *  *  *  *  *  * "<<endl;
    cout<<"*  Enter 1 If You Are lost *"<<endl;//some sort of helping statement, that lets the user know that there is help
    cout<<"*  *  *  *  *  *  *  *  *  *"<<endl;
    cout<<endl;

    JuniorList (name);//brings user to juniorlist function, where all other functions are linked to
    return 0;
}


int JuniorList (string name)//displays the list to junior stduents, the string name is the users name input
{

    //vars
    int listnum;//A number that corresponds to a certain choice, 1-8

    do//loops untill the listing number is equal to 8
    {

        system ("color f");//makes sure the colour is white
        cout<<"Home//Menu"<<endl;//something that tells the user where they are
        cout<<endl;//space for clearness
        cout<<"Welcome To The Junior Chemistry Assistance Program"<<endl;
        cout<<endl;

        //list that the junior's can access
        cout<<"1. Navigation Help"<<endl;
        cout<<"2. Periodic table"<<endl;
        cout<<"3. Text Book"<<endl;
        cout<<"4. Naming Compounds"<<endl;
        cout<<"5. Chemical Reactions"<<endl;
        cout<<"6. Quiz"<<endl;
        cout<<"7. Glossary"<<endl;
        cout<<"8. Exit"<<endl;

        do//do/while loop to see if listnum is a valid choice
        {
            cout<<endl;
            cout<<"User\\"<<name<<">";
            cin>>listnum;//integer that coresponds to the above list, an input

            if (cin.fail () || listnum <1 || listnum >8)//if listnum is less than one or greater than 8, proced with a error statement
            {
                cout<<"'"<<listnum<<"'"<<" Not Recognized As A Listing Number"<<endl;//some type of error stetment
                cin.clear ();
                cin.ignore (100,'\n');//buffer
            }

        }
        while (cin.fail () || listnum <1 || listnum >8 );//while the condition is true,


        system("cls");

        if (listnum  == 1)//Navigation menu
        {
            system ("color a");
            navHelp ();
        }

        if (listnum == 2)//perodic table if statement
        {
            system ("color b");
            PeriodicTable ();//calls the periodic table function
        }

        if (listnum == 3)//textbook
        {
            system ("color c");
            textbook ();
        }

        if (listnum == 4)//textbook
        {
            system ("color d");
//function ();
        }

        if (listnum == 5)//textbook
        {
            system ("color e");
            //function ();
        }
        if (listnum == 6)//textbook
        {
            system ("color 1");
            quiz ();
        }

        if (listnum == 7)//glossary
        {
            system ("color e");
            gloss ();
        }


    }
    while (listnum != 8);  //do all the above while lstnum is not 8

    system("cls");
    cout<<"Thank you for using the junior chemistry assistance program."<<endl;
    cout<<"Created by: Alex Blagojevic"<<endl;
    return 0;
}

int  PeriodicTable (void)
{

    ifstream file("peri info.txt");
    string line;
    int lineNum = 1;
    int reqLine = reqLine;


    cout<<"Home//Menu//Periodic table"<<endl;
    cout<<"     1                                                                                                        18  "<<endl;
    cout<<"  |----|                                                                                                  |------|"<<endl;
    cout<<"1 | H1 |  2                                                                  13    14     15    16     17 | He2  |"<<endl;
    cout<<"  |----+-----|                                                           |------+-------------------------+------|"<<endl;
    cout<<"2 |Li3 |Be4  |                                                           |B5    |C6    |N7    |O8    |F9  |Ne10  |"<<endl;
    cout<<"  |----+-----|                                                           |------+------+------+------+----+------|"<<endl;
    cout<<"3 |Na11|Mg12 |  3    4     5      6    7     8    9      10    11    12  |Al13  |Si14  |P15   |S16   |Cl17|Ar18  |"<<endl;
    cout<<"  |----+-----+------------------------------------------------------------------+------+------+------+----+------|"<<endl;
    cout<<"4 |K19 |Ca20 |Sc21|Ti22 |V23  |Cr24 |Mn25 |Fe26 |Co27 |Ni28 |Cu29 |Zn30  |Ga31  |Ge32  |As33  |Se34  |Br35|Kr36  |"<<endl;
    cout<<"  |----+-----+----+-----+-----+-----+-----+-----+-----+-----+-----+------+------+------+------+------+----+------|"<<endl;
    cout<<"5 |Rb37|Sr38 |Y39 |Zr40 |Nb41 |Mo42 |Tc43 |Ru44 |Rh45 |Pd46 |Ag47 |Cd48  |In49  |Sn50  |Sb51  |Te52  |I53 |Xe54  |"<<endl;
    cout<<"  |----+-----+----+-----+-----+-----+-----+-----+-----+-----+-----+------+------+------+------+------+---+-------|"<<endl;
    cout<<"6 |Cs55|Ba56 |LA57|Hf72 |Ta73 |W74  |Re75 |Os76 |Ir77 |Pt78 |Au79 |Hg80  |Tl81  |Pb82  |Bi83  |Po84  |At85|Rn86  |"<<endl;
    cout<<"  |----+-----+----+-----+-----+-----+-----+-----+-----+-----+-----+------+------+------+------+------+----+------|"<<endl;
    cout<<"7 |Fr87|Ra88 |Ac89|Rf104|Db105|Sg106|Bh107|Hs108|Mt109|Ds110|Rg111|Uub112|Uut113|Uuq114|Uup115|Uuh116|    |Uuo118|"<<endl;
    cout<<"  |--------------------------------------------------------------------------------------------------------------|"<<endl;
    cout<<endl;
    cout<<"  |--------------------------------------------------------------------------------------|"<<endl;
    cout<<"  |Ce58 |Pr59 |Nd60 |Pm61 |Sm62 |Eu63 |Gd64 |Tb65 |Dy66 |Ho67 |Er68  |Tm69  |Yb70  |Lu71 |"<<endl;
    cout<<"  |-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+------+------+------+-----|"<<endl;
    cout<<"  |Th90 |Pa91 |U92  |Np93 |Pu94 |Am95 |Cm96 |Bk97 |Cf98 |Es99 |Fm100 |Md101 |No102 |Lr103|"<<endl;
    cout<<"  |--------------------------------------------------------------------------------------|"<<endl;
    cout<<endl;
    cout<<"Enter A Elements Atomic Number From The Table For More Details."<<endl;
    cout<<"Enter '-1' To Cancel 0r '-2' For Help."<<endl;
    cout<<"You Will Continue To The Menu After."<<endl;
    cout<<endl;

    cin>> reqLine;
    cout<<endl;

    while (getline(file, line))
    {
        if (lineNum == reqLine)
        {
            cout<<line<<endl;
        }
        lineNum++;
    }

    if (reqLine ==-2 )
    {
        cout<<"Welcome To The Help Option For The Periodic Table."<<endl;
        cout<<"If you would like more details on an element, enter its atomic number."<<endl;
        cout<<"Example, if you wanted more information on hydrogen, you would enter 1, its atomic number."<<endl;
    }

    if (reqLine >118 || reqLine == isalpha(reqLine) )
    {
        cout<<"Not A Valid Element"<<endl;
    }

    if (reqLine ==-1 )
    {
        cout<<"Canceling";
        Sleep(90);
        cout<<".";
        Sleep(90);
        cout<<".";
        Sleep(90);
        cout<<"."<<endl;
    }
    cout<<endl;
    system("pause");
    system("cls");
}

int textbook (void)
{
    //varibles
    int textNum;//which option to use in the textbook

    cout<<"Home//Menu//textbook"<<endl;
    cout<<endl;
    cout<<"Welcome To The Junior Chemistry Textbook"<<endl;
    cout<<endl;
    cout<<"Please Enter a Chapter Number From The Table Of Contents You"<<endl;
    cout<<"Wish To Access."<<endl;
    cout<<endl;
    cout<<"Table Of Contents"<<endl;
    cout<<"1. Chemical Reactions"<<endl;
    cout<<"2. Representing Molecular Compounds"<<endl;
    cout<<"3. Synthesis and Decomposition Reactions"<<endl;
    cout<<"4. Identifying Acids and Bases"<<endl;
    cout<<"5. Exit "<<endl;

    do
    {
        cin>>textNum;

        if (cin.fail () || textNum <1 || textNum >5 || textNum == isalpha(textNum))//while it is in a listing number choice
        {
            cout<<"'"<<textNum<<"'"<<" Not A Textbook Chapter"<<endl;
            cin.clear ();
            cin.ignore (100,'\n');
        }

        if (textNum == 1)
        {
            cout<<"Chemical Reactions"<<endl;
            cout<<endl;
            system("pause");
            system("cls");

        }

        if (textNum == 2)
        {
            cout<<"Representing Molecular Compounds"<<endl;
            cout<<endl;
            system("pause");
            system("cls");
        }

        if (textNum == 3)
        {
            cout<<"Synthesis and Decomposition Reactions"<<endl;
            cout<<endl;
            system("pause");
            system("cls");
        }

        if (textNum == 4)
        {
            cout<<"4. Identifying Acids and Bases"<<endl;
            cout<<endl;
            system("pause");
            system("cls");

        }

        if (textNum == 5)
        {
            break;
        }
    }
    while (cin.fail () || textNum <1 || textNum >5 || textNum == isalpha(textNum));

    system("pause");
    system("cls");
}

int navHelp (void)
{

    system("cls");//clears the screen
    cout<<"Home//Menu//Navigation Help"<<endl;
    cout<<endl;//makes it so the user can read instructions better
    cout<<"Welcome To The Junior Chemistry Assistance Navigation Menu"<<endl;
    system("pause");//improves readability
    cout<<endl;
    cout<<"This program was designed to help junior year students with their chemistry studies."<<endl;
    cout<<"To Navigate the program, simply use the menu and enter the number that corresponds "<<endl;
    cout<<"to what you would like to look at."<<endl;
    system("pause");
    cout<<endl;
    cout<<"Example, say the periodic table was needed. Here is the menu."<<endl;
    cout<<endl;
    cout<<"1. Navigation Help"<<endl;
    cout<<"2. Periodic table"<<endl;
    cout<<"3. Exit"<<endl;
    cout<<endl;
    cout<<"2 would be entered, as it is the periodic table's listing number."<<endl;
    cout<<endl;
    cout<<"Here is partly what to expect."<<endl;
    cout<<"  -----                                                               -----"<<endl;
    cout<<"1 | H |                                                               |He |"<<endl;
    cout<<"  |---+----                                       --------------------+---|"<<endl;
    cout<<"2 |Li |Be |                                       | B | C | N | O | F |Ne |"<<endl;
    cout<<endl;
    system("pause");//waits for user confirmation
    system("cls");//clears the screen
}
int comName (void)
{
    //ask user for number of compounds and what form their name is in (binary, teriairy etc...)
    //make a file similar to periTable, it will access the file depending on which tanslation is needed
}  //also ask user for number of valence electrons (maybe for like iron or something)

int gloss (void)
{
    cout<<"Home//Menu//Glossary"<<endl;
    cout<<endl;

    char qq = getch();

    cout<<"Press The First Letter Of Which Word You Want"<<endl;
    cout<<"Press '1' to exit"<<endl;

    do
    {
        char qq = getch();

        cout<<endl;

        if (qq == 'a' || qq == 'A')
        {
            cout<<"Acid"<<endl;
            cout<<"a compound that produces hydrogen ions,"<<endl;
            cout<<"H+(aq), when dissolved in water."<<endl;
        }

        else if (qq == 'b' || qq == 'B')
        {
            cout<<"Balanced chemical equation"<<endl;
            cout<<"a skeleton equation with coefficients added"<<endl;
            cout<<"added to balance the number of atoms."<<endl;
        }

        else if (qq == 'c' || qq == 'C')
        {
            cout<<"Cancer"<<endl;
            cout<<"cells with abnormal genetic material that are dividing"<<endl;
            cout<<"uncontrollably and can spread to other body parts."<<endl;
        }

        else if (qq == 'd' || qq == 'D')
        {
            cout<<"Dead Zones"<<endl;
            cout<<"areas in Earth's oceans, lakes and rivers in which a compound breaks"<<endl;
            cout<<"down (decomposes) into two or more simplier compounds or elements ."<<endl;
        }

        else if (qq == 'e' || qq == 'E')
        {
            cout<<"Ecoregion"<<endl;
            cout<<"a subdivision of an ecozone that is characterized by"<<endl;
            cout<<"local landforms such as plains, lakes, mountains and rivers."<<endl;
        }

        else if (qq == 'f' || qq == 'F')
        {
            cout<<"Feedback loop"<<endl;
            cout<<""<<endl;
            cout<<"."<<endl;
        }

        else if (qq == 'g' || qq == 'G')
        {
            cout<<"G"<<endl;
            cout<<""<<endl;
            cout<<"."<<endl;
        }

        else if (qq == 'h' || qq == 'H')
        {
            cout<<"H"<<endl;
            cout<<""<<endl;
            cout<<"."<<endl;
        }

        else if (qq == 'i' || qq == 'I')
        {
            cout<<"I"<<endl;
            cout<<""<<endl;
            cout<<"."<<endl;
        }

        else if (qq == 'j' || qq == 'J')
        {
            cout<<"J"<<endl;
            cout<<""<<endl;
            cout<<"."<<endl;
        }

        else if (qq == 'k' || qq == 'K')
        {
            cout<<"K"<<endl;
            cout<<""<<endl;
            cout<<"."<<endl;
        }

        else if (qq == 'l' || qq == 'L')
        {
            cout<<"L"<<endl;
            cout<<""<<endl;
            cout<<"."<<endl;
        }

        else if (qq == 'm' || qq == 'M')
        {
            cout<<"M"<<endl;
            cout<<""<<endl;
            cout<<"."<<endl;
        }

        else if (qq == 'n' || qq == 'N')
        {
            cout<<"N"<<endl;
            cout<<""<<endl;
            cout<<"."<<endl;
        }

        else if (qq == 'o' || qq == 'O')
        {
            cout<<"O"<<endl;
            cout<<""<<endl;
            cout<<"."<<endl;
        }

        else if (qq == 'p' || qq == 'P')
        {
            cout<<"P"<<endl;
            cout<<""<<endl;
            cout<<"."<<endl;
        }

        else if (qq == 'q' || qq == 'Q')
        {
            cout<<"Q"<<endl;
            cout<<""<<endl;
            cout<<"."<<endl;
        }

        else if (qq == 'r' || qq == 'R')
        {
            cout<<"R"<<endl;
            cout<<""<<endl;
            cout<<"."<<endl;
        }

        else if (qq == 's' || qq == 'S')
        {
            cout<<"S"<<endl;
            cout<<""<<endl;
            cout<<"."<<endl;
        }

        else if (qq == 't' || qq == 'T')
        {
            cout<<"T"<<endl;
            cout<<""<<endl;
            cout<<"."<<endl;
        }

        else if (qq == 'u' || qq == 'U')
        {
            cout<<"U"<<endl;
            cout<<""<<endl;
            cout<<"."<<endl;
        }

        else if (qq == 'v' || qq == 'V')
        {
            cout<<"V"<<endl;
            cout<<""<<endl;
            cout<<"."<<endl;
        }

        else if (qq == 'w' || qq == 'W')
        {
            cout<<"W"<<endl;
            cout<<""<<endl;
            cout<<"."<<endl;
        }

        else if (qq == 'x' || qq == 'X')
        {
            cout<<"X"<<endl;
            cout<<""<<endl;
            cout<<"."<<endl;
        }

        else if (qq == 'y' || qq == 'Y')
        {
            cout<<"Y"<<endl;
            cout<<""<<endl;
            cout<<"."<<endl;
        }

        else if (qq == 'z' || qq == 'Z')
        {
            cout<<"Z"<<endl;
            cout<<""<<endl;
            cout<<"."<<endl;
        }

        else if (qq == '1')
        {
            break;
        }

        else
            cout<<"Invalid Key"<<endl;
    }
    while (qq != '1');

    cout<<"Press Any Key To Exit"<<endl;
    system("pause > null");
    system("cls");

}
int quiz (void)
{
    ofstream outFile;

    char YesOrNo;
    char answer[] = "abcd";//ANSWER array with abcd
    char q1;

    double total = 0;

    cout<<"Home//Menu//Quiz"<<endl;
    cout<<endl;
    cout<<"Welcome To The Quiz"<<endl;
    cout<<"It Is Recomended You Complete All Chapters In The Textbook Before Proceding."<<endl;
    cout<<endl;
    cout<<"Would You Like To Proceed? (y/n)"<<endl;

    do
    {
        cin>> YesOrNo;

        if (YesOrNo == 'y' || YesOrNo == 'n')
        {
            if (YesOrNo == 'y' )
            {
                system ("color a");
                cout<<"You Chose Yes"<<endl;
                Sleep(700);
                system ("color 1");
                system ("cls");
                cout<<"There Will 10 Questions For Each Unit (10*4 = 40 Questions)"<<endl;
                cout<<endl;
                cout<<"You Will Be Given Your Score At The End"<<endl;
                cout<<endl;
                cout<<"Anything Other Than The Correct Answer WILL BE CONSIDERED INCORRECT."<<endl;
                cout<<endl;
                cout<<"There IS NO WAY To Save The Quiz, It Must Be Completed In One Go. Also Turn Caps Lock OFF."<<endl;
                cout<<"A File Named 'Recent Chemistry Quiz.txt' Will Be Created After You Finish The Quiz"<<endl;
                cout<<"Press any key to continue to the quiz...";

                system ("pause > null");
                system ("cls");

                outFile.open ("Recent Chemistry Quiz.txt");
                cout<<"Question 1."<<endl;
                outFile<<"Question 1."<<endl;
                cout<<"A(n) - - - - is a substance that can be broken down into elements by chemical means."<<endl;
                outFile<<"A(n) - - - - is a substance that can be broken down into elements by chemical means."<<endl;
                outFile<<endl;
                cout<<"a. Ion"<<endl;
                outFile<<"a. Ion"<<endl;
                cout<<"b. Metal"<<endl;
                outFile<<"b. Metal"<<endl;
                cout<<"c. Compound"<<endl;
                outFile<<"c. Compound"<<endl;
                cout<<"d. Element"<<endl;
                outFile<<"d. Element"<<endl;
                cin>>q1;
                outFile<<q1<<endl;
                cout<<endl;

                if (q1 == answer[2])
                {
                    outFile<<"Correct"<<endl;
                    cout<<"Correct"<<endl;
                    total++;
                }
                else
                {
                    outFile<<"Incorrect"<<endl;
                    cout<<"Incorrect"<<endl;
                }
                system ("pause");
                outFile<<endl;
                cout<<endl;
                outFile<<"Question 2."<<endl;
                cout<<"Question 2."<<endl;
                outFile<<"Molecular Compounds Form When A Non-Metal Bonds With A - - - - ."<<endl;
                cout<<"Molecular Compounds Form When A Non-Metal Bonds With A - - - - ."<<endl;
                outFile<<endl;
                cout<<endl;
                outFile<<"a. Metal"<<endl;
                cout<<"a. Metal"<<endl;
                outFile<<"b. Molecules"<<endl;
                cout<<"b. Molecules"<<endl;
                outFile<<"c. Valance"<<endl;
                cout<<"c. Valance"<<endl;
                outFile<<"d. Non-Metal"<<endl;
                cout<<"d. Non-Metal"<<endl;
                cin>>q1;
                outFile<<q1<<endl;
                cout<<endl;

                if (q1 == answer[3])
                {
                    outFile<<"Correct"<<endl;
                    cout<<"Correct"<<endl;
                    total++;
                }
                else
                {
                    outFile<<"Incorrect"<<endl;
                    cout<<"Incorrect"<<endl;
                }

                system ("pause");
                outFile<<endl;
                cout<<endl;

                outFile<<"Question 3."<<endl;
                cout<<"Question 3."<<endl;
                outFile<<"A(n) - - - -  is an atom that has lost or gained valence electrons."<<endl;
                cout<<"A(n) - - - -  is an atom that has lost or gained valence electrons."<<endl;
                outFile<<endl;
                cout<<endl;
                outFile<<"a. Quantum"<<endl;
                cout<<"a. Quantum"<<endl;
                outFile<<"b. Ion"<<endl;
                cout<<"b. Ion"<<endl;
                outFile<<"c. Electron"<<endl;
                cout<<"c. Electron"<<endl;
                outFile<<"d. Nuetron"<<endl;
                cout<<"d. Nuetron"<<endl;
                cin>>q1;
                outFile<<q1<<endl;

                if (q1 == answer[1])
                {
                    outFile<<"Correct"<<endl;
                    cout<<"Correct"<<endl;
                    total++;
                }
                else
                {
                    outFile<<"Incorrect"<<endl;
                    cout<<"Incorrect"<<endl;
                }

                system ("pause");
                outFile<<endl;
                cout<<endl;
                outFile<<"You got "<<total<<" Out Of 3 Questions Correct"<<endl;
                cout<<"You got "<<total<<" Out Of 3 Questions Correct"<<endl;
                outFile<<"Or "<<(total/3)*100<<"%"<<endl;
                cout<<"Or "<<(total/3)*100<<"%"<<endl;

                outFile.close();

                system ("pause");
                system ("cls");
                break;
            }
        }
        else
            cout<<"Enter y or n"<<endl;
        cin.clear ();
        cin.ignore (100,'\n');//buffer

    }

    while (YesOrNo != 'n');

    system ("cls");

}
