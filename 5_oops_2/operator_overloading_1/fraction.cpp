class fraction{
    private: 
        int denominator;
        int numerator;
    
    public: 

        //we want to not take garbage values so we make a parametrised constructor
        fraction(int numerator, int denominator){
            //numerator = numerator; //it will take the nearest variable
            this -> numerator = numerator;
            this -> denominator = denominator; 
        }

        void print(){
            //std::cout << this -> numerator << " / " << this -> denominator << std::endl;
            cout << numerator << " / " << denominator << endl;
        }

        void simplify(){
            int gcd = 1;
            for (int i = 2; i <= numerator && i <= denominator; i++){
                if (numerator % i == 0 && denominator % i == 0)
                {
                    gcd = i;
                }
            }
            numerator = numerator /gcd;
            denominator = denominator /gcd;
        }
        fraction add(fraction const & f2){
            int lcm = denominator * f2.denominator;
            int x = lcm / denominator;
            int y = lcm / f2.denominator;

            int num = x * numerator + (y * f2.numerator);

            fraction fnew(num, lcm);

            fnew.simplify();
            return fnew;

        }

        fraction operator+(fraction const & f2)const{
            int lcm = denominator * f2.denominator;
            int x = lcm / denominator;
            int y = lcm / f2.denominator;

            int num = x * numerator + (y * f2.numerator);

            fraction fnew(num, lcm);

            fnew.simplify();
            return fnew;

        }

        fraction multiply(fraction const & f2){
            int n =numerator * f2.numerator;
            int d = denominator * f2.denominator;
            fraction fnew(n,d);
            fnew.simplify();
            return fnew;
        }

        fraction operator*(fraction const & f2)const{
            int n = numerator * f2.numerator;
            int d = denominator * f2.denominator;
            fraction fnew(n,d);
            fnew.simplify();
            return fnew;
        }

        bool operator==(fraction const & f2)const{
            if(numerator == f2.numerator && denominator == f2.denominator){
                return true;
            }
            else{
                return false;
            }
        }
        //pre increment
        //very important that why we return as a reference because 
        // if there is ++(++f1) then it wont act as it should on f1 as it returns the value
        //in the temporary buffer and then that temporary buffer is passed to the next one
        // if we pass it as a refernce then no buffer variable is made 
        fraction& operator++(){
            numerator = numerator + denominator;
            simplify();
            return *this;
        }

        fraction & operator++(int){
            fraction fnew(numerator,denominator);
            numerator = numerator + denominator;
            simplify();
            fnew.simplify();
            return fnew;
        }

        fraction& operator+=(fraction & const f2){
            int lcm = denominator * f2.denominator;
            int x = lcm / denominator;
            int y = lcm / f2.denominator;

            int num = x * numerator + (y * f2.numerator);

            numerator = num;
            denominator = lcm;
            simplify();
            return *this;
        }
};