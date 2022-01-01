#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
class trie;
class node
{
    char data;
    bool isTerminal;
    unordered_map<char, node *> mp;

public:
    node(char d)
    {
        data = d;
        isTerminal = false;
    }
    friend class trie;
};
class trie
{
    node *root;

public:
    trie(){
        root = new node('\0');
    }
    void insert(string word)
    {
        node *temp = root;
        for (char ch : word)
        {
            if (temp->mp.count(ch) == 0)
            {
                node *n = new node(ch);
                temp->mp[ch] = n;
            }
            temp = temp->mp[ch];
        }
        temp->isTerminal = true;
    }
    bool search(string word)
    {
        node *temp = root;
        for (char ch : word)
        {
            if (temp->mp.count(ch) == 0)
            {
                return false;
            }
            temp = temp->mp[ch];
        }
        return temp->isTerminal;
    }
};
int main()
{
    string words[] = {"apple", "ape", "hell", "hello", "mango", "he"};
    trie t;
    for (string word : words)
    {
        t.insert(word);
    }
    string key;
    getline(cin, key);
    cout << t.search(key) << endl;
    return 0;
}