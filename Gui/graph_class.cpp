#include "graph_class.h"

graph_class::graph_class(int n)
{
    nodes_num = n;
    adj_list.resize(n);
}
void graph_class::add_edge(int from, int to, int weight)
{
    adj_list[from].push_back(make_pair(to,weight));
    adj_list[to].push_back(make_pair(from, weight));
}

int graph_class::get_edge(int from, int to)
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

int graph_class::get_node_degree(int id)
{
    return adj_list[id].size();
}

void graph_class::print_all_degree()
{
    for (int i = 0; i < this->nodes_num; i++)
    {
        cout << get_node_degree(i)<<"\n";
    }
}

vector<int> graph_class::dijkstra(int src)
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
    for (int i = 0; i < predecessor.size();i++)
    {
        cout << predecessor[i] << "\n";
    }
    cout << "#########################################################";
    //printPath(predecessor, 2);
    return distance;
}

void graph_class::printPath(vector<int> parent, int j)
{
    // Base Case : If j is source
    if (parent[j] == -1)
        return;

    printPath(parent, parent[j]);

    printf("%d ", j);
}

int graph_class::shortest_edges_sum(vector<int> distance)
{
    int sum = 0;

    for (int i = 0; i < distance.size(); i++)
    {
        sum += distance[i];
    }

    return sum;
}

double graph_class::closeness_algorithm(double N, double sum)
{
    return (N - 1) / sum;
}

void graph_class::print_matrix()
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
