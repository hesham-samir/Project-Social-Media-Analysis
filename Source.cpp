//#include "pch.h"

#include <iostream>

#include <vector>

#include <list>

#include <queue>

#include <utility>

#define INF 200000000


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

		adj_list[from].push_back(make_pair(to, weight));

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



	void print_matrix()

	{

		for (int i = 0; i < this->nodes_num; i++)

		{

			cout << i;

			cout << " ";

			for (auto j = adj_list[i].begin(); j != adj_list[i].end(); j++)

			{

				cout << "(" << (*j).first << "," << (*j).second << ")";



			}

			cout << "\n";

		}

	}

	vector<int> dijkstra(int src)
	{
		int vertices = adj_list.size();
		vector<int> distance(vertices, INF);
		vector<int> predecessor(vertices, -1);
		vector<bool> visited(vertices, false);

		predecessor[src] = src;
		distance[src] = 0;

		priority_queue<pair<int, int>,
			vector<pair<int, int>>,
			greater<pair<int, int>>> p_queue;

		p_queue.push({ 0, src });

		while (!p_queue.empty())
		{
			int current_node = p_queue.top().second;
			p_queue.pop();

			if (visited[current_node])
				continue;

			visited[current_node] = true;

			for (auto iterator : adj_list[current_node])
			{
				int connected_node = iterator.first;
				int weight = iterator.second;
				if (distance[current_node] + weight < distance[connected_node])
				{
					distance[connected_node] = distance[current_node] + weight;
					predecessor[connected_node] = current_node;
					p_queue.push({ distance[connected_node], connected_node });
				}
			}
		}

		return distance;
	}

	int shortest_edges_sum(vector<int> distance) {
		
		int sum = 0;

		for (int i = 0; i < distance.size(); i++) {
			sum += distance[i];
		}
		
		return sum;
	}
	float closeness_algorithm(float N, float sum) {
		return (N - 1) / sum;
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

	vector<int> dist = G.dijkstra(3);
	float closeness_result = G.closeness_algorithm(4,G.shortest_edges_sum(dist));

	cout << "\n" << "weight from 0 to 2 is :  " << G.get_edge(0, 2) << endl;

	for (int i = 0; i < dist.size(); i++) {
		cout << dist[i] << endl;
	}

	cout << closeness_result << endl;

}
