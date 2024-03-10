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
    virtual void Work(){
        cout<<Name<<" is checking email, task backlog, performing those tasks \n";
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
    void Work(){
        cout<<getName()<<" is writing "<<FavProgrammingLanguage<<'\n';
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
    void Work(){
        cout<<getName()<<" is teaching "<<Subject<<'\n';
    }
    
    
};


int main(){
    //Employee employee1 = Employee("Pavan", "Youtube", 25);
    Employee e = Employee("An", "Google", 35);
    Developer d = Developer("Arun", "Microsoft", 28, "C++");
    Teacher t = Teacher("Pavan", "Cool School", 35, "History");
    d.Work();
    t.Work();
    Employee *e1 = &d;
    Employee *e2 = &t;
    e1->Work();
    e2->Work();
    e.Work();
    

    return 0;
}



