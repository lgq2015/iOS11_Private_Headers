/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVSearchResultCell : UICollectionViewCell {
    id /* block */  _didFocusBlock;
    UIViewController * _viewController;
}

@property (nonatomic, copy) id /* block */ didFocusBlock;
@property (nonatomic, retain) UIViewController *viewController;

- (void).cxx_destruct;
- (bool)canBecomeFocused;
- (id /* block */)didFocusBlock;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)preferredFocusEnvironments;
- (void)prepareForReuse;
- (void)setDidFocusBlock:(id /* block */)arg1;
- (void)setViewController:(id)arg1;
- (id)viewController;

@end
