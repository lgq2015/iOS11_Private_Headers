/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface _NUFixedTileSizeImageLayout : NUImageLayout {
    struct { 
        long long width; 
        long long height; 
    }  _borderSize;
    struct { 
        long long width; 
        long long height; 
    }  _tileCounts;
    struct { 
        long long width; 
        long long height; 
    }  _tileSize;
}

- (struct { long long x1; long long x2; })borderSize;
- (struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })contentRectForTileAtIndex:(long long)arg1;
- (struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })frameRectForTileAtIndex:(long long)arg1;
- (id)initWithImageSize:(struct { long long x1; long long x2; })arg1 tileSize:(struct { long long x1; long long x2; })arg2 borderSize:(struct { long long x1; long long x2; })arg3;
- (bool)isEqualToLayout:(id)arg1;
- (long long)tileCount;
- (struct { long long x1; long long x2; })tileCounts;
- (id)tileInfoAtIndex:(long long)arg1;
- (struct { long long x1; long long x2; })tileSize;

@end
