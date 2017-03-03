#include <iostream>
#include <unordered_map>

using namespace std;

int main(int argc, char const *argv[])
{
	unordered_map<string,string> hashmap;
	hashmap.insert({"p","NULL"});
	hashmap.insert({"q","nikhil"});
	hashmap.insert({"r","telkunte"});
	hashmap["p"] = "replace";
	hashmap.erase("p");
	hashmap.insert({"p","replace"});
	cout<<"Max Size : " << hashmap.size()<<endl;
	for (pair<string, string> element : hashmap)
		cout << element.first << " :: " << element.second << endl;
	hashmap.clear();
	cout<<"Max Size : " << hashmap.size()<<endl;
	return 0;
}