#include <bits/stdc++.h>
using namespace std;

#define ALPHABET_SIZE 256
class TrieNode
{
public:
	bool isWord;
	TrieNode *children[ALPHABET_SIZE];

	TrieNode()
	{
		this->isWord = false;
		for(int i = 0; i < ALPHABET_SIZE; i++)
			this->children[i] = NULL;
	}
};

class Trie
{
private:
	TrieNode *root;

public:
	Trie()
	{
		this->root = new TrieNode();
	}

	void insert(string str)
	{
		TrieNode *crawler = this->root;
		for(char c: str)
		{
			// if there's no node with this character
			if (!crawler->children[int(c)])
			{
				crawler->children[int(c)] = new TrieNode();
			}
			crawler = crawler->children[int(c)];
		}
		crawler->isWord = true;
	}

	bool search(string str)
	{
		TrieNode *crawler = this->root;
		for (char c: str)
		{
			if (!crawler->children[int(c)])
			{
				return false;
			}
			crawler = crawler->children[int(c)];
		}

		return crawler->isWord==true;
	}

	bool isLeaf(TrieNode *crawler)
	{
		for(int i=0; i<ALPHABET_SIZE; i++)
		{
			if (crawler->children[i])
			{
				return false;
			}
		}
		return true;
	}

	bool removeUtil(TrieNode *crawler, string &str, int curr, int len)
	{
		if (crawler)
		{
			if (curr == len)
			{
				crawler->isWord = false;
				if (this->isLeaf(crawler))
					return true;
				return false;
			}
			else
			{
				if (removeUtil(crawler->children[int(str[curr])], str, curr+1, len))
				{
					delete (crawler->children[int(str[curr])]);
					return this->isLeaf(crawler) && !crawler->isWord;
				}
			}
		}
		return false;
	}

	void remove(string str)
	{
		TrieNode *crawler = this->root;
		this->removeUtil(crawler, str, 0, str.size());
	}

	void printDictionaryHelper(TrieNode *crawler, string &str)
	{
		if (crawler)
		{
			if (crawler->isWord)
			{
				cout << str << endl;
			}

			for (int i=0; i<ALPHABET_SIZE; i++)
			{
				if (crawler->children[i])
				{
					str += char(i);
					printDictionaryHelper(crawler->children[i], str);
					str = str.substr(0, str.size()-1);
				}
			}
		}
	}

	void printDictionary()
	{
		TrieNode *crawler = this->root;
		string str = "";
		printDictionaryHelper(crawler, str);
	}
};

int main()
{
	Trie trie;
	trie.insert("dog");
	trie.insert("do");
	trie.insert("cat");
	trie.insert("catnip");
	trie.insert("battle");
	trie.printDictionary();
	trie.remove("catnip");
	trie.printDictionary();
	return 0;
}
