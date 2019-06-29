#include "pch.h"
#include <iostream>
#include <vector>
#include <list>
#include <utility>

using namespace std;

class graph
{
private:
	vector<list <pair<int, int> > > adj_list;
	int nodes_num;
public:
	graph(int n)
	{
		nodes_num = n;
		adj_list.resize(n);
	}

	void add_edge(int from, int to, int weight)
	{
		adj_list[from].push_back(make_pair(to,weight));
		adj_list[to].push_back(make_pair(from, weight));
	}

	int get_edge(int from, int to)
	{
		for (auto i = adj_list[from].begin(); i != adj_list[from].end(); i++)
		{
			if ((*i).first == to)
			{
				return((*i).second);
			}
		}
		return 0;
	}

	int get_node_degree(int id)
	{
		return adj_list[id].size();
	}
	void print_all_degree()
	{
		for (int i = 0; i < this->nodes_num; i++)
		{
			cout << get_node_degree(i)<<"\n";
		}
	}
	void print_matrix()
	{
		for (int i = 0; i < this->nodes_num; i++)
		{
			cout << i;
			cout << " ";
			for (auto j = adj_list[i].begin(); j != adj_list[i].end(); j++)
			{
				cout <<"("<< (*j).first <<"," << (*j).second<<")";

			}
			cout << "\n";
		}
	}
};
int main()
{
	graph G(4);
	G.add_edge(0, 2, 10);
	G.add_edge(1, 0, 1);
	G.add_edge(0, 3, 5);
	G.add_edge(3, 1, 1);
	G.add_edge(2, 3, 4);
	G.print_matrix();
	cout << "TESTING DEGREE CENTRALITY ....\n\n";
	G.print_all_degree();

	cout<<"\n"<<"weight from 0 to 2 is :  "<<G.get_edge(0, 2);
}
