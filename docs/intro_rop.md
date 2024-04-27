# ROP usage
--> [Back to README](../README.md)

## ROP injection
[ROP input tutorial](../README.md)

## ROP debugging

We'll use this example program:
```
pop er0
hex 30 d2
read_key 
pop er0
hex 32 d2 
```
Let's say you want to see what happens after `read_key`.  
First, you will need to find the address of the `pop er0` gadget, which you can find in `sym.txt` (`1:21A8H`/`0x121a8`)

Before running the ROP hackstring, you will need to go to the gadget address in the disassembly:
![](./rop_1.png)
Then, click on the `[ o ]`, it will change into a red `[ x ]`, which sets a breakpoint here:
![](rop_2.png)

Now run the ROP hackstring, and the breakpoint will hit:
![](rop_3.png)
| Command | Description |
|--|--|
| step | Single step execution (equivalent to Step Into in most debuggers) |
| next | Continue (equivalent to Run in most debuggers) |
| trace | Trigger a breakpoint on every `POP PC` or `RT` (can be used to track the ROP chain) |

Watch window:
![](rop_4.png)