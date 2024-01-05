class DynamicArray{
    int *data;
    int nextIndex;
    int capacity;//total size

    public:

    DynamicArray(){
        data = new int[5];
        nextIndex = 0;
        capacity = 5;
    }

    DynamicArray(DynamicArray const & d){

        //this -> data = d.data; //shallow copy // earlier it was just copying the address to the pointer

        //deep copy
        this -> data = new int[d.capacity];
        for(int i = 0; i < d.nextIndex; i ++){
            this -> data[i] = d.data[i];
        }

        this -> nextIndex = d.nextIndex;
        this -> capacity = d.capacity;

    }
    void operator=(DynamicArray const & d){
        this -> data = new int[d.capacity];
        for(int i = 0; i < d.nextIndex; i ++){
            this -> data[i] = d.data[i];
        }

        this -> nextIndex = d.nextIndex;
        this -> capacity = d.capacity;

    }
    void addElement(int x){
        
        if(nextIndex == capacity){
            int* newdata = new int[capacity*2];
            for(int i = 0; i < capacity ;i++){
                newdata[i] = data[i];
            }
            delete []data;
            data = newdata;
            capacity *= 2;
        }
        data[nextIndex] = x;
        nextIndex++;
    }
    int get(int i)const {

        if(i < nextIndex){
            return data[i];
        }else return -1;
    }

    void addElement(int x, int i){
        if(i < nextIndex){
            data[i] = x;
        }
        else if(i == nextIndex){
            addElement(x);
        }
        return;
        }
    
    void print()const{
        for (int i = 0; i < nextIndex; i++){
            cout << data[i] << " ";
        }
        cout << endl;
    }
};