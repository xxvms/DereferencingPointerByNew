#include <iostream>
class Distance                              // English distance class
{
private:
    int feet;
    double inches;
public:
    void getDist()                          // get lenght from user
    {
        std::cout << "\nEnter feet: ";
        std::cin >> feet;
        std::cout << "\nEnter inches: ";
        std::cin >> inches;
    }
    void showDist()                         // show distance
    {
        std::cout << feet << "\'-" << inches << "\"";
    }

};

int main()
{
    Distance& distance = *(new Distance);   // create Distance object
                                            // with alias distance
    distance.getDist();                     //access to object member with dot operator
    distance.showDist();
    std::cout << std::endl;
    
    
    system("pause");
    return 0;
}