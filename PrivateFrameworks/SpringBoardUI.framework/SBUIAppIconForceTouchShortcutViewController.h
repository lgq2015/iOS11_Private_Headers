/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBUIAppIconForceTouchShortcutViewController : UIViewController <SBUIActionPlatterViewControllerDelegate> {
    SBUIActionPlatterViewController * _actionPlatterViewController;
    NSArray * _applicationShortcutItems;
    _UIAssetManager * _assetManager;
    SBUIAppIconForceTouchControllerDataProvider * _dataProvider;
    <SBUIAppIconForceTouchShortcutViewControllerDelegate> * _delegate;
    long long  _iconPosition;
    CNMonogrammer * _monogrammer;
    bool  _reversesApplicationShortcutItems;
}

@property (nonatomic, readonly) NSArray *applicationShortcutItems;
@property (nonatomic, readonly) SBUIAppIconForceTouchControllerDataProvider *dataProvider;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBUIAppIconForceTouchShortcutViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long iconPosition;
@property (nonatomic) bool reversesApplicationShortcutItems;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_actionFromApplicationShortcutItem:(id)arg1;
- (id)_assetManager;
- (id)_imageFromApplicationShortcutIcon:(id)arg1;
- (id)_monogrammer;
- (bool)actionPlatterViewControllerShouldRespondToTouches:(id)arg1;
- (id)applicationShortcutItems;
- (id)dataProvider;
- (id)delegate;
- (long long)iconPosition;
- (id)initWithCoder:(id)arg1;
- (id)initWithDataProvider:(id)arg1 applicationShortcutItems:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (bool)reversesApplicationShortcutItems;
- (void)setDelegate:(id)arg1;
- (void)setIconPosition:(long long)arg1;
- (void)setReversesApplicationShortcutItems:(bool)arg1;

@end
