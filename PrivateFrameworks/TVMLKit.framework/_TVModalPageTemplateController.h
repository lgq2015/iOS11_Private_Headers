/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVModalPageTemplateController : UIViewController <UIPageViewControllerDataSource> {
    IKViewElement * _backgroundElement;
    NSArray * _bezelViewControllers;
    IKViewElement * _collectionListElement;
    UIPageViewController * _pageViewController;
    NSArray * _viewControllers;
    IKViewElement * _viewElement;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_tapAction:(id)arg1;
- (bool)_updateWithCollectionListElement:(id)arg1;
- (id)_viewControllerWithElement:(id)arg1 existingController:(id)arg2;
- (void)didMoveToParentViewController:(id)arg1;
- (void)loadView;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (void)updateWithViewElement:(id)arg1;
- (void)viewDidLoad;

@end
