class Solution{
    public:
    bool areAnagrams(Node *root1, Node *root2)
    {
    queue<Node*> s,s2;

        

        s.push(root1);

        s.push(NULL);

        s2.push(root2);

        s2.push(NULL);

        while(!s.empty())

        {

            unordered_map<int,int> v1,v2;

            if(s.front()==NULL)

            {

                s.pop();

                s2.pop();

            }

            else

            {

                while(s.front()!=NULL)

                {

                    Node * r = s.front();

                    Node * r2 = s2.front();

                    s.pop();

                    s2.pop();

                    v1[r->data]++;

                    v2[r2->data]++;

                    if(r->left != NULL)

                    s.push(r->left);

                    if(r->right != NULL)

                    s.push(r->right);

                    if(r2->left != NULL)

                    s2.push(r2->left);

                    if(r2->right != NULL)

                    s2.push(r2->right);

                }

                for(auto a : v1)

                    {

                        if(a.second != v2[a.first])

                        return false;

                    }

                s.push(NULL);

                s2.push(NULL);

            }

        }

        return true;
    }
};
