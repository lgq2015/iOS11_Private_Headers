/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNStarkContactsListViewController : CNContactListViewController <CNContactContentViewControllerDelegate, CNContactListViewControllerDelegate> {
    AVExternalDevice * _externalDevice;
    bool  _limitedUI;
    CNStarkNoContentBannerView * _overlayView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) AVExternalDevice *externalDevice;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool limitedUI;
@property (nonatomic, retain) CNStarkNoContentBannerView *overlayView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)contactListViewController:(id)arg1 canSelectContact:(id)arg2;
- (void)contactListViewController:(id)arg1 didSelectContact:(id)arg2;
- (bool)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 propertyKey:(id)arg3 propertyIdentifier:(id)arg4;
- (id)createTableView;
- (void)dealloc;
- (id)externalDevice;
- (id)init;
- (id)initWithDataSource:(id)arg1 searchable:(bool)arg2 environment:(id)arg3 shouldUseLargeTitle:(bool)arg4;
- (id)initWithStyle:(long long)arg1;
- (bool)limitedUI;
- (void)limitedUINotification:(id)arg1;
- (id)overlayView;
- (void)postMessageOverlayIfNecessary;
- (void)setExternalDevice:(id)arg1;
- (void)setLimitedUI:(bool)arg1;
- (void)setOverlayView:(id)arg1;
- (void)updateLimitedUI;
- (void)viewDidLayoutSubviews;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(bool)arg2;
- (void)viewWillAppear:(bool)arg1;

@end
