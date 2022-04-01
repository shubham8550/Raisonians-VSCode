#include<iostream>
//#include<iomanip>
//#include<conio.h>
using namespace std;
class rectangle
{
    protected:
      int legth;
      int width;

    public:
       void assignData(int len, int wid);
       void displayRectangle();
       void areaCalc();
};
void rectangle :: assignData(int len, int wid)
{
     length = len;
     width = wid;
}
void rectangle :: displayRectangle()
{
    cout<<"dimension is"<<length<<"by"<<width<<endl;
}
void rectangle :: areaCalc()
{
    int area;
    area = length*width;
    cout<<"area of rectangle is"<<area;
}
class Block : public rectangle
{
    private:
      int height;
    public:
      void assignData(int len, int wid, int ht);
      void displayBlock();
      void volumeCalc();
};
void Block :: assignData(int len, int wid, int ht)
{
    rectangle :: assignData(len, wid);
    height = ht;
}
void Block :: displayBlock()
{
    cout<<"height of block is"<<height<<endl;
    displayReactangle();
    cout<<endl;
}
void Block :: volumecalc()
{
    int vol;
    vol = length*width*hwight;
    cout<<"volume od block is"<<vol<<endl;
}
void main()
{
    rectangle rect;
    rect.assignData(6,5);
    cout<<endl<<"rectangle..."<<endl;
    rect.displayReactangle();
    rect.areaCalc();
    Block blk;
    block.assignment(7,6,5);
    cout<<endl<<"Block..."<<endl;
    blk.displayBlock();
    blk.volumeCalc();
    return 0;
}