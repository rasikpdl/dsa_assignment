#include <stdio.h>
#define INF 999

int main() {
    int n, cost[10][10], dist[10], visited[10] = {0}, src;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter cost matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &cost[i][j]);

    printf("Enter source: ");
    scanf("%d", &src);

    for (int i = 0; i < n; i++)
        dist[i] = cost[src][i];

    visited[src] = 1;

    for (int count = 1; count < n; count++) {
        int min = INF, u;
        for (int i = 0; i < n; i++)
            if (!visited[i] && dist[i] < min) {
                min = dist[i];
                u = i;
            }

        visited[u] = 1;

        for (int i = 0; i < n; i++)
            if (!visited[i] && dist[u] + cost[u][i] < dist[i])
                dist[i] = dist[u] + cost[u][i];
    }

    for (int i = 0; i < n; i++)
        printf("Distance from %d to %d = %d\n", src, i, dist[i]);

    return 0;
}
