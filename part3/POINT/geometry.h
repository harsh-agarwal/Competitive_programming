#include <stdio.h>
#ifndef GEOMETRY_H_INCLUDED
#define GEOMETRY_H_INCLUDED
class point
{
private:
    int x,y;
public:
    point(int p=0,int q=0){x=p;
    y=q;}
    int GetX()const
    {
        return x;
    }
    int GetY()const
    {
        return y;
    }
    void SetX(const int new_X)
    {
        x=new_X;
    }
    void SetY(const int new_Y)
    {
        y=new_Y;
    }
};

class PointArray
{
    point *start;
    int size;

public:
    const int returnsize()
    {
        return size;
    }
     point *returnpointer()
    {
        return start;
    }
    PointArray()
    {
        size=0;
        start=new point[size];
    }

    PointArray(const point Points[],const int length)
    {
      size=length;
      start=new point[size];
      for(int i=0;i<size;i++)
        {
            start[i].SetX(Points[i].GetX());
            start[i].SetY(Points[i].GetY());
        }
    }
   // PointArray(const PointArray &pv)
    //{
      //  size =pv.returnsize();
        //start=pv.returnpointer();
    //}
    ~PointArray()
    {
        delete start;
    }
private:
    void resize(int n)
    {

        point *startNew;

        startNew= new point[n];
        for(int i=0;i<n;i++)
            {
                startNew[i]=start[i];
                //startNew[i].SetX(start[i].GetX());
                //startNew[i].SetY(start[i].GetY());
            }
        size=n;
        //for(int i=0;i<n;i++)
         //cout<<startNew[i].GetX();
        delete[] start;

        start=startNew;

    }
public:

    void push_back(point &p)
    {
        resize(size+1);
        start[size-1].SetX(p.GetX());
        start[size-1].SetY(p.GetY());
    }

    void insert(const int position,const point &p)
    {
        resize(size+1);
        for(int i=(size-1);i>=(position-1);i--)
        {
            if(i==position-1)
                {
                    start[i+1]=start[i];
                    start[i]=p;
                }
            else
                start[i+1]=start[i];
        }

    }
void removal(const int pos)
{
    for(int i=pos;i<size;i++)
        start[i-1]=start[i];
    resize(size-1);
}
const int getSize() const
{
    return size;
}
void clear()
{
    delete start;
    size=0;
    point *start;
    start=new point[size];
}
};


#endif // GEOMETRY_H_INCLUDED
