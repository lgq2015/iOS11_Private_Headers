/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUOneUpTilingLayoutInvalidationContext : PUTilingLayoutInvalidationContext {
    bool  _invalidatedAccessoryTile;
    bool  _invalidatedCommentsTile;
    bool  _invalidatedContentInsets;
    bool  _invalidatedContentOffset;
    bool  _invalidatedVideoPlaceholderTile;
    unsigned long long  _options;
}

@property (setter=_setInvalidatedAccessoryTile:, nonatomic) bool invalidatedAccessoryTile;
@property (nonatomic, readonly) bool invalidatedCommentsTile;
@property (setter=_setInvalidatedContentInsets:, nonatomic) bool invalidatedContentInsets;
@property (setter=_setInvalidatedContentOffset:, nonatomic) bool invalidatedContentOffset;
@property (setter=_setInvalidatedVideoPlaceholderTile:, nonatomic) bool invalidatedVideoPlaceholderTile;
@property (setter=_setOptions:, nonatomic) unsigned long long options;

- (void)_setInvalidatedAccessoryTile:(bool)arg1;
- (void)_setInvalidatedContentInsets:(bool)arg1;
- (void)_setInvalidatedContentOffset:(bool)arg1;
- (void)_setInvalidatedVideoPlaceholderTile:(bool)arg1;
- (void)_setOptions:(unsigned long long)arg1;
- (bool)invalidatedAccessoryTile;
- (bool)invalidatedCommentsTile;
- (bool)invalidatedContentInsets;
- (bool)invalidatedContentOffset;
- (bool)invalidatedVideoPlaceholderTile;
- (unsigned long long)options;

@end
