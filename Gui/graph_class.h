#ifndef GRAPH_CLASS_H
#define GRAPH_CLASS_H
#include <iostream>
#include <vector>
#include <list>
#include <utility>
#include <queue>

#define INF 200000000

using namespace std;

class graph_class
{
public:
    graph_class(int n);
    void add_edge(int from, int to, int weight);
    int get_edge(int from, int to);
    int get_node_degree(int id);
    void print_all_degree();
    vector<int> dijkstra(int src);
    void printPath(vector<int> parent, int j);
    int shortest_edges_sum(vector<int> distance);
    double closeness_algorithm(double N, double sum);
    void print_matrix();

private:
    vector<list <pair<int, int> > > adj_list;
    int nodes_num;
};

#endif // GRAPH_CLASS_H
