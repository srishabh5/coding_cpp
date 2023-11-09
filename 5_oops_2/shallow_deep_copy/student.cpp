class student{
    //public:
    int age;
    char *name;
    public:
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

    void display(){
        std::cout << age << " " << name << std::endl;
    }
};