#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<queue>
#include<set>
#include<unordered_set>
#include<map>
using namespace std;
// vectors : vector is a container which is dynamic in nature which always increase it's whenever we wish to.

int main(){
    
    return 0;
}
void explainVector(){
    vector<int> v;   //it creates an empty container

    v.push_back(1);  //add the value(i.e., 1) to the empty vector. 
    v.emplace_back(2);  //it is similar to pushback, it dynamically increas it's size and push the value to the back.(it is faster than push_back).
    
    vector<pair<int,int>>vec; //defines vector of a pair datatype
    vec.push_back({1,2});  //
    vec.emplace_back(1,2);  //by writing this way it'll automatically assumes that it is a pair and takes both the values.

    vector<int> v(5,100);  //this declares a conatiner of lot of elements already fixed.
    // this declares a container of size 5 containing 5 instances of 100. like {100, 100, 100, 100, 100}.

    vector<int> v(5); // this will create a container of size 5 of 5 instances of 0 or any garbage values, like{0,0,0,0,0}.

    vector<int> v1(5,20); //{20,20,20,20,20}
    vector<int> v2(v1);   // it'll create a container similar to v1 but not a copy of that v1. 


    //iterator : it is used to access elemets in the vector, it points to the memory address


    //take an example vector like {10,20,30,40,50}


    vector<int>::iterator it = v.begin();
    it++;
    cout<< *(it)<<" "; // here * means that the elements inside the vector is accessed

    it = it + 2;  //address shifted by 2 positions
    cout<<*(it)<<" ";
    vector<int>::iterator it = v.end();  //end will not point to the end position it will point after the end of the vector to access the end element we've to do it--.
    // vector<int>::iterator it = v.rend(); //reversed end (never used)
    // vector<int>::iterator it = v.rbegin(); //reverse begin (never used)


    cout<<v[0]<<" "<<v.at(0); //it'll give 10 at both the cases
    cout<<v.back()<<" "; //it'll give last element


    for (vector<int>::iterator it = v.begin(); it != v.end(); it++){  //similar to get the output of an array
        cout<<*(it)<<" ";
    }

    for(auto it = v.begin(); it != v.end(); it++){  //here the auto keyword is to automatically assign the vector iterator.
        cout<<*(it)<<" ";
    }

    for(auto it : v){
        cout<<it<<" ";
    }

    //{10,20,12,23}
    v.erase(v.begin()+1); // the output will be {10,12,23}

    //{10,20,12,23,35}
    v.erase(v.begin()+2, v.begin()+4);//{10,20,35} {start, end} (this method is used to delete multiple elements(it stops before the element.))

    // Insert function 

    vector<int>v(2,100); //{100, 100}
    v.insert(v.begin(), 300); //{300, 100, 100} //this inserts the value at the begin
    v.insert(v.begin() + 1, 2, 10); //{300, 10, 10, 100, 100}  // this is used to insert multiple element

    vector<int>copy(2, 50); //{50,50}
    v.insert(v.begin(), copy.begin(), copy.end()); //{50,50,300,10,10,100,100}

    //{10,20}
    cout<<v.size(); //2
    
    //{10,20}
    v.pop_back(); //{10}

    // v1 -> {10,20}
    // v2 -> {30,40}
    v1.swap(v2); // it'll swap the vectors i.e., v1-> {30,40} & v2 -> {10,20}
    
    v.clear(); // erases the entire vector

    cout<<v.empty(); // it return true or false based on whether the vector is empty or not.

}

//Note: push_back only works for empty vector only,once a push_back function is used in the vector, it'll return error if we use it again.
// Note: we can also add values in vector of fixed sizes by push_back and emplace_back because vectors are dynamic in nature.

// Note: end function always points at the end of the vector means after the last element of the vector.



//Lists
void explainList(){
    list<int> ls;

    ls.push_back(2); //{2}
    ls.emplace_back(4); //{2,4}

    ls.push_front(5); // {5,2,4}

    ls.emplace_front(); // {2,4}

    //rest functions are same as of vectors 
    // begin, end, rbegin, rend, clear, insert, size, swap
}

//deque
void explainDeque(){
    deque<int>dq;
    dq.push_back(1); //{1}
    dq.emplace_back(2); // {1,2}
    dq.push_front(4);  // {4,1,2}
    dq.emplace_front(3);  // {3,4,1,2}

    dq.pop_back();  // {3,4,1}
    dq.pop_front(); //{4,1}

    dq.back();

    dq.front();

    //rest function sare same as of vector
    //begin,end, rbegin, rend, clear, insert, size, swap
}


//Stack
void explainStack(){
    stack<int>st; //it follows the principle of LIFO, Last In First Out
    st.push(1); //{1}
    st.push(2); //{2,1}
    st.push(3); //{3,2,1}
    st.push(3); //{3,3,2,1}
    st.emplace(5); //{5,3,3,2,1}

    cout<<st.top(); //prints 5 "** st[2] is invalid **"

    st.pop(); // st looks like {3,3,2,1}

    cout<<st.top(); // 3
    cout<<st.size(); //4
    cout<<st.empty();  //returns true or false

    stack<int>st1, st2;
    st1.swap(st2);
}

