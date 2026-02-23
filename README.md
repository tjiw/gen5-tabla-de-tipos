# pokemon-typechart
This program calculates, given a Pokémon's typing, its strengths and weaknesses, with their respective multipliers. Currently valid from 5th gen backwards. Available in English and Spanish.

## Requisites
Having the gcc compiler installed.
## Usage
Download the latest release in your language and extract the zip file.
### Windows
Execute the .bat file in the folder.
### Linux/Mac
Open a terminal window, navigate to the install folder and type:
#### make
Alternatively, type: \
If you want to compile in English:
#### gcc -g -DINGLES -o typechart typechart.c func.c
If you want to compile in Spanish:
#### gcc -g -o typechart typechart.c func.c
