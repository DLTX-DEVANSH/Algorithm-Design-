This repository consists of all the  code for the course `DAA (Design and Analysis of Algorithm)`  
>[!Note] This is not for typical DSA 
>This repository is focused on Design and Analysis of Algorithm not typical DSA course that are for Competitive programming . 
>This course focuses on theoretical understanding of Algorithm and their effect on runtime , RAM usage & sometimes on their machine langue instruction 

---
#### Structure of repository
Each Algorithm or Data Structure is arranged in their own folders eg:- Insertion_sort.c 
is placed in ./Insertion_sort 

The repository also consists the solution to select problems of the book `Introduction to Algorithms by Thomas H. Cormen, Charles E. Leiserson, Ronald L. Rivest, and Clifford Stein` 

Each code (folder of code) is placed in the folder of their respective chapter according to the book `Introduction to Algorithms Thomas H. Cormen, Charles E. Leiserson, Ronald L. Rivest, and Clifford Stein` . eg:- the full path of `insertion_sort.c` is placed in `/chapter 2/Insertion_sort`  

The list of all chapters names are written at the bottom of the Readme.md 

---
#### Language choice 
Every code is written in C as using a no fail safe and memory unsafe language like C helps in not only understanding the theory    but also helps in mastering the entire implementation part

---
#### Compilation and Makefiles

Every code can be compiled normally using a standard compiler like MSVC , GCC or Clang . 
each code folder also has a simple Makefile written for the code for compilation . The compilation can be performed using make files by simple bash commands 

```bash
linux> make 
```
`or`
```bash
linux> make all
```

**Make must me installed for this to work you can check if it is installed by**
```bash 
linux> make --version 
```

each Makefile also consists of CLEAN function that is responsible to clean and remove all object file , executable files and output.txt files 

```bash
linux> make CLEAN 
```

>[!note] Makefiles have no shell scripting 
>to keep things simple and good enough for learning i have not used any shell scripting (exception to some parts)

---
#### Memory checks using valgrind
I have deliberately not used free() functions in initial codes to get the understanding of memory leak and it's consequences .
To make this even more obvious , every Makefile consists of valgrind command and it's flag in `all`section 
**Note:- valgrind must be installed to use . you can check if it is installed by**
```bash
linux> valgrind --version
```

The the output for memory data will be generated in a text file generally named *memeory_info.txt*

---

#### Chapter names of the book "Introduction to Algorithms Thomas H. Cormen, Charles E. Leiserson, Ronald L. Rivest, and Clifford Stein"

 1) The Role of Algorithms in Computing
 2) Getting Started
 3) Growth of Functions
 4) Divide-and-Conquer
 5) Probabilistic Analysis and Randomized Algorithms
 6) Heapsort
 7) Quicksort
 8) Sorting in linear time
 9) Medians and Order Statistics
 10) Elementary Data Structures
 11) Hash tables 
12) Binary Search Trees
13) Red-Black Trees
14) Augmenting Data Structures
15) Dynamic Programming
16) Greedy Algorithms
17) Amortized Analysis  
18) B-Trees
19) Fibonacci Heaps
20) van Emde Boas Trees
21) Data Structures for Disjoint Sets
22) Elementary Graph Algorithms
23) Minimum Spanning Trees
24) Single-Source Shortest Paths
25) All-Pairs Shortest Paths
26) Maximum Flow
27) Multithreaded Algorithms
28) Matrix Operations
29) Linear Programming
30) Polynomials and the FFT
31) Number-Theoretic Algorithms
32) String Matching
33) Computational Geometry
34) NP-Completeness
35) Approximation Algorithms
