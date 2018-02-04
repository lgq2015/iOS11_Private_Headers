/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleMeViewController : UIViewController {
    PXPeopleScalableAvatarView * _avatarView;
    UIButton * _confirmButton;
    <PXPeopleMeViewControllerDataSource> * _dataSource;
    UIButton * _denyButton;
    UILabel * _descriptionLabel;
    id /* block */  _dismissHandler;
    <PXPerson> * _suggestedPerson;
}

@property (nonatomic, retain) PXPeopleScalableAvatarView *avatarView;
@property (nonatomic, retain) UIButton *confirmButton;
@property (nonatomic, readonly) <PXPeopleMeViewControllerDataSource> *dataSource;
@property (nonatomic, retain) UIButton *denyButton;
@property (nonatomic, retain) UILabel *descriptionLabel;
@property (nonatomic, copy) id /* block */ dismissHandler;
@property (nonatomic, readonly) double preferredHeight;
@property (retain) <PXPerson> *suggestedPerson;

- (void).cxx_destruct;
- (id)_buttonWithTitle:(id)arg1 action:(SEL)arg2 destructive:(bool)arg3;
- (void)_confirmMe:(id)arg1;
- (void)_dismissViewControllerAsConfirmed:(bool)arg1;
- (void)_rejectMe:(id)arg1;
- (id)avatarView;
- (id)confirmButton;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (id)dataSource;
- (void)dealloc;
- (id)denyButton;
- (id)descriptionLabel;
- (id /* block */)dismissHandler;
- (id)initWithDataSource:(id)arg1;
- (id)initWithDataSource:(id)arg1 dismissHandler:(id /* block */)arg2;
- (double)preferredHeight;
- (void)setAvatarView:(id)arg1;
- (void)setConfirmButton:(id)arg1;
- (void)setDenyButton:(id)arg1;
- (void)setDescriptionLabel:(id)arg1;
- (void)setDismissHandler:(id /* block */)arg1;
- (void)setSuggestedPerson:(id)arg1;
- (id)suggestedPerson;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
