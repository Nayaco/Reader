
template<class T> class Temp_F{
  public:
    static void swap(T& A,T& B);
};

template<class T> class Temp_Stack{
    public:
        Temp_Stack();
        Temp_Stack(int Stack_Len);
        ~Temp_Stack();
        bool Empty();
        T pop();
        void push(T A);
    private:
        T* Stack;
        bool Is_Full();
        int Len;
};
//.....................This is Temp_F......................
template<class T> void Temp_F<T>::swap(T& A, T& B){
    T t; t = A; A = B; B = t;
}
//...................This is Temp_Stack....................
template<class T> Temp_Stack<T>::Temp_Stack(){ 
    Len = 0; Stack = new T[7];
}

template<class T> Temp_Stack<T>::Temp_Stack(int Stack_Len){
    Len = 0; Stack = new T[Stack_Len];
}

template<class T> Temp_Stack<T>::~Temp_Stack(){
    delete []Stack; 
}

template<class T> bool Temp_Stack<T>::Empty(){

} 
template<class T> void Temp_Stack<T>::push(T A){

}

template<class T> T Temp_Stack<T>::pop(){
    return Empty()?NULL:Stack[--Len];
}




