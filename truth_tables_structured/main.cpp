#include <iostream>

using std::boolalpha;
using namespace std;

int main()
{


        bool arr_p[4] = {

            true,
            true,
            false,
            false
        };

        bool arr_q[4] = {

            true,
            false,
            true,
            false
        };

        bool arr_res[4];

         cout<<"\nConjuncion en logica ( o ) ( v )"<<endl;

        for(int i=0; i<4; i++){

            arr_res[i]= arr_p[i] + arr_q[i];

            cout<<boolalpha<<arr_p[i]<<" v "<<arr_q[i]<<" = "<<arr_res[i]<<endl;

        }//fin for

                cout<<"\nDisyuncion en logica ( y ) ( ^ )"<<endl;

            for(int i=0; i<4; i++){

            arr_res[i]= arr_p[i] * arr_q[i];

            cout<<boolalpha<<arr_p[i]<<" ^ "<<arr_q[i]<<" = "<<arr_res[i]<<endl;

        }//fin for

         cout<<"\nCondicional si y solo si (<-->)"<<endl;

        for (int i=0; i<4; i++){

            bool pyq[4];
            bool nopyq[4];

            pyq[i] = arr_p[i] * arr_q[i];
            nopyq[i] = (!arr_p[i]) * (!arr_q[i]);

            arr_res[i] = pyq[i] + nopyq[i];

            cout<<boolalpha<<arr_p[i]<<" <--> "<<arr_q[i]<<" = "<<arr_res[i]<<endl;

        }//fin for

        cout<<"\nSi ... entonces (-->) "<<endl;

        for(int i=0; i<4; i++){
            arr_res[i] = !(arr_p[i] * !arr_q[i]);

            cout<<arr_p[i]<<" --> "<<arr_q[i]<<" = "<<arr_res[i]<<endl;
        }//fin for

         cout<<"\nExclusivo o (XOR)"<<endl;

        for (int i=0; i<4; i++){

            bool pyq[4];
            bool nopyq[4];

            pyq[i] = arr_p[i] * arr_q[i];
            nopyq[i] = (!arr_p[i]) * (!arr_q[i]);

            arr_res[i] = !(pyq[i] + nopyq[i]);

            cout<<boolalpha<<arr_p[i]<<" XOR "<<arr_q[i]<<" = "<<arr_res[i]<<endl;

        }//fin for
        
        //this xor is simpler and only has to subtract
         cout<<"\nxor usig subtraction"<<endl;

        for(int i=0; i<4; i++){
            arr_res[i] = arr_p[i] - arr_q[i];

            cout<<arr_p[i]<<" xor "<<arr_q[i]<<" = "<<arr_res[i]<<endl;

        }//fin for

        cout<<"\nxor with comparisons"<<endl;
        for(int i=0; i<4; i++){

            if(arr_p[i] != arr_q[i]){

                cout<<arr_p[i]<<" xor "<<arr_q[i]<<" true "<<endl;
            }else{

                cout<<arr_p[i]<<" xor "<<arr_q[i]<<" flase "<<endl;
            }//fin if

        }//fin for



 /* si y solo si
        p y q       -p y -q        ( (pyq)  o  (-py-q) )
        v           f                       v
        f           f                       f
        f           f                       f
        f           v                       v

si... entonces

        p  y  -q      -(p y-q)
        v  f  f       v  v  f f
        v  v  v       f  v  v v
        f  f  f       v  f  f f
        f  f  v       v  f  f v

exclusivo o

                p y q       -p y -q        ( (pyq)  o  (-py-q) )    -( (pyq)  o  (-py-q) )
                v           f                       v                       f
                f           f                       f                       v
                f           f                       f                       v
                f           v                       v                       f

xor

                bool

                1 - 1 = 0       v - v = f
                1 - 0 = 1       v - f = v
                0 - 1 = -1      f - v = v   in this case any value different from 0 is true
                0 - 0 = 0       f - f = f
*/


*/


    return 0;
}
