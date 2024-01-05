class student{
    public:
    int age;

    private:
    int rollNumber;

    public:

    void setrollNumber(int a, int password){
        if(password != 123){
            return;
        }
        if(a > 0){
            rollNumber = a;
        }
        else{
            std::cout<<"the rollnumber is negative or zero, try again"<<std::endl;
        }
    }

    int getrollNumber(){
        return rollNumber;
    }
};