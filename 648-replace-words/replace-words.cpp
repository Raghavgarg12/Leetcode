class Trie{
    public:
    Trie* children[26];
    bool isEnd;
    Trie(){
        for(int i=0;i<26;i++) children[i]=nullptr;
        isEnd=false;
    }
};
class Solution {
public:
    Trie* root;
    Solution(){
        root=new Trie();
    }
    void insert(string word){
        Trie* node = root;
        for(auto x: word){
            int i = int(x-97);
            if(node->children[i]==nullptr) node->children[i]=new Trie();
            node=node->children[i];
        }
        node->isEnd=true;
    }
    string search(string word){
        Trie* node=root;
        string ans;
        for(auto x: word){
            int i = int(x-97);
            if(node->children[i]==nullptr) return word;
            ans+=x;
            if(node->children[i]->isEnd==true) return ans;
            node=node->children[i];
        }
        return word;
    }
    string replaceWords(vector<string>& dictionary, string sentence) {    
        for(auto x: dictionary) insert(x);
        stringstream ss(sentence);
        string x,ans="";
        while(ss>>x){
            if(!ans.empty()) ans+=" ";
            ans+=search(x);

        }
        return ans;
    }
};