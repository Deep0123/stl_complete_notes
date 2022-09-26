#include<iostream>
using namespace std;
void explainPair();
int main(){
    
    return 0;
}
// pairs 
void explainPair(){
    pair<int, int> p = {1,3};
    cout<< p.first<<" "<<p.second<<endl;

    // If we want to store more than two elements in a pair we can use nested loops for example:
    pair<int, pair<int, int>> p = {1, {3,4}};
    cout<<p.first<<" "<<p.second.second<<" "<<p.second.first<<endl;

    pair<int, int> arr[] = {{1,2}, {2,5}, {5,1}};
    cout<<arr[1].second<<endl;

}