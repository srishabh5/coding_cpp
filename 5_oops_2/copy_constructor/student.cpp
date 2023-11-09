class student{
    //public:
    int age;
    public:
    char *name;

    //default constructor
    student (int age, char * name){
        this -> age = age;
        //incase of integer there is no problem as the content are copied
        //shallow copy
        this -> name = name;

        // but here only the first index is copied so if we make changes in the name array
        //there will be change here as well
        // this is known as shallow copy where we just copy the content of the first index
        //ideally we use the
        // deep copy
        this -> name = new char [strlen(name) + 1];
        strcpy(this->name,name); 
    }
    //but there is an issue if i call student(student s)
    //bcz it will call the copy constructor which we have made and then there would be an infinite loop
    // to solve this we want to make not pass by value but pass by reference
    //student (student &s)
    //then there is one more issue if we do that then we could also change the value of the
    //original object inside it which we definitely dont want
    //so instead we pass it as a reference to a constant student 
    student(student const &s){
        this -> age = s.age;
        //we want deep copy so we make a new array and copy the contents into it
        this -> name = new char[strlen(name)+1];
        strcpy(this-> name,s.name); 

    }

    void display(){
        std::cout << age << " " << name << std::endl;
    }
};