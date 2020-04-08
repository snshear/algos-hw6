#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <queue>
#include <climits>

using namespace std;



class Solution {

	/*
	* Class data:
	* m_graph:
    *   unordered_map where the keys are node IDs and the values are agjacency lists
    *   *The first entry in each adjacency list is the weight of the key node
    * start_node & end_node:
    *   The id of the start and end node respectively 
	*/
public:

	Solution(int start_node, int end_node, unordered_map<int, vector<int>> in_graph);
	vector<int> outputPath();
	vector<int> m_output_path;
    unordered_map<int, vector<int>> m_graph;
    int m_start_node;
    int m_end_node;
};



Solution::Solution(int start_node, int m_end_node, unordered_map<int, vector<int>> in_graph) :
	m_graph(in_graph), m_start_node(start_node), m_end_node(m_end_node)
{/* Nothing needs to be added here.*/}


vector<int> Solution::outputPath() {
    /*
     * Output the node ids of the smallest weighted path.
     */
    return vector<int>();
}
