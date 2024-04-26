#include <stdio.h>
#include <stdlib.h>

// Define a structure for a linked list node
struct ListNode
{
    int dest;
    struct ListNode *next;
};

// Define a structure for a graph
struct Graph
{
    int numVertices;
    struct ListNode **adjLists;
};

// Create a new linked list node
struct ListNode *createListNode(int dest)
{
    struct ListNode *newNode = (struct ListNode *)malloc(sizeof(struct ListNode));
    newNode->dest = dest;
    newNode->next = NULL;
    return newNode;
}

// Create a new graph
struct Graph *createGraph(int numVertices)
{
    struct Graph *graph = (struct Graph *)malloc(sizeof(struct Graph));
    graph->numVertices = numVertices;
    graph->adjLists = (struct ListNode **)malloc(numVertices * sizeof(struct ListNode *));

    int i;
    for (i = 0; i < numVertices; i++)
    {
        graph->adjLists[i] = NULL;
    }

    return graph;
}

// Add an edge to the graph
void addEdge(struct Graph *graph, int src, int dest)
{
    struct ListNode *newNode = createListNode(dest);
    newNode->next = graph->adjLists[src];
    graph->adjLists[src] = newNode;

    // Add the edge in both directions for an undirected graph
    newNode = createListNode(src);
    newNode->next = graph->adjLists[dest];
    graph->adjLists[dest] = newNode;
}

// Print the graph
void printGraph(struct Graph *graph)
{
    int i;
    for (i = 0; i < graph->numVertices; i++)
    {
        struct ListNode *node = graph->adjLists[i];
        printf("Vertex %d: ", i);
        while (node != NULL)
        {
            printf("%d -> ", node->dest);
            node = node->next;
        }
        printf("NULL\n");
    }
}

int main()
{
    // Create a new graph
    struct Graph *graph = createGraph(5);

    // Add edges to the graph
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 4);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 1, 4);
    addEdge(graph, 2, 3);
    addEdge(graph, 3, 4);

    // Print the graph
    printGraph(graph);

    return 0;
}
