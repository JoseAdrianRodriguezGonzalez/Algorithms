/**Let's make some sorting
 * algorithms
 */
#include<iostream>
#include<vector>
#include<algorithm>
/*Given an array such as 
1,3,8,2,9,2,5,6
You have to sort it with a bubble sort
of O(n²)
*/
class Sorting{
    protected:
        std::vector<int>array;
    private:
        void merge(size_t left, size_t mid,size_t right){
            std::vector<int>leftArray(array.begin()+left,array.begin()+mid+1);
            std::vector<int>rightArray(array.begin()+mid+1,array.begin()+right+1);
            for(size_t i=0;i<leftArray.size();i++){
                leftArray[i]=array[left+i];
            }
            for(size_t j=0;j<rightArray.size();j++){
                rightArray[j]=array[mid+j+1];
            }
            size_t i=0,j=0,k=left;
            while(i<leftArray.size()&&j<rightArray.size()){
                if(leftArray[i]<rightArray[j]){
                    array[k++]=leftArray[i++];
                }else{
                    array[k++]=rightArray[j++];
                }
            }
            while(i<leftArray.size()){
                array[k++]=leftArray[i++];
            }
            while(j<rightArray.size()){
                array[k++]=rightArray[j++];
            }
        }
        void divide(size_t left, size_t right){
            if(left<right){
                size_t mid = left + (right - left) / 2; 
                divide(left,mid);
                divide(mid+1,right);
                merge(left,mid,right);
            }
        }
    public:
        Sorting(const std::vector<int>& array_pass):array(array_pass){}
        void print() const {
        for (int element : array) {
            std::cout << element << " ";
        }
           std::cout << "\n";
        }
        void burble_sort(){
            std::cout<<"Array ordered bubble sort\n";
            for(size_t i=0;i<array.size();i++)
                for(size_t j=0;j<array.size()-i-1;j++)
                    if(array[j]>array[j+1])
                        std::swap(array[j],array[j+1]);
        }
        void merge_sort(){
            std::cout<<"Array ordered merge sort\n";
            divide(0,array.size()-1);
        }
        void count_sort(){
            std::cout<<"Array ordered counter sort\n";
            int min_ = *std::min_element(array.begin(), array.end());
            int max_ = *std::max_element(array.begin(), array.end());
            int range=max_-min_+1;
            std::vector<int> histo(range, 0);

            for (int num : array) {
                histo[num - min_]++;
            }

            size_t index = 0;
            for (int i = 0; i < range; ++i) {
                while (histo[i]-- > 0) {
                    array[index++] = i + min_;
                }
            }
        }
        void insertion_sort(){
            std::cout<<"Array ordered counter sort\n";
            for(int i=1;i<=array.size()-1;i++){
                int j=i-1;
                int key=array[i];
                while(j>=0 && array[j]>key){
                    array[j+1]=array[j];
                    j--;
                }
                array[j+1]=key;
            }
        }
        void selection_sort(){
            for(int i=0;i<array.size();i++){
                int min=i;
                for(int j=i+1;j<=array.size();j++)
                    if(array[j]<array[min])
                        min=j;
                std::swap(array[i],array[min]);
            }
        }
        const std::vector<int>& getArray()const{
            return array;
        }
};
class Search{
    private:
        Sorting sort;
    public:
    Search(const std::vector<int>& array_pass):sort(array_pass){}
    int lineal_search(int value)const{
        const std::vector<int>&array=sort.getArray();
        for(size_t i=0;i<array.size();i++)
            if(array[i]==value)
                return i;    
        return -1;
    }
    int binary_search(int value){
        sort.merge_sort();
        const std::vector<int>&array=sort.getArray();
        int left=0,right=array.size()-1;
        while(left<=right){
        int mid=left+(right-left)/2;
            if(array[mid]==value){
                return mid;
            }else if(array[mid]<value){
                left=mid+1;
            }else{
                right=mid-1;
            }
        }
    return -1;
    }
};
struct Nodo{
            int dato;
            Nodo * siguiente;
};
class LinkedList{
   
        
    public:
    void insert(Nodo *&Lista ,int n){
        Nodo *nuevo_nodo=new Nodo();
        nuevo_nodo->dato=n;
        Nodo *aux1=Lista;
        Nodo * aux2;
        while((aux1!=NULL)&&(aux1->dato<n)){
            aux2=aux1; // el valor del nodo de la lista se pasa al aux2
            aux1=aux1->siguiente;//
        }
        if(aux1==Lista){
            //inserta al inicio de la lista
            Lista=nuevo_nodo;
        }else{
            aux2->siguiente=nuevo_nodo;
        }

        nuevo_nodo->siguiente=aux1;
    }
    void mostrarLista(Nodo *Lista){
        Nodo * actual =new Nodo();
        actual=Lista;
        while(actual!=NULL){
            std::cout<<actual->dato<<"->";
            actual=actual->siguiente;
        }
    }

};

int main(){
 //   std::vector<int> arr = {5, 2, 9, 1, 5, 6};
 //   Sorting s(arr);
 //   Search s1(arr);
 //   s.insertion_sort();
 //   s.print();
    LinkedList ls;
    Nodo *lista =nullptr;
    int dato ;
    std::cout<<"Dame un numero: ";
    std::cin>>dato;
    ls.insert(lista,dato);
    ls.mostrarLista(lista);
     delete [] lista;
    return 0;
}