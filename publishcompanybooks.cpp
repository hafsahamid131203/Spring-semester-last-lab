#include <iostream>
#include <string>
 using namespace std;


class publication
{
private:
string title; float price;
public:

void getData()
 {

cout << "Enter title: "; getline(cin, title);
cout << "Enter price: "; cin >> price;
cin.ignore();
// ignore newline character

}

void putData() const
 {

cout << "Title: " << title << endl; cout << "Price: $" << price << endl;
}

};



class book : public publication
{
private:
int page_count; public:
void getData()
{
publication::getData();
cout << "Enter page count: "; cin >> page_count;
cin.ignore();
// ignore newline character

}

void putData() const
{
publication::putData();
cout << "Page count: " << page_count << endl;

}

};



class tape : public publication
{
    private:
float playing_time; public:
void getData()
{
    publication::getData();
cout << "Enter playing time (in minutes): "; cin >> playing_time;
cin.ignore();
// ignore newline character

}

void putData() const
{
    publication::putData();
cout << "Playing time: " << playing_time << " minutes" << endl;

}

};



int main()
{
    book b; tape t;


cout << "Enter book data:\n"; b.getData();
cout << "\nEnter tape data:\n";

t.getData();



cout << "\nBook data:\n"; b.putData();
cout << "\nTape data:\n"; t.putData();


return 0;

}

