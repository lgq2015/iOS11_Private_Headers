/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleBootstrapFinalViewController : UIViewController <PXPeopleFlowViewController> {
    id  _context;
    UILabel * _descriptionLabel;
    UILabel * _promptLabel;
}

@property (nonatomic) <PXPeopleFlowViewControllerActionDelegate> *actionDelegate;
@property (nonatomic, readonly) PXPeopleBootstrapContext *bootstrapContext;
@property (nonatomic, retain) id context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UILabel *descriptionLabel;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } preferredSize;
@property (nonatomic, readonly) UILabel *promptLabel;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_localizedDescriptionString;
- (id)_localizedPromptString;
- (id)_localizedTitleString;
- (void)_updateNavigationBarForCurrentTraitCollection;
- (id)bootstrapContext;
- (id)context;
- (id)descriptionLabel;
- (id)initWithContext:(id)arg1;
- (struct CGSize { double x1; double x2; })preferredSize;
- (id)promptLabel;
- (void)setContext:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateUI;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