//Note: stack functions such as top pop push happens in equal time period of o(1) -> time complexity

//Queue
void explainQUeue(){
    queue<int>q; //it follows the principle of FIFO, First In First Out
    q.push(1); //{1}
    q.push(2); //{1,2}
    q.emplace(4); //{1,2,4}

    q.back() += 5;
    cout<<q.back(); //prints 9

    //the queue is {1,2,9}
    cout<<q.front(); //prints 1

    q.pop(); //{2,9}

    cout<<q.front(); //prints 2
    //size swap empty same as of stack

}



// Priority Queue
void explainPQ(){
    //Maximum Heap
    priority_queue<int>pq;  //Maximum element stays at the top
    pq.push(5); //{5}
    pq.push(2); //{5,2}
    pq.push(8); //{8,5,2}
    pq.emplace(10); //{10,8,5,2}

    cout<<pq.top();  // prints 10

    pq.pop(); //{8,5,2}
    cout<<pq.top(); //prints 8

    // size swap empty functions are same as of others

    //Minimum Heap
    priority_queue<int, vector<int>, greater<int>> pq;  //Minimum element at the top
    pq.push(5); //{5}
    pq.push(2); //{2,5}
    pq.push(8); //{2,5,8}
    pq.emplace(10); //{2,5,8,10}

    cout<< pq.top(); //prints 2


    //Time Complexity of :-
    //push -> log n
    //top -> o(1)
    //pop -> log n
}




//Sets
void explainSet(){
    set<int>st; //Sets stores elements in SORTED and UNIQUE form
    st.insert(1); // {1}
    st.emplace(2); //{1,2}
    st.insert(2); //{1,2}, it doesn't stores 2 again because it already contains 2
    st.insert(4); //{1,2,4}
    st.insert(3); //{1,2,3,4}

    //Functionality of insert in vector
    //can be used also, that only increases
    //efficiency

    //begin(), end(), rbegin(), rend(), size(), empty() and swap() are same as of those of above

    //{1,2,3,4,5}
    auto it = st.find(3);  //returs an iterator which points towards 3

    //{1,2,3,4,5}
    auto it = st.find(6); //if the element is not present it'll always return st.end(), [means the iterator after the last element]

    //{1,4,5}
    st.erase(5); // erases 5 // takes logarithmic time

    int cnt = st.count(1);  // it always return 1 or 0, beacuse if it contains the element it'll store it uniquely therefore it'll return 1, and if the element is not present then it'll return 0.

    auto it = st.find(3);
    st.erase(it); //it takes constant time

    //{1,2,3,4,5}
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2); // after erase {1,4,5} (first, last)

    //lower_bound() and upper_bound() functions works in the same way as in vector does 

    //this is the syntax
    auto it = st.lower_bound(2);

    auto it = st.upper_bound(3);

}



//Multiset
void explainMultiSet(){
    //everything is same as of set
    //stores duplicate element also

    multiset<int>ms; //stores in sorted form
    ms.insert(1); //{1}
    ms.insert(1); //{1,1}
    ms.insert(1); //{1,1,1}

    ms.erase(1); //all 1's are erased

    //only a singlr 1 is erased.
    ms.erase(ms.find(1));

    ms.erase(ms.find(1), ms.find(1+2));

    //rest all functions are same as of set
}


//Unordered Set
void explainUSet(){
    unordered_set<int>st;
    // lower_bound() & upper_bound() function does not works, rest all functions are same as above, it does not stores in any particular order[but stores uniquely], it has a better complexity[o(1)] than set in most cases, except some when collision happens 
}




//Map
void explainMap(){ //A Map is a container which stores everything in respect to key(this can be of any datatype) and values.
    map<int, int> mpp;
    mpp[1] = 2; //it'll store 2 having a key value 1 as {1,2}
    mpp.emplace({3, 1});
    mpp.insert({2,4});



    map<int, pair<int, int>> mpp;



    map<pair<int, int>, int> mpp;
    mpp[{2,3}] = 10;// it'll store values a key of {2,3} and it's corrresponding value is 10.
    
    
    // {
    //     {1,2}
    //     {2,4}
    //     {3,1}
    // }

    for(auto it : mpp){
        cout<<it.first<<" "<< it.second<<endl; //it'll move in a sorted order of key
    }

    cout<<mpp[1]; // gives 2
    cout<<mpp[5]; // gives 0 or null

    auto it = mpp.find(3);
    cout<<*(it).second;

    auto it = map.find(5); // -> mpp.end()

    //this is the syntax
    auto it = mpp.lower_bound(2);
    auto it = mpp.upper_bound(3);

    //erase, swap, size, empty, are same as above
}

// Note : Map stores UNIQUE KEY in SORTED ORDER

// Multi Map 
void explainMultiMap(){
    //Same as of map the only thing is that it can store duplicate keys
}


                                                            // time[ map -> log, unordered-map -> o(1)]


//Unordered Map
void explainUnorderedMap(){
    //same as set and unordered_set difference
}


