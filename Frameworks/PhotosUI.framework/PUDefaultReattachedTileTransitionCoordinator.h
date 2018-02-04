/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUDefaultReattachedTileTransitionCoordinator : PUDefaultTileTransitionCoordinator {
    PUTileReattachmentContext * _context;
}

@property (nonatomic, retain) PUTileReattachmentContext *context;

- (void).cxx_destruct;
- (id)context;
- (id)optionsForAnimatingTileController:(id)arg1 toLayoutInfo:(id)arg2 withAnimationType:(long long)arg3;
- (void)setContext:(id)arg1;

@end
