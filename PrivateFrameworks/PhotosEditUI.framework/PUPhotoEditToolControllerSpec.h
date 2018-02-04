/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface PUPhotoEditToolControllerSpec : PUViewControllerSpec <PUPhotoEditLayoutDynamicAdaptable> {
    long long  _layoutOrientation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long layoutOrientation;
@property (nonatomic, readonly) double standardBottomBarHeight;
@property (nonatomic, readonly) double standardSideBarWidth;
@property (readonly) Class superclass;

- (long long)layoutOrientation;
- (void)setLayoutOrientation:(long long)arg1;
- (void)setLayoutOrientation:(long long)arg1 withTransitionCoordinator:(id)arg2;
- (double)standardBottomBarHeight;
- (double)standardSideBarWidth;

@end
