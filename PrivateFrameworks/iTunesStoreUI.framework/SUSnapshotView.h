/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUSnapshotView : UIView {
    UIView * _imageView;
}

- (void)_takeCGSnapshotOfView:(id)arg1;
- (void)_takeIOSurfaceSnapshotOfView:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)snapshotView:(id)arg1 usingIOSurface:(bool)arg2;

@end
