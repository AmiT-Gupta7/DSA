#include<bits/stdc++.h>
using namespace std;

int main(){
    // pair
    pair< int, int > p = {1,3};
    cout << p.first << " " << p.second << endl;

    // multiple pairs
    pair< int, pair < int, int > > p1 = {1, {2,3}};
    cout << p1.first << " " << p1.second.first << " " << p1.second.second;

    /*                      Vectors                             */

    vector <int> v ; //declaration of vector
    v.push_back(1);
    v.emplace_back(2);

    cout << v[0] << " " << v[1] << endl;

    // vector of pairs
    vector < pair <int, int> > vec ;
    vec.push_back({7,4});
    vec.emplace_back(9,6);

    cout << vec[0].first << " " << vec[0].second << endl;
    cout << vec[1].first << " " << vec[1].second << endl;

    /*                     Iterators                              */

    vector <int> :: iterator it = v.begin();
    it++;
    cout << *(it) << endl;

    // for loop with iterators
    vector<int> v1 = {10,20,30,40};
    for(vector<int> :: iterator it = v1.begin(); it != v1.end(); it++){
        cout << *(it) << " ";
    }
    cout << endl;


    for(auto it = v1.begin(); it != v1.end(); it++){ // auto keyword
        cout << *(it) << " ";
    }
    cout << endl;

    /*               Deleting an element from vector               */
    vector <int> v2 = {10, 30, 20, 40, 50, 60, 70, 80, 90, 100};

    v2.erase(v2.begin() + 2); // delete 20

    v2.erase(v2.begin()+2, v2.begin()+5); // delete 40,50,60

    for(auto it = v2.begin(); it != v2.end(); it++){
        cout << *(it) << " ";
    }
    cout << endl;

    /*              Insert Function               */
    vector <int> v(5, 70);

    v.insert(v.begin() + 2, 100); // insert 100 at index 2
    
    v.insert(v.begin() + 6, 4, 0); // insert four 0's starting from index 6

    for(auto it = v.begin(); it != v.end(); it++){
        cout << *(it) << " ";
    }
    Insert vector into another vector
    vector <int> copy = {1,2,3};

    v.insert(v.begin(), copy.begin(), copy.end());

    for(auto it = v.begin(); it != v.end(); it++){
        cout << *(it) << " ";
    }

    /*..................................List....................................*/

    list<int> ls;

    ls.push_back(3); // {3}
    ls.emplace_back(4); // {3, 4}

    ls.push_front(5); // {5, 3, 4}
    ls.emplace_front(7); // {5, 3, 4, 7}

    for(auto it = ls.begin(); it != ls.end(); it++){
        cout << *(it) << " ";
    }
}
