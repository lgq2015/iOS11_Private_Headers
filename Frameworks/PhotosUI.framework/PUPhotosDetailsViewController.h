/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotosDetailsViewController : PXPhotosDetailsUIViewController <PUAccessoryContentViewController> {
    <PUAccessoryContentViewControllerDelegate> * _accessoryContentViewControllerDelegate;
    _UIContentUnavailableView * _contentUnavailableView;
    struct { 
        bool scrollViewControllerDidScroll; 
        bool scrollViewControllerContentBoundsDidChange; 
    }  _superRespondsTo;
}

@property (nonatomic) <PUAccessoryContentViewControllerDelegate> *accessoryContentViewControllerDelegate;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } minimumContentSize;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_layoutContentUnavailableView;
- (id)accessoryContentViewControllerDelegate;
- (bool)contentAreaContainsPoint:(struct CGPoint { double x1; double x2; })arg1 inCoordinateSpace:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentBoundsInCoordinateSpace:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)initWithContext:(id)arg1 configuration:(id)arg2;
- (id)initWithContext:(id)arg1 options:(unsigned long long)arg2;
- (unsigned long long)occludedContentEdges;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })px_safeAreaInsets;
- (void)scrollViewControllerContentBoundsDidChange:(id)arg1;
- (void)scrollViewControllerDidScroll:(id)arg1;
- (void)setAccessoryContentViewControllerDelegate:(id)arg1;
- (void)setContentEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 changeReason:(long long)arg2;
- (void)setEmpty:(bool)arg1;

@end
