# Assembler usage
--> [Back to README](../README.md)
## Running environment
- Python 3.8+

## Gadgets/functions
Commonly used gadgets (for fx-991CN X VerC) are included.
### Included gadgets
![](./sym_1.png "")
![](./sym_2.png "")
### Included functions
![](./sym_3.png)

The above is only part of what's included, see `sym.txt` for the full list.  
### Adding gadgets/functions
The syntax of `sym.txt` is as follows:
```
01234       gadgets_label
@02345       function_label
; comment
```
Note that there must be exactly **7 spaces** between the address and the label. You cannot use tabs. (It's a quirk of the assembler)

You can also add `@` before the address. If you now use that gadget in your ROP assembly file, the assembler will add 2 to the address.
Adding `@` before the gadget name in the assembly file will prevent this.

## Compiling
Run `python asm.py test.asm` and go for broke! If everything checks out, you will get your ROP hackstring in both token and hex form as shown below.
![](./sym_4.png)
