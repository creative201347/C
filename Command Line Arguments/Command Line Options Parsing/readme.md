# Command Line Options Parsing (getopt, getopt_long) | C Programming

The **getopt** and **getopt_long** functions automate some of the chore involved in parsing typical unix command line options.

## Short

**./executable -o**

```
#include<getopt.h>

int getopt(
    int argc, // argc received in main()
    const char *argv[], // argv received in main()
    const char *optstring // string of opt characters
)
```

### Return Value

**option charcater (one by one)** if the passed options are valid

- **'?'** If the option is either invalid or if required option argumnet is missing
- **-1** If there are no more options left to parse

### External Variables

- **optarg**: stores the value of the option argument (if any)
- **optind**: stores the current index of argv while parsing options

## Long Options

**./executable --option**

```
#include<getopt.h>

struct options{
    const char *name; // long option name
    int has_arg; // whether this option should have argument or not
    int *flag; // a pointer to a integer flag if it is to be set
    int val; // the value to be either set to flag or returned
};

int getopt_long(
    int argc, // argc received in main()
    const char *argv[], argv received in main()
    const char *shortopts, // string of short option characters
    const struct option *longopts, // array of long option structures
    int * indexpptr // pointer to variable that stores option index
)
```

### Return Value

**option charcater (one by one)** for short option if the passed option is valid

- **val** For long option if the passed option is valid and flag in NULL
- **0** For long option if the passed option is valid and flag is not NULL
- **'?'** If the option is either invalid or if required option argument is missing
- **-1** If there are no more options left to parse

### External Variables

- **optarg**: stores the value of the option argument (if any)
- **optind**: stores the current index of argv while parsing options
