#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) 
{
    vector<int> vect;
        for (int i = 0; i < nums.size()-1; i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums.at(j) == target - nums.at(i)) {
                    vector<int> vect1;
                    vect1.push_back(i);
                    vect1.push_back(j);
                    cout << vect1.at(i) << " and " << vect1.at(j) << endl;
                    return vect1;
                }
            }
        }
    throw runtime_error("No two sum solution");
        
}

int main(int argc, char* argv[])
{ 
    /*Test Case #1*/ 
    vector<int> test1;
    test1.push_back(2);
    test1.push_back(7);
    test1.push_back(11);
    twoSum(test1, 9);

    /*Test Case #2*/ 
    vector<int> test2;
    test2.push_back(10);
    test2.push_back(20);
    test2.push_back(30);
    twoSum(test1, 60);

    // /*Test Case #3*/ 
    // vector<int> test3{ 10, 20, 30 };

    // /*Test Case #4*/ 
    // vector<int> test4{ 10, 20, 30 };

    // /*Test Case #5*/ 
    // vector<int> test5{ 10, 20, 30 };

}