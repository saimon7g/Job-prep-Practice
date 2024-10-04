// // Given a set of orderings of letters, determine their topological sorting order. The orderings are provided as strings. For example, given the input ["A>B", "B>C", "C>D"], the expected output is "ABCD".
// 1. LeetCode 207: Course Schedule
// Problem: You are given the number of courses and their prerequisites as pairs of courses. Determine if you can finish all courses without any cyclic dependency.
// Description: This problem is a classic example of topological sorting using Kahn’s Algorithm or Depth-First Search (DFS). If there's a cycle in the prerequisites, it's impossible to complete all courses.
// Link: LeetCode 207: Course Schedule
// 2. LeetCode 210: Course Schedule II
// Problem: Similar to Course Schedule I, but instead of returning whether it's possible to complete all courses, you need to return the actual order in which to take the courses.
// Description: The problem requires a valid topological order of the courses. If no valid order exists due to a cycle, return an empty array.
// Link: LeetCode 210: Course Schedule II
// 3. LeetCode 269: Alien Dictionary
// Problem: Given a sorted dictionary of alien language words, determine the order of characters in the alien language.
// Description: This is a direct application of topological sorting, where you derive the character order from the input "dictionary" by building a graph and performing topological sorting.
// Link: LeetCode 269: Alien Dictionary
// 4. LeetCode 802: Find Eventual Safe States
// Problem: Given a directed graph, return all nodes that are eventually safe, i.e., nodes from which no cycles can be reached.
// Description: This problem can be solved using topological sorting in reverse or through DFS-based cycle detection.
// Link: LeetCode 802: Find Eventual Safe States
// 5. LeetCode 444: Sequence Reconstruction
// Problem: Given an original sequence and a list of sequences, determine if the original sequence can be uniquely reconstructed from the sequences using topological sorting.
// Description: This problem tests your understanding of unique topological sorts and how to build a valid ordering from smaller subsequences.
// Link: LeetCode 444: Sequence Reconstruction
// 6. LeetCode 1136: Parallel Courses
// Problem: You are given n courses and a list of prerequisites, and you need to find the minimum number of semesters required to finish all courses, with each semester allowing you to take multiple courses (if prerequisites are met).
// Description: This problem uses topological sorting to calculate the longest path (in terms of the number of semesters) in a Directed Acyclic Graph (DAG).
// Link: LeetCode 1136: Parallel Courses
// 7. LeetCode 329: Longest Increasing Path in a Matrix
// Problem: Given an m x n matrix, find the length of the longest increasing path in the matrix.
// Description: This problem can be solved by building a graph where each cell points to its larger neighboring cells, and then topologically sorting the graph to find the longest path.
// Link: LeetCode 329: Longest Increasing Path in a Matrix
// 8. LeetCode 1976: Number of Ways to Arrive at Destination
// Problem: You are given a graph where each edge has a travel time, and you need to find how many different ways you can arrive at a destination in the shortest time.
// Description: While this is not strictly topological sorting, it involves shortest paths and cycle detection, which are often related to topological sorting in DAGs.
// Link: LeetCode 1976: Number of Ways to Arrive at Destination
