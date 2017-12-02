template<class T> class Temp_F{
  public:
    static void swap(T& A,T& B);
};
template<class T> void Temp_F<T>::swap(T& A, T& B){
    T t; t = A; A = B; B = t;
}