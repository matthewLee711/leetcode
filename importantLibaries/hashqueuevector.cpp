#include <vector>
void vectorPowers() {
  int value = 0;
  //setup vector
  std::vector<int> myVec;
  //initialize vector
  std::vector<int> init (10);
  adj = std::vector<std::vector<int>>(10, std::vector<int>(10));//2D vector 10x10

  //Adding value
  myVec.push_back(myVec);
  //Delete value
  for(int i = 0; i < myVec.size(); i++) {
    if(myVec[i] == value) {
      myVec.erase(i);//have to erase by position
    }
  }
  //
  myVec.front();//gets front value
  myVec.back();//gets back value
  myVec.at(value);//return data
  //iterator
  //set iterator to 0
  std::vector<int>::iterator it = myvector.begin()
  for (it; it != myvector.end(); ++it){
    std::cout << ' ' << *it;
  }

}

#include <unordered_map>
void unordered_mapPowers() { int value = 0;
  //Inserting/ initializing
  std::unordered_map<std::string, int> myMap = {
    {"key", value}
  };
  //OR
  myMap.insert({ {"key2", value} });
  //OR
  myMap["key3"] = value;

  //get value at key
  myMap.at("key");
  //set value at key
  myMap.at("key") = 10;
  //delete
  myMap.erase("key3");
  //clear all
  myMap.clear();
}

#include <string>
void stringPowers() {
  std::string word = "word!";
  length = word.length();
}

#include <algorithm>
void algoPowers() {
  std::vector<int> myVec;
  std::vector<int>::iterator position = std::find(myVector.begin(), myVector.end(), 8);
  if (position != myVector.end()) // == myVector.end() means the element was not found
      myVector.erase(position);
}


int main() {

}
