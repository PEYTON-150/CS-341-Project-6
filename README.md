Objective:
Using the principles of hashing, you'll design and implement the following:

A base hash table class (HashTable) that serves as the foundation.
Three derived classes for each collision handling method:
HashTableLinearProbing
HashTableChaining
HashTableCuckoo

A menu-driven interface allowing users to:
Load hash tables from files.
Insert, search, and delete values.
Display the contents of the hash tables.
Select different hashing methods to see how each handles data collisions.
Implement the rehash function to resize the hash table when necessary.

Phases of Development:
Phase 0: Create load files that simulate preloading a hash table with unique integer values ranging from 1 to 999.
Phase 1: Build a menu system that allows users to interact with your program and test the hashing methods.
Phase 2: Implement Linear Probing using a simple modulo hash function to resolve collisions.
Phase 3: Implement Separate Chaining using an STL list to handle collisions.
Phase 4: Implement Cuckoo Hashing with two different hash functions to manage collisions in two tables.
Phase 5: Create a Rehash function to dynamically resize the table when capacity is exceeded.

Key Learning Objectives:
Develop a deep understanding of hashing and collision resolution techniques.
Use C++ inheritance to design and extend base class functionality.
Manage dynamic memory allocation and ensure efficient memory usage.
Create a user-friendly (albeit snarky) menu interface to guide users through various hash table operations.
