#pragma once
#ifndef TERRAIN_H
#define TERRAIN_H

#include "octree.h"
#include "coord.h"
#include "block.h"

#include <map>

class Terrain
{
    public:
        Terrain();
        Terrain(int maxlevel, int minlevel, int initsizeX, int initsizeY, int initsizeZ, int chunkSize);

        int Maxlevel; // Lowest level in the octree possible
        int Minlevel; // Minimum level at which we start getting leaves instead of nodes
        int sizeX, sizeY, sizeZ; // Size in chunks in X,Y, and Z directions
        int chunkSize; // Chunk size in... units. >_>

        std::map<Coord, Octree<Block*> > GeneratedTerrain;
        void Regenerate();

    private:
        Octree<Block*> makeTerrainFrom(int level); //Generates the terrain from the specified level downwards. Almost always 0.
};

#endif
