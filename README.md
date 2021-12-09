## HOW TO BUILD

```sh
cd sqlines
make clean && make
```



## HOW TO USE

```
How to use:
    sqlines -option=value [...n]

Options:
   -s        - Source type
   -t        - Target type
   -in       - List of files (wildcards *.* are allowed)
   -out      - Output directory (the current directory by default)
   -log      - Log file (sqlines.log by default)
   -?        - Print how to use

Example:
Convert script.sql file from Oracle to openGauss
   ./sqlines -s=oracle -t=opengauss -in=script.sql
```

