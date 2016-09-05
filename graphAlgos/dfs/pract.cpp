#include <vector>
#include <iostream>

class Graph {
public:
	int size;
	Graph(int size);
	void dfs(int path, bool visited[]);
	void initialize(int path);
	void addEdge(int v, int e);//not verticie and edge
	std::vector<std::vector<int>> adjacency;
};

//initialize size of graph
//You use new to perform dynamic allocation. It returns a pointer that points to the dynamically allocated object.
//You have no reason to use new, since A is an automatic variable.You can simply initialise A using its constructor :
//http://stackoverflow.com/questions/21663256/how-to-initialize-a-vector-of-vectors
Graph::Graph(int size) {
	this->size = size;
	adjacency = std::vector<std::vector<int>>(size, std::vector<int>());//initilze rows of vector
}

//DFS traversal of the vertices reachable from v
void Graph::dfs(int path, bool visited[]) {
	//visited the node
	visited[path] = true;
	std::cout << path << std::endl;

	//recurance
	std::vector<int>::iterator i;//iterator for vector bc numbers not in order
	//start on row of num
	for (i = adjacency[path].begin(); i != adjacency[path].end(); ++i)
		if (!visited[*i])
			dfs(*i, visited);//dereference the pointer
}

void Graph::initialize(int path) {
	//created dynamic array to store rows of visited
	bool * visited = new bool[size];
	for (int i = 0; i < size; i++) { //init to false
		visited[i] = false;
	}

	//begin dfs
	dfs(path, visited);
}

//create connection between two points.
void Graph::addEdge(int v, int e) {
	adjacency[v].push_back(e);
}

int main() {
	//Graph * test = new Graph(5);
	//test->addEdge(0, 1);

	Graph test(5);
	std::cout << test.adjacency.size();
	test.addEdge(0, 1);
	test.addEdge(0, 2);
	test.addEdge(1, 2);
	test.addEdge(2, 0);
	test.addEdge(2, 3);
	test.addEdge(3, 3);

	std::cout << "Following is Depth First Traversal (starting from vertex 2) \n";
	test.initialize(2);

	return 0;
}
