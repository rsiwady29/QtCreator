#include "heapsort.h"

heapsort::heapsort()
{
}

void heapsort::setarray(QList<int> array,int tam){
    this->array = array;
    this->tam=tam;

    for(int i=0;i<tam;i++){
        this->addtoar2(this->array.at(i),i);
    }
}
void heapsort::addtoar2(int data,int pos){

    this->array2.replace(pos,data);
    this->ordenar(pos);
    this->cant++;

}

void heapsort::ordenar(int posraiz){
        if(posraiz!=0)
        {
            if(posraiz%2==0)
            {
                if(this->array2.at(posraiz) > this->array2.at((posraiz-2)/2))
                {
//                    int reple= this->array2[(posraiz-2)/2];
                    int reple = this->array2.at((posraiz-2)/2);
//                    this->array2[(posraiz-2)/2]=this->array2[posraiz];
                    this->array2.replace((posraiz-2)/2,this->array2.at(posraiz));
//                    this->array2[posraiz]=reple;
                    this->array2.replace(posraiz,reple);
                    this->ordenar((posraiz-2)/2);
                }
            }
        else
        {
            if( this->array2.at(posraiz) > this->array2.at((posraiz-1)/2))
            {
//                int reple= this->array2[(posraiz-1)/2];
                int reple = this->array2.at((posraiz-1)/2);
//                this->array2[(posraiz-1)/2]=this->array2[posraiz];
                this->array2.replace((posraiz-1)/2,this->array.at(posraiz));
//                this->array2[posraiz]=reple;
                this->array2.replace(posraiz,reple);
                this->ordenar((posraiz-1)/2);
            }
    }
}
}


void heapsort::heapify(){
    this->heapify_r(0);
}

void heapsort::heapify_r(int pos){

        int L = (2*pos)+1;
        int R= (2*pos)+2;
        int largest=0;
        if((L<this->tam)&&(this->array2.at(L)>this->array2.at(pos))){
         largest =L;
     }else{
         largest=pos;
     }

     if((R<this->tam)&&this->array2.at(R)>this->array2.at(largest)){
         largest=R;
     }

     if(largest!=pos){
//         int rem=this->array2[pos];
         int rem = this->array2.at(pos);
//         this->array2[pos]=this->array2[largest];
         this->array2.replace(pos,this->array2.at(largest));
//         this->array2[largest]=rem;
         this->array2.replace(largest,rem);
         this->heapify_r(largest);
     }


}

void heapsort::sort(){
    for(int i=0;i<this->tam;i++)
    {
//         this->array[tam-(1+i)]  =this->array2[0];
         this->array.replace(tam-(1+i),this->array2.at(0));
//         this->array2[0]=this->array2[tam-(1+i)];
         this->array2.replace(0,this->array2.at(tam-(1+i)));
//         this->array2[tam-(1+i)]=0;
         this->array2.replace(tam-(1+i),0);
         // this->cant--;
         this->heapify();
    }

}

int* heapsort::getarray(){
    return this->array;
}
