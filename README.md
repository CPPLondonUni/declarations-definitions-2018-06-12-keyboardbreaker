# Definitions and Declarations

This task is designed to teach you how to create definitions and separate them from declarations.

## Task

Within this project, currently everything is defined within main.cpp - whilst this is OK for a tiny app,
we're going to pretend that this is much larger since in those cases, you then want to separate your code
into multiple files and you have to do that by having shared declarations and self-contained definitions.

After all, who wouldn't lose their sanity if an entire 100,000 line code base was in a single file?

## Instructions

1. Compile the program as-is and see it working for yourself.
2. Move the first 2 functions (not main!) into utility.cpp - try to compile, note the relationship between compiler errors and individual source files.
3. Fix the errors in utility.cpp (hint: it's something to do with missing #include statements)
4. Create declarations (NOT definitions) in utility.h that correspond to the definitions in utility.cpp (no, don't just copy-paste the entire functions)
5. Try to compile and run it. If you did it right, you should be able to try out the program.
6. Submit it to the GitHub Classroom assignment.

