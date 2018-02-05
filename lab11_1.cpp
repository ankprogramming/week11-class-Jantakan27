#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    int id;
    // เพิ่มเอาเอง
    string name;
    int age;
    double height;
public:
    Student(int i, string n, int a, double h)
    {
        id = i;
        name = n;
        age = a;
        height = h;

    }

    int getId()
    {
        return id;
    }
    string getName()
    {
       return name;
    }
    int getage()
    {
         return age;
    }
    double getheight()
    {
        return height;
    }

    // เพิ่มเอาเอง
};

int main ()
{
    Student Noctis(36548, "Noctis", 20, 176);
    Student Ignis(36549, "Ignis", 22, 183);
    Student Gladiolus(36550, "Gladiolus", 23, 198);
    Student Prompto(36551, "Prompto", 20, 173);

    cout << "Id : " << Noctis.getId() << endl;
    cout << "Name : " << Noctis.getName() << endl;
    cout << "age : " << Noctis.getage() << endl;
    cout << "height : " << Noctis.getheight() << endl;

    cout << "Id : " << Ignis.getId() << endl;
    cout << "Name : " << Ignis.getName() << endl;
    cout << "age" << Ignis.getage() << endl;
    cout << "height : " << Ignis.getheight() << endl;

    cout << "Id : " <<  Gladiolus.getId() << endl;
    cout << "Name : " <<  Gladiolus.getName() << endl;
    cout << "age : " <<  Gladiolus.getage() << endl;
    cout << "height: " <<  Gladiolus.getheight() << endl;

    cout << "Id : " << Prompto.getId() << endl;
    cout << "Name : " << Prompto.getName() << endl;
    cout << "age: " << Prompto.getage() << endl;
    cout << "height : " << Prompto.getheight() << endl;




    return 0;
}
