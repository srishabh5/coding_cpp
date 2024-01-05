class Polynomial {
    public:
    int *degCoeff;      // Name of your array (Don't change this)
    int totalSize; // total size of the array
    // Complete the class

    public:
    /*
    int* getdegCoeff(){
        return degCoeff;
    }
    int gettotalSize(){
        return totalSize;
    }
    */

    //default constructor
    Polynomial(){
        //the mistake i was doing when defining the data members
        //int totalSize = 1;
        // int *degCoeff = new int [totalSize];
        totalSize = 1;
        degCoeff = new int[totalSize];
        
        for (int i = 0; i < totalSize; i++){
            degCoeff[i] = 0; //for initialization with zero coefficients 
        }
        
       //degCoeff[0] = 0;
    }

    //copy constructor
    Polynomial(Polynomial const &p1){
        totalSize = p1.totalSize;

        //for deep copy
        degCoeff = new int[totalSize];
        for (int i = 0; i < totalSize; i++){
            degCoeff[i] = p1.degCoeff[i]; 
        }
    }

    void operator=(Polynomial const & p){
        delete []degCoeff;
        totalSize = p.totalSize;
        degCoeff = new int[totalSize];
        for (int i = 0; i < totalSize; i++){
            degCoeff[i] = p.degCoeff[i]; 
        }
    }

    void setCoefficient(int degree, int coefficients){
        if(degree < totalSize){
            degCoeff[degree] = coefficients;
            //cout << "hahahah" <<endl;
        }else{
            int size = totalSize;
            while(size < degree + 1){size *= 2;}
            int *newdegCoeff = new int [size];//creating a new pointer to the new size array
            
            for (int i = 0; i < size; i++){
                //now copy the values
                if(i < totalSize){
                    newdegCoeff[i] = degCoeff[i];
                    //std::cout << "first loop" << std::endl;
                }
                else if(i == degree){
                    newdegCoeff[i] = coefficients;
                    //std::cout << "third loop" << std::endl;
                }
                else{
                    newdegCoeff[i] = 0; //for initialization with zero coefficients 
                }
                }
            
            delete []degCoeff; //free the memory
            degCoeff = newdegCoeff;
            totalSize = size;
        }
    }
    Polynomial operator+(Polynomial const & p2){
        if(totalSize < p2.totalSize){
            Polynomial p3(p2);// we have a made a copy of the bigger polynomial    
            //now we add 
            for(int i = 0; i < totalSize; i++){
                p3.degCoeff[i] += degCoeff[i]; 
            }
            return p3;
        }else{
            Polynomial p3(*this);// we have a made a copy of the bigger polynomial    
            //now we add 
            for(int i = 0; i < p2.totalSize; i++){
                p3.degCoeff[i] += p2.degCoeff[i]; 
            }
        return p3;
        }
    }

    Polynomial operator-(Polynomial const & p2){
        if(totalSize < p2.totalSize){
            Polynomial p3(p2);// we have a made a copy of the bigger polynomial    
            //now we add 
            //but we missed to make the values negative

            for(int i = 0; i < p2.totalSize; i++){
                p3.degCoeff[i] = - p2.degCoeff[i];
            }
            for(int i = 0; i < totalSize; i++){
                p3.degCoeff[i] += degCoeff[i]; 
            }
            return p3;
        }else{
            Polynomial p3(*this);// we have a made a copy of the bigger polynomial    
            //now we add 
            for(int i = 0; i < p2.totalSize; i++){
                p3.degCoeff[i] -= p2.degCoeff[i]; 
            }
        return p3;
        }
    }

    Polynomial operator*(Polynomial const & p2){
        
        Polynomial p3;
        //p3.totalSize = p2.totalSize + totalSize;
        p3.setCoefficient(p2.totalSize+totalSize, 0);
        
        for(int i = 0; i < p2.totalSize; i++){
            if(p2.degCoeff[i] != 0){
                for (int j = 0; j < totalSize; j++){
                    if(degCoeff[j] != 0){
                        p3.degCoeff[i + j] += p2.degCoeff[i] * degCoeff[j];
                    }
                }
            }
        }
        return p3;
    }
    void print(){

        for(int i = 0; i < totalSize; i++){
            if(degCoeff[i] != 0){
                std::cout << degCoeff[i] <<"x"<< i <<" ";
            }
        }
        std::cout << std::endl;
    }    

};
