


# Measuring R Overhead

If one uses R strictly as an 'interface language' to high performance
compiled code, the overhead is quite small.

To prove this, let us compute a matrix-matrix multiply via the BLAS
call `dgemm`.  From pure C:


```bash
time ./dgemm
```

```
$ 
$ real	0m4.014s
$ user	0m13.120s
$ sys	0m1.928s
```

and from R:


```bash
time r dgemm.r
```

```
$ 
$ real	0m4.413s
$ user	0m13.760s
$ sys	0m1.196s
```


These values are nearly identical.  Note that even so, the R
version has additional interpreter overhead at a one-time cost,
and in general a slight overhead for each function evaluation.



# Machine

All tests performed using:

* R 3.2.0
* r ('littler') version 0.2.3
* OpenBLAS with `OMP_NUM_THREADS=4`
* gcc 4.9.1
* Core i5-2500K CPU @ 3.30GHz


