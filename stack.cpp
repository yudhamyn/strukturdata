#include <iostream>
    #define maxi 1000
    using namespace std;

    class sstack{
        int a[maxi];
        int top;

        public:
            void initialize();
            void push(int val);
            void pop();
            void peep();
            void display();
    };

    void sstack::initialize(){
        cout<<"program tumpukan angka  ";
        top=-1;
    }

    void sstack::push(int val){
        if(top==maxi-1){
            cout<<"\nThe Stack is already full...";
            cout<<"\nThe Stack is already full...";
        }
        a[++top]=val;
    }

    void sstack::pop(){
        if(top==-1){
            cout<<"\nThe Stack is already empty..";
        }
        else{
            cout<<"\nAngka telah mengeluarkan = "<<a[top];
            top--;
        }
    }

    void sstack::peep(){
        if(top==-1){
            cout<<"\nThe Stack is already empty..";
        }
        else{
            cout<<"\nyang paling atas adalah = "<<a[top];
        }
    }

    void sstack::display(){
        if(top==-1){
            cout<<"\nBelum ada tumpukan";
        }
        else{
            cout<<"\nisi dari tumpukannya adalah = ";
            int x=top;
            while(x!=-1){
                cout<<a[x]<<" ";
                x--;
            }
        }
    }

    int main()
    {
        sstack s;
        int ch,x,val;
        s.initialize();
        cout<<"\nsilahkan pilih : \n1) masukan angka \n2) keluarkan angka \n3) tampilkan nilai paling atas \n4) tampilkan tumpukan angka \n5) kluar :P";
        while(1){
            cout<<"\ningin pilih yang mana ? ";
            cin>>ch;
            if(ch==1){
                cout<<"\nangka berapa ? ";
                cin>>val;
                s.push(val);
            }
            else if(ch==2){
               s.pop();
            }
            else if(ch==3){
                s.peep();
            }
            else if(ch==4){
                s.display();
            }
            else break;
        }
        return 0;
    
}