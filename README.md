## About
<img src="https://img.itch.zone/aW1hZ2UvNTMxMzM1LzI3NjIzNzIucG5n/original/UxmsgW.png" width="348" height="313" />
This is a very basic AI implementation for digits recognition.

The algorithm was trained using the MNIST database. It's based on a decision tree and isn't too accurate because of the memory constraints of the gameboy. I originally planned to use neural networks but it wouldn't have been a lot more accurate and I wanted to finish the project in a single day.

## How to use this
If you just want to try this out have a look at the [project page](https://z80z80z80.itch.io/gameboy-ai), where you can play it online.

Additionaly you can download the ROM-file [here](https://github.com/z80z80z80/GameBoyAI/raw/master/model.gb). It also works on original Game Boy hardware with a flash cartridge.

## How to build
### Install requirements
#### (A) if you want to rebuilt the model and compile you need the GameBoy Developers Kit (GBDK):
* Arch Linux: `yay -S gbdk`   
* Ubuntu: see [here](https://github.com/gheja/gbdk)
   
#### (B) if you also want to build a completely new decision tree you need to install the following (quite huge) packages:
```bash
pip install numpy, tensorflow, sklearn, numba
```

### Build instructions 
#### (A) compiling using the prebuilt decision tree:
```bash
python convert_decision_tree.py prebuilt_tree
make
```

#### (B) compiling from scratch:
```bash
python train_decision_tree.py <max_depth> <verbose> <outfile>
python convert_decision_tree.py <outfile>
make
```
   * `<max_depth>`: the maximum depth of the decision tree (I used `10`)      
   * `<verbose>`: use `1` to see some benchmarks; use `0` for production (I used `0`)      
   * `<outfile>`: where to save the decision tree      
