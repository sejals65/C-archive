#include <iostream>
using namespace std;

class dynamicArray{
    int *data;
    int nextIndex;
    int capacity;
    
    public:
    dynamicArray(){
        data = new int[5];
        nextIndex = 0;
        capacity = 5; 
    }
    
    //Copy Constructor
    dynamicArray(dynamicArray const &d1){
        this -> data = new int[d1.capacity];        //Deep Copy
        for(int i = 0; i < d1.nextIndex; i++)
            this -> data[i] = d1.data[i];
        this -> capacity = d1.capacity;
        this -> nextIndex = d1.nextIndex;
    }
    
    //= Operator Overloaded
    dynamicArray operator=(dynamicArray const &d1){
        this -> data = new int[d1.capacity];                //Deep Copy
        for(int i = 0; i < d1.nextIndex; i++)
            this -> data[i] = d1.data[i];
        this -> capacity = d1.capacity;
        this -> nextIndex = d1.nextIndex;
    }
    
    //Adding Elements to array
    void add(int element){
        if(capacity == nextIndex){
            int *newData = new int[2*capacity];
            for(int i = 0; i < nextIndex; i++)
                newData[i] = data[i];
            delete [] data;
            data = newData;
            capacity *= 2;
        }
        
        data[nextIndex] = element;
        nextIndex++;
    }
    
    //Accessing Elements of particular index
    int getData(int i){
        if(i < nextIndex)
            return data[i];
        else 
        return -1;
    }
    
    //Updating Elements at particular index
    void update(int i, int element){
        if(i < nextIndex)
            data[i] = element;
        else if(i == nextIndex)
            add(element);
        else 
        return;
    }
    
    //Print Array
    void display(){
        for(int i = 0; i < nextIndex; i++)
            cout << data[i] << " ";
        cout << endl;
    }
};

int main(){
    dynamicArray d1;
    d1.add(10);                          //Adding elements to dynamic array
    d1.add(20);
    d1.add(30);
    d1.add(40);
    d1.add(50);
    d1.add(60);
    d1.display();
    
    cout << d1.getData(3) << endl;      //Accessing elements at particular index
    
    d1.update(3,100);                   //Updating elements at particular index
    d1.display();
    
    dynamicArray d2(d1);                //Copy Constructor 
    d2.update(1,200);
    d2.display();
    d1.display();
    
    dynamicArray d3;
    d3 = d2;                            //Copy Assignment Operator
    d3.display();
    return 0;
}
