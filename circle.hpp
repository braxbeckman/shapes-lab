#include <string>
#include "angle.hpp"

using namespace std;

class circle : public angle
{
    private:
    string name{};

    public:
    explicit circle(string name);
    string get_Area() override;
    string get_Permeter() override;
    void shape() override;
};