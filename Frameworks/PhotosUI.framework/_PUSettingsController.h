/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface _PUSettingsController : PTSettingsController {
    id /* block */  _dismissButtonFactory;
    id /* block */  _onViewDidDisappearBlock;
}

@property (nonatomic, copy) id /* block */ dismissButtonFactory;
@property (nonatomic, copy) id /* block */ onViewDidDisappearBlock;

- (void).cxx_destruct;
- (void)_updateDismissButtonOfViewController:(id)arg1;
- (void)callOnViewDidDisappearBlock;
- (id /* block */)dismissButtonFactory;
- (id /* block */)onViewDidDisappearBlock;
- (void)pushViewController:(id)arg1 animated:(bool)arg2;
- (void)setDismissButtonFactory:(id /* block */)arg1;
- (void)setOnViewDidDisappearBlock:(id /* block */)arg1;
- (void)viewDidDisappear:(bool)arg1;

@end
