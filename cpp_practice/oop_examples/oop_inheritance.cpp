#include<iostream>
using std::string, std::cout;

//inheritance

class AbstractEmployee{
    virtual void AskForPromotion()=0;

};

class Employee:AbstractEmployee{
private:
    string Name;
    string Company;
    int Age;
public:
    void setName(string name){
        Name = name;
    }
    string getName(){
        return Name;
    }
    void setCompany(string company){
        Company = company;
    }
    string getCompany(){
        return Company;
    }
    void setAge(int age){
        Age = age;
    } 
    int getAge(){
        return Age;
    }
    void IntroduceYourself(){
        cout<<"Name - "<<Name<<std::endl;
        cout<<"Company - "<<Company<<std::endl;
        cout<<"Age - "<<Age<<std::endl;
    }
    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }
    void AskForPromotion(){
        if(Age>30){
            cout<<Name<<" Got promoted!"<<std::endl;
        }else{
            cout<<Name<<" Sorry no promotion for you "<<std::endl;
        }
    }

};

class Developer:public Employee{
public:
    string FavProgrammingLanguage;

    Developer(string name, string company, int age, string favProgrammingLanguage):Employee(name, company, age){
        FavProgrammingLanguage = favProgrammingLanguage;
    }

    void FixBug(){
        cout<<getName()<<" fixed using "<< FavProgrammingLanguage <<std::endl;
    }

};
class Teacher:public Employee{
    public:
    string Subject;
    Teacher(string name, string company, int age, string subject):Employee(name, company, age){
        Subject = subject;
    }
    void PrepareLesson(){
        cout<<getName()<<" is preparing "<<Subject<<" lesson "<<'\n';
    }
};


int main(){
    //Employee employee1 = Employee("Pavan", "Youtube", 25);
    //Employee employee2 = Employee("Arun", "Google", 35);
    Developer d = Developer("Arun", "Microsoft", 28, "C++");
    Teacher t = Teacher("Pavan", "Cool School", 35, "History");
    t.PrepareLesson();
    t.AskForPromotion();

    return 0;
}



