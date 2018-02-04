/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUILabeledAvatarView : UIView {
    CNAvatarView * _avatar;
    UILabel * _label;
    unsigned long long  _labelPlacement;
    unsigned long long  _options;
    UIViewController * _viewController;
}

@property (retain) CNAvatarView *avatar;
@property (retain) CNContact *contact;
@property (retain) UILabel *label;
@property unsigned long long labelPlacement;
@property unsigned long long options;
@property UIViewController *viewController;

+ (id)_createAvatarView;
+ (id)contactForAddress:(id)arg1 fullName:(id)arg2 firstName:(id)arg3 lastName:(id)arg4;
+ (id)contactForEmailAddress:(id)arg1 fullName:(id)arg2 firstName:(id)arg3 lastName:(id)arg4;
+ (id)contactForPhoneNumber:(id)arg1 fullName:(id)arg2 firstName:(id)arg3 lastName:(id)arg4;
+ (id)sortedAvatarListFromParticipants:(id)arg1;

- (void).cxx_destruct;
- (id)avatar;
- (id)contact;
- (void)didTap;
- (id)init;
- (id)initWithContact:(id)arg1 placement:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id)initWithEmail:(id)arg1 fullName:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 placement:(unsigned long long)arg5 options:(unsigned long long)arg6;
- (id)initWithIdentity:(id)arg1 placement:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id)initWithPlacement:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (id)label;
- (unsigned long long)labelPlacement;
- (unsigned long long)options;
- (void)setAvatar:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setLabelPlacement:(unsigned long long)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setUpTap;
- (void)setViewController:(id)arg1;
- (void)setup;
- (void)updateLabel;
- (void)updateWithAddress:(id)arg1 fullName:(id)arg2 firstName:(id)arg3 lastName:(id)arg4;
- (void)updateWithContacts:(id)arg1;
- (void)updateWithParticpant:(id)arg1;
- (id)viewController;

@end
