#include "Monster.h"

// txt name für Monsterliste: "monsterlist.txt",

int Monster::ID = SetID();

Monster::Monster()
{
    //ctor
}

Monster::Monster(string mN, int a, int b, int p)
{
    monsterName = mN;
    area = a;
    book = b;
    page = p;
}

Monster::~Monster()
{
    //dtor
}

int Monster::SetID()
{
    ifstream sI("monsterlist.txt")

}

void Monster::NewMonster()
{
    SetMonsterName();
    SetBook();
    SetPage();
    SetArea();
}

void Monster::SetArea()
{
    system("cls");
    cout << "Geben sie die Zahl fuer den Zonentypen an und bestaetigen sie mit Enter: \n";
    cout << "1 = Dragorea \n";
    cout << "2 = Frostlande\n";
    cout << "3 = Takasadu\n";
    cout << "4 = Fluss & See\n";
    cout << "5 = Gebirge\n";
    cout << "6 = Kulturlandschaft\n";
    cin >> area;
    switch(area)
    {
        case 1:
            cout << area << " = Dragorea\n";
            break;
        case 2:
            cout << area << " = Frostlande\n";
            break;
        case 3:
            cout << area << " = Takasadu\n";
            break;
        case 4:
            cout << area << " = Fluss und See\n";
            break;
        case 5:
            cout << area << " = Gebirge\n";
            break;
        case 6:
            cout << area << " = Kulturlandschaft\n";
            break;
    }
}

void Monster::SetBook()
{
    system("cls");
    cout << "Geben sie Zahl fuer das Buch an, in welchem das Monster zu finden ist und bestaetigen sie mit Enter:\n";
    cout << "1 = Grundregelwerk\n2 = Bestien & Ungeheuer\n";
    cin >> book;
    cout << "Gewaehlt:\n";
    switch(book)
    {
    case 1:
        cout << book << " = Grundregelwerk\n";
        break;
    case 2:
        cout << book << " = Bestien und Ungeheuer\n";
        break;
    }
}

void Monster::SetPage()
{
    system("cls");
    cout << "Geben sie die Seitenzahl auf der das Monster zu finden ist an und bestaetigen sie mit Enter:\n";
    cin >> page;
}

void Monster::SetMonsterName()
{
    system("cls");
    cout << "Geben sie den Namen des Monsters ein:\n ";
    getline(cin, monsterName);
}

void Monster::SaveMonster()
{
    fstream sM;
    sM.open("monsterlist.txt",ios_base::app);
    if(sM.is_open())
    {
        sm << "ID " << GetID() << endl;
        sM << "Monstername " << GetMonsterName() << endl;
        sM << "Area " << GetArea() << endl;
        sM << "Book " << GetBook() << endl;
        sM << "Page " << GetPage() << endl;
        sM << "\n";
    }
    else
    {
        cout << "Wurde nicht geoeffnet!";
    }
    sM.close();
}

int Monster::GetArea()
{
    return area;
}

int Monster::GetPage()
{
    return page;
}

int Monster::GetBook()
{
    return book;
}

string Monster::GetMonsterName()
{
    return monsterName;
}
