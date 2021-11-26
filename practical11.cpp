#include <iostream>
#include <string>
using namespace std;
class Bus
{
    private:
        int Busno, Distance, fare;
        string from, to;
        char type;
        
    public:
        Bus()
        {
            type = 'o';
            fare = 500;
        }
        ~Bus()
        {
            cout << "Destructor invoked" << endl;
            cout << "Object obj Destroyed" << endl;
        }
        void calcfare()
        {
            if(type == 'o')
                fare = 15 * Distance;
            else if(type == 'e')
                fare = 20 * Distance;
            if(type == 'l')
                fare = 24 * Distance;
        }
        void allocate()
        {
            cout << "Enter bus number : ";
            cin >> Busno;
            
            cout << "Enter the name of origin : ";
            getline(cin, from);
            
            cout << "Enter the name of destination : ";
            getline(cin, to);
            
            cout << "Enter the type of bus : ";
            cin >> type;
            
            cout << "Enter the distance in km : ";
            cin >> Distance;
            
            calcfare();
        }
        void show()
        {
            cout << "\nBus number is : " << Busno << endl;
            cout << "Place of origin is : " << from << endl;
            cout << "Place of destination is : " << to << endl;
            cout << "Distance travelled in km : " << Distance << endl;
            cout << "Type of bus is : " << type << endl;
            cout << "Fare is : " << fare << endl;
        }
};

int main()
{
    Bus obj;
    obj.allocate();
    obj.show();
    
    return 0;
}
