# Variable Length Array (VLA) definition:

is an array whose size is determined at runtime rather than compile time. This feature was introduced
in C99 standard (so if you try to compile with the `std=c89` flag for instance, you'll have an error)
and allows for more flexible array declarations.
