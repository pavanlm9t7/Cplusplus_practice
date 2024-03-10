#include<iostream>
using std::string, std::cout;

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




int main(){
    Employee employee1 = Employee("Pavan", "Youtube", 25);
    Employee employee2 = Employee("Arun", "Google", 35);
    employee1.AskForPromotion();
    employee2.AskForPromotion();

    return 0;
}



