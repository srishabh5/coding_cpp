class student{
    public:
    int age;
    const int rollNumber;
    int &x;

    //it would give error at the construction as there is a constant int which is not defined
    // and also a reference variable without definition
    //so we take the help of the initialisation list in the constructor
    // we need to define just in the case of the reference variable
    // specifically this to differentiate b/w the argument and the variable

    //now this will not give error as 
    //at the time of the construction it will define the values of the variables 
    student(int r, int age):rollNumber(r),age(age),x(this->age){};
};