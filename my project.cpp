#include <mylib.h>

int main()
{
cout << "The story of some lines." << endl;
getch();
CLS;
cout << "Narrator: Once upon a time, there were lines of code..." << endl;
getch();

cout << "Hi. I am a line of code!" << endl;
getch();

cout << "Hi :D I am a line of code too!" << endl;
getch();

cout << "Narrator: It was all nice and pretty";
getch();

cout << ", until..." << endl;
getch();

cout << "Oh no!!! I am gonna die in 5 seconds :(";
Sleep(5000);
color(12);
cout << "\rI am bad and red >:) HAHHAHAHAHHAHHAHHAHHAHAHHAHAHAH" << endl;
getch();
color(7);
cout << "Narrator: the bad guy came in the town." << endl;
getch();

cout << "UUUUU, That rimed! But still... OH NOOOOOOOOOOO!" << endl;
getch();

cout << "Narrator: All the people were sad.\n\n\n" << endl;
getch();
ifstream END("END.TXT");
for (string line; getline(END, line); )
    {
        cout << line << endl;
    }
    END.close();

cout << "\n\nPress any key to exit...";
getch();
cout << "\nCoder: Or maybe... this story is too short and can't have a sad ending..." << endl;
getch();
cout << "Coder: Maybe...you should be the hero who continues the story and make a happy ending..." << endl;
getch();
cout << "Coder: You should edit CONTINUE.TXT" << endl;
getch();
cout << "Coder: So here is the continuation of the story:" << endl;
getch();
CLS;

ifstream CONTINUE("CONTINUE.TXT");
for (string line; getline(CONTINUE, line); )
    {
        cout << line << endl;
    }
    CONTINUE.close();

    cout << "\n\n\n\n";
for (string line; getline(END, line); )
    {
        cout << line << endl;
    }
    END.close();
    cout << "\n\n\nOK, now press any key to exit... hero!";
}
