/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUImageLayout : NSObject {
    struct { 
        long long width; 
        long long height; 
    }  _imageSize;
}

@property (nonatomic, readonly) struct { long long x1; long long x2; } imageSize;
@property (nonatomic, readonly) long long tileCount;

+ (id)contiguousLayoutForImageSize:(struct { long long x1; long long x2; })arg1;
+ (id)overlappingTiledLayoutForImageSize:(struct { long long x1; long long x2; })arg1 tileSize:(struct { long long x1; long long x2; })arg2 borderSize:(struct { long long x1; long long x2; })arg3;
+ (id)stripLayoutForImageSize:(struct { long long x1; long long x2; })arg1 stripHeight:(long long)arg2;
+ (id)tiledLayoutForImageSize:(struct { long long x1; long long x2; })arg1 tileSize:(struct { long long x1; long long x2; })arg2;

- (struct { long long x1; long long x2; })borderSize;
- (struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })contentRectForTileAtIndex:(long long)arg1;
- (void)enumerateTilesForReadingInRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg1 withBlock:(id /* block */)arg2;
- (void)enumerateTilesForWritingInRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg1 withBlock:(id /* block */)arg2;
- (struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })frameRectForTileAtIndex:(long long)arg1;
- (struct { long long x1; long long x2; })imageSize;
- (id)initWithImageSize:(struct { long long x1; long long x2; })arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToLayout:(id)arg1;
- (long long)tileCount;
- (struct { long long x1; long long x2; })tileCounts;
- (long long)tileIndexAtPoint:(struct { long long x1; long long x2; })arg1;
- (id)tileInfoAtIndex:(long long)arg1;
- (struct { long long x1; long long x2; })tileSize;

@end
