/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUTilingLayoutInvalidationContext : NSObject {
    NSMutableDictionary * __invalidatedIndexPathsByTileKind;
    bool  _invalidatedAllTiles;
    bool  _invalidatedAnyTile;
    bool  _invalidatedContentBounds;
    NSMutableSet * _invalidatedTileKinds;
}

@property (nonatomic, readonly) NSMutableDictionary *_invalidatedIndexPathsByTileKind;
@property (nonatomic) bool invalidatedAllTiles;
@property (nonatomic) bool invalidatedAnyTile;
@property (nonatomic, readonly) bool invalidatedContentBounds;
@property (nonatomic, readonly) NSSet *invalidatedTileKinds;

- (void).cxx_destruct;
- (id)_invalidatedIndexPathsByTileKind;
- (void)enumerateInvalidatedTilesUsingBlock:(id /* block */)arg1;
- (id)init;
- (void)invalidateAllTiles;
- (void)invalidateAllTilesWithKind:(id)arg1;
- (void)invalidateContentBounds;
- (void)invalidateTileWithIndexPath:(id)arg1 kind:(id)arg2;
- (bool)invalidatedAllTiles;
- (bool)invalidatedAnyTile;
- (bool)invalidatedContentBounds;
- (id)invalidatedTileKinds;
- (void)setInvalidatedAllTiles:(bool)arg1;
- (void)setInvalidatedAnyTile:(bool)arg1;

@end
