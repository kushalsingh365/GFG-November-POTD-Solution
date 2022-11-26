
class Solution{
public:
    // function to construct tree from string
    Node *treeFromString(string str){
        // code here
        stack<Node*> st;
        int i = 0;
        int n = str.length();
        while(i < n){
            if(str[i] == '('){
                i++;
            }
            else if(str[i] == ')'){
                st.pop();
                i++;
            }
            else{
                int val = 0;
                int j = i;
                while(j < n && (str[j] - '0' >= 0 && str[j] - '0' <= 9)){
                    val = val*10 + (str[j] - '0');
                    j++;
                }
                Node* next = new Node(val);
                if(st.empty() == false){
                    if(st.top()->left == NULL){
                        st.top()->left = next;
                    }
                    else{
                        st.top()->right = next;
                    }
                }
                st.push(next);
                i = j;
            }
        }
        return st.top();
    }
};
