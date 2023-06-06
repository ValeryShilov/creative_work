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
  

    Graph<int> graph(1);


    graph.visualizeGraph(graph);

    return 0;
}