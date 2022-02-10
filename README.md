# Fallout1DOSPatcher
A patcher for the MS-DOS version of Fallout 1 including Crafty's sFall1 patches and maybe more

Hi everyone. I've decided to attempt to port all patches made to the Windows version of Fallout 1 to the MS-DOS one. This way, those who play on devices which can only execute the game with an MS-DOS emulator, can also enjoy the patches that the Windows version players can.

Why Go and not Python or C or something? I prefer Go over Python (I like compilers complaining over types and other things aside from Go being easy to compile to an EXE), and C is too much hassle for such a simple thing.

## Download

Download any version you'd like (preferably the most recent one) here: https://github.com/DADi590/Fallout1DOSPatcher/releases.

## Contributing

Anyone is free to contribute to the repository with new patch ports, new patches entirely, port fixes, whatever that is useful.

## There are bugs I don't know how to fix

Currently there are bugs on the ported code.
- One very noticeable is that when you create a new game, go on the dead body and click D when exchanging items, an error dialog appears --> with no error written. I've no idea why that happens. I'm pointing to a readable place in memory, so wtf.
- Other errors include when clicking D with fewer items to exchange with the body, all disappears. But only from the screen. It's all on the dead body's inventory if you go back and exchange items again.
- Or the current and total weight not showing on the inventory.

These for now, but maybe more as more patches are ported

## How I've been doing this

I've been checking this repository: https://github.com/Aramatheus/sfall_1. It has the sFall1 1.20 source with small modifications from Sduibek (Fallout Fixt's creator). If this one gets working well, I go over to sFall1 1.3 entirely by Crafty and then (or right to) 1.7.6. There's also version 1.8, but there's no public source that I have found. That one requires reverse engineering unless the source is found somewhere. The reason I'm not already using version 1.7.6 is because the Loot/Drop all patch doesn't work when I port it. No idea if it needs other patches to work, but at least on 1.20 it's working, so it seems a good place to start.

Also, MASM or NASN or whatever you prefer to use is very useful to assemble the instructions Crafty has on the source. Then the assembled EXE or OBJ file can be opened in a hex editor and the bytes copied to the DOS EXE, and finally the only thing left to do is correct all addresses and offsets. I've been going on the Windows EXE distributed with Fallout Fixt, go on all addresses I find on sFall1's source, and then use the hex bytes near that address to find the correct function on the DOS EXE. So far, this worked well for the Loot/Drop all feature, so that's what I've been doing.

Before this I started by writing the opcodes myself (that's painful...). Then I found out IDA (The Interactive Disassembler) can assemble individual instructions and I went that route. I had to kind of bet with myself if jumps were short or near (short because there's not much space, so it must be saved as much as possible), but not really a problem. Except when I'd make a wrong bet and I had to move all the code backwards or onwards and correct all addresses and offsets --> wtf. So MASM came in very helpful. I just copy the Assembly code, paste it on an editor, assemble with MASM and do what I described above. Much simpler.
