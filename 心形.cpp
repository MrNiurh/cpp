# include <iostream>
# include <cmath>
using namespace std;

int main(void)
{
    float x, y;
    float U= 0.06,V= 0.025;


    for ( y=2; y>=-2; y-=U )
    {
        for ( x=-1.2; x<=1.2; x+=V)
        {
            if (  ( (x*x + y*y - 1)*(x*x + y*y - 1)*(x*x + y*y - 1) - x*x*y*y*y ) <= 0  )
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }


    return 0;
}
