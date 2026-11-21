#include<iostream>
#include <stack>
using namespace std;
int main(){
    //create stack
    stack<int>st;
    //push
    st.push(8);
     st.push(6);
      st.push(9);
       st.push(17);
        st.push(812);
         st.push(-716);
          //st.push();
          //size
          cout<<st.size()<<endl;
          cout<<st.empty()<<endl;
          int topElem= st.top();
          cout<<topElem<<endl;
          st.pop();
          st.pop();
                cout<<st.top()<<endl;
                return 0;


}


