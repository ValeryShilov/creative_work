#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <vector>
#include <cmath>
#include <algorithm>
#include "Graph.h"

template<typename T>
void drawGraph(sf::RenderWindow& window, Graph<T>& graph, const std::vector<Vertex<T>>& vertices, const std::vector<Edge<T>>& edges) {
    for (const auto& edge : edges) {
        window.draw(edge.line, 2, sf::Lines);
        window.draw(edge.text);
    }

    for (const auto& vertex : vertices) {
        window.draw(vertex.shape);
        window.draw(vertex.text);
    }
    window.display();
}


int main() {
    setlocale(LC_ALL, "rus");
    //int amountVerts, amountEdges, weightEdge;
    //int vertex, sourceVertex, targetVertex;

    //std::cout << "Enter num of vertex: "; std::cin >> amountVerts; std::cout << std::endl;
    //std::cout << "Enter num of edges: "; std::cin >> amountEdges; std::cout << std::endl;

    Graph<int> graph(1);

    //for (int i = 0; i < amountVerts; i++)
    //{
    //    std::cout << "Vertex: "; std::cin >> vertex;
    //    graph.insertVertex(vertex);
    //    std::cout << std::endl;
    //}
    //for (int i = 0; i < amountEdges; i++)
    //{
    //    std::cout << "Source vert: "; std::cin >> sourceVertex; std::cout << std::endl;
    //    std::cout << "End vert: "; std::cin >> targetVertex; std::cout << std::endl;
    //    std::cout << "Weight of edge: "; std::cin >> weightEdge; std::cout << std::endl;

    //    graph.insertEdge(sourceVertex, targetVertex, weightEdge);
    //}
    //std::cout << std::endl;
    //graph.print();
  /*  graph.TSP();*/

    graph.visualizeGraph(graph);

    return 0;
}