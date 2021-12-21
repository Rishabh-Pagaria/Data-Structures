#include <iostream>

using namespace std;
int setBits(int a){
    int count = 0;
    switch(1){
        case 1:
            while(a != 0){
                int bit = a & 1;

                //checking if there is set(i.e in binary representation the 1 is called set bit) bit or not
                if(bit == 1){
                    count += 1;
                }
                a = a >> 1;
            }
        break;
    }
    return count;
}

int main()
{
    int a,b;
    cin>>a>>b;
    int total = setBits(a) + setBits(b);
    
    cout<<total;

    return 0;
}
