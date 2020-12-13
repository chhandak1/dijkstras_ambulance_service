# Ambulance Service Using Modified Dijkstra's Algorithm

In this project we have developed a modified version of the Dijskstra's shortest path algorithm and have applied to the ambulance service so that the ambulance can choose the best path to reach its destination.
We have implmented this algorithm on the map of Vellore district in Tamil Nadu, India for this project.

## Drawbacks of the Conventional Algorithm
The conventional Dijkstra’s algorithm has generates a lot of redundancy of space and time. The
algorithm based on the storage of data structure stores network information with appropriate data structure before
carrying out the shortest path search. The number of elements in correlation matrix expands as geometric series with
the increasing of nodes/vertices, which brings a serious waste of resource space and lots of useless cycle. Thus search
efficiency is seriously reduced.

## Proposed Method
In order to reduce the search range, the proposed improved algorithm based on the search strategy introduces
constraint functions r(n) for each searching node in state space. So the core formula of the improved shortest
algorithm is defined as follows.
D( n ) = d( n ) + r ( n ) , -π/2 ≤ θn ≤π/2, where, r(n) = ω*cos(θn), d(n) denotes the weight value of shortest path from
the starting point to the current node n. r(n) is constraint function, ω is a weighted value denoting the impact factor,
θn is the angle between the vector that consists of nodes from starting point to current node and the vector that
consists of nodes from starting point to the end point. Because of the limitation of θn, the search range of is reduced
and the search efficiency is improved.

This project contains the codebase for this paper: http://www.ijptonline.com/wp-content/uploads/2016/10/17627-17633.pdf
