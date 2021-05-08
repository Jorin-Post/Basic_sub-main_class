#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Member { // Main class
string fName;
string bName;
string City;
string Country;
protected:
int Age;
int Experience;
public:
void set_fName(string fname){   // to change a prived val 
fName = fname;
}
string get_fName() {            // to get a prived val
    return fName;
}
void set_bName(string bname){
bName = bname;
}
string get_bname() {
    return bName;
}
void set_city(string city){
City = city;
}
string get_city() {
    return City;
}
void set_Country(string country){
Country = country;
}
string get_Country() {
    return Country;
}
void set_age(int age){
Age = age;
}
int get_age() {
    return Age;
}
void set_Experience(int experience){
Experience = experience;
}
void info (string f, string b, string c, string a, int ag, int my) {
set_fName(f);
set_bName (b);
set_city (c);
set_Country(a);
set_age(ag);
set_Experience(my);
}
string get_info(){
    string info = fName + " "+ bName+ " "+ Country+" " + City; // Make 1 long string
    return info;
    }
};

class Experians : public Member {   // Subclass
    public:
    int get_Experience(){
        return Experience;              // This vall is acsesseble because Experience is protected and not prived
}
};

int main() 
{
    Experians M1; Experians M2; Experians M3;
    string fName; string bName; string Country; string City; int age; int Experiance;
    cout << "First name" << '\t' << "Last name" << '\t' << "Country" << '\t' << "city" <<'\t' << "Age" << '\t' << "Experiance" << endl;
    cin >> fName >> bName >> Country >> City >> age >> Experiance;  // Input
    
    M1.info (fName, bName, Country, City, age , Experiance);
    M2.info ("Joel","Sanders", "France", "Parijs", 22 , 4);

    cout << M1.get_info() << " and he has experience of " << M1.get_Experience() << " years."<< endl;
    cout << M2.get_info() << " and he has experience of " << M2.get_Experience() << " years." << endl; // Info goes true Experians to Member
}