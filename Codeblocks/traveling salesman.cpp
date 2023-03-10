#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; // number of cities
    cin >> n;

    vector<vector<int>> dist(n, vector<int>(n)); // distance matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> dist[i][j];
        }
    }
    vector<int> tour(n); // current tour
    for (int i = 0; i < n; i++) {
        tour[i] = i;
    }

    int bestDist = INT_MAX; // best tour distance
    vector<int> bestTour(n); // best tour
    do {
        int tourDist = 0; // current tour distance
        for (int i = 0; i < n-1; i++) {
            tourDist += dist[tour[i]][tour[i+1]];
        }
        tourDist += dist[tour[n-1]][tour[0]]; // return to starting city
        if (tourDist < bestDist) {
            bestDist = tourDist;
            bestTour = tour;
        }
    }
    while (next_permutation(tour.begin()+1, tour.end())); // generate next permutation

    cout << "Best tour distance: " << bestDist << endl;
    cout << "Best tour: ";
    for (int i = 0; i < n; i++) {
        cout << bestTour[i] << " ";
    }
    cout << endl;

    return 0;
}
