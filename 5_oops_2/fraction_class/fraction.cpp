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
        void add(fraction const & f2){
            int lcm = denominator * f2.denominator;
            int x = lcm / denominator;
            int y = lcm / f2.denominator;

            int num = x * numerator + (y * f2.numerator);

            numerator = num;
            denominator = lcm;

            simplify();

        }

        void multiply(fraction const & f2){
            numerator =numerator * f2.numerator;
            denominator = denominator * f2.denominator;
            simplify();
        }
};