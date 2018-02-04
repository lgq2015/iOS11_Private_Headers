/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUBrowsingAnimatedImagePlayerChange : PUViewModelChange {
    bool  _animatedImageDidChange;
    bool  _animatedImageLoadingAllowedDidChange;
}

@property (setter=_setAnimatedImageDidChange:, nonatomic) bool animatedImageDidChange;
@property (setter=_setAnimatedImageLoadingAllowedDidChange:, nonatomic) bool animatedImageLoadingAllowedDidChange;

- (void)_setAnimatedImageDidChange:(bool)arg1;
- (void)_setAnimatedImageLoadingAllowedDidChange:(bool)arg1;
- (bool)animatedImageDidChange;
- (bool)animatedImageLoadingAllowedDidChange;
- (bool)hasChanges;

@end
