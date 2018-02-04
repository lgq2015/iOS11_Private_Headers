/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUViewControllerCollectionViewCell : UICollectionViewCell <HUViewControllerCell> {
    UIViewController * _parentViewController;
    UIViewController * _viewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIViewController *parentViewController;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIViewController *viewController;

- (void).cxx_destruct;
- (void)_removeFromParentViewControllerAndClearProperty:(bool)arg1;
- (void)addToParentViewController:(id)arg1;
- (void)layoutSubviews;
- (id)parentViewController;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)prepareForReuse;
- (void)removeFromParentViewController;
- (void)setParentViewController:(id)arg1;
- (void)setViewController:(id)arg1;
- (id)viewController;

@end
