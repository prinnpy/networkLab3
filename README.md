# CSCI 3761: Network Lab 3

- Unzipped .tar file
- Upload all files to csegrid

### Run MST

- cd into server folder then type: `make` 
- To run server: `./lab3`

```
make
./lab3
```

### Run program

##### Program start
```
Example: > mymst input.txt
> 
```

##### Run with correct inputs
```
Example: > mymst input.txt
> mymst input.txt

Total Excution Time = 1.666 ms
Minimum Cost = 6
Minimum Spanning Tree (T): (1,3) -> (2,4) -> (3,5) -> (5,4) -> (6,5)

```

##### Invalid prompt
```
Example: > mymst input.txt
> asdf input.txt

Invalid prompt. Please enter prompt again.
```

##### Invalid input file
```
Example: > mymst input.txt
> mymst random.txt

Unable to open file random.txt
```

### Create .tar

- Go to directory that you want to make .tar file
- Run command below

```
tar -czvf <new-filename>.tar.gz <tar filename>
```


### Status

- 100% working locally and on csegrid!


---


**Name:** Prinn Prinyanut

**Instagram:** [@prinnpyn](https://www.instagram.com/prinnpyn)

**Email:** prinnprinyanut@gmail.com or prinn.prinyanut@ucdenver.edu
