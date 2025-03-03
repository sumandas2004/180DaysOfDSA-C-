#include<iostream>
using namespace std;
int main()
{
        int n;
        cout<<"input the number: ";
        cin>>n;
    for(int row=1;row<=n;row=row+1)
    {
        //space print 

        for(int col=1;col<=n-row;col=col+1)
        {
            cout<<"  ";
        }

        for(int col=1;col<=row;col=col+1)
        {
            cout<<row<<" ";
                //star print
        }

        cout<<endl;
        }



}

    


