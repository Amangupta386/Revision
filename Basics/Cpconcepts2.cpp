//    Iterator In CPP
{2, 3, 4, 5, 6, 7};
 |
 it  -> pointer
.begin() -> 2
.end() -> nextposition of -> 7

   // Declaration ----------------------- 
vector<int> ::iterator it = v.begin();
cout << (*it) << endl; -> 2
cout << (*it+1) << endl; -> 3
  
  // Used in for-loop
  for(it = v.begin(); it != v.end(); ++it){
    cout << (*it) << endl;
 
    diff. Btw it+1 & ++it
      it+1 -> point karta hai padhosi ko
      ++it -> point karta hai next iterator ko
      NOW this ques. is diff. btw padhosi & iterator 
      padhosi woh ->>> jo tmhare bagal m hai 
      but,
    iterator -> tmhara relative jo tmhare ghr se door rehta hain... isse 
                1->> ye map m work efficiently karta hain
                2->> it+1 map m work nahi karega !!!...!!!
      
//     Iterator in pairs
      vector<pair<int, int > > v_p = {{1, 2}, {2, 3}, {3, 4}};
      vector<pair<int, int> > :: iterator it;
    for(it = v_p.begin(); it != v_p.end(); ++it){
      cout<<(*it).first << " " <<(*it).second << endl;  or  cout<<(it -> first) << " " << (it->second << endl;
    }
   


   // ------------------ Range based loop --------------------// mtlb for loop ko kaise chotu kare....
      vector<int>v = {2, 3, 4, 5, 6};                                                                                                                                      
// ---- range based in vectors                                                                                           
      for(int &value: v){ -> /* & reference operator use for taking actual values from vector otherwise it takes copies-->> of values. */
        value++;
//         cout<< value <<" ";-> 2 3 4 5 6  
      } 
      for(int value: v){
        cout<< value <<" "; -> 3 4 6 7 8
      }  
// ---- range based in pairs                                                                          
vector<pair<int, int > > v_p = {{1, 2}, {2, 3}, {3, 4}};
 for(pair<int, int>& value:v_p){
  cout<<value.first<<" "<<value.second<<endl;
 }


// ------------------------------auto keyword in cpp--------------------
kisi data type m hum auto laga sakte hain.....
 auto a = 1.0
	for(auto:v_p){
		cout<<value.first<<" "<<value.second<<endl;
 	}

--------------------------MAPS---------------------------------------------------------------------------------------------------------------------------------------
(key)	(value)
int 	string
1	a b c
5	c d e
3	a c d

Ordered Map ->> sorted keys and for string in lexographically(dictionay order)  ->>> its implementation by help of  R - B Trees data structure
Unordered Map ->> Unsorted keys 

// Declaration
map<int, string>m;
m[1] = "abc"; // o(log(n))
m[5] = "cdc";
m[3] = "acd";
m.insert({4, "afg"});
map<int, string>::iterator it;
for(it = m.begin(); it != end(); ++it){
	cout<< it->first <<" "<<it->second<<endl;
}
for(auto &pr : m){ // n(log(n))
	cout<<pr.first<<" "<<pr.second<<endl;
}
m[6]; ->>>>>>>>>>>>>> it is using extra memory
m[5] = "cde"; ------>> Replace by original value

// -------------find opeartor-----------------------------//
auto it = m.find(3); ->--- return iterator -- O(log(n))
if(it == m.end()){
	cout<<"NO value";
else
	cout<< it -> first <<it -> second;

// --------------erase operator ---------
m.erase(it);
3rd key will erase...

// ------------ m.end();
 if(it != end())
	m.erase(it);
print(m);

// ->>>>>>........
map<string, string> m;
m["abcd"] = "abcd"; // s.size() * log(n) -> nlog(n)
for(int i = 0; i<n; ++i){
	string s;
	cin>>s;
	// m[s] += 1;
	m[s]++;
}
for(auto pr: m){
	cout<<pr.first <<" "<<pr.second <<endl;

----------------UnOrdered Map-----------------
// inbuilt implementation
// time compxty
//valid keys datatype
unordered_map<int, string>m;
m[1] = "abc"; // O(1)
m[5] = "cdc";
m[3] = "acd";

auto it = m.find(3); ->--- return iterator -- O(1)
if(it == m.end()){
	cout<<"NO value";
else
	cout<< it -> first <<it -> second;

In terms if pairs---------------------->><><><><<><><><><
unordered_map<pair<int, int>, string>U_m;
1.   it will show an error due hash function are not deifne of pairs---
2.   defined has function
	int, double, float, string, long long,....
	not include complex data types....
