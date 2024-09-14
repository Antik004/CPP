// #include<iostream>
// #include<cstring>
// using namespace std;

// class antik{
//     protected:
//         string title;
//         float rating;
//     public:
//         antik(string s,float r){
//             title=s;
//             rating=r;
//         }
//         virtual void display(){}
// };
// class antikvideo:public antik{
//     int videolength;
//     public:
//         antikvideo(string s,float r,int videolength):antik(s,r){
//             videolength=videolength;
//         }
//         void display(){
                
//                 cout<<"This is an amazing video with title"<<title<<endl;
//                 cout<<"Rating:"<<rating<<"/5"<<endl;
//                 cout<<"Length:"<<videolength<<endl;
//         }
// };
// class antiktext:public antik{
//     int words;
//     public:
//         antiktext(string s,float r,int wc):antik(s,r){
//             words=wc;
//         }
//         void display(){
//             cout<<"Text title:"<<title<<endl;
//             cout<<"Rating:"<<rating<<"/5"<<endl;
//             cout<<"Length:"<<words<<" words"<<endl;
//         }
// }; 
// int main(){
//     string title="This is practice";
//     float rating;
//     int words,vlen;
//     vlen=120;
//     rating=4.2;
//     antikvideo videoobj(title,vlen,rating);
//     videoobj.display();
//     return 0;
// }