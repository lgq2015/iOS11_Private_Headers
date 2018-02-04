/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNAvatarViewController_NewAvatarView : CNAvatarViewController <_CNAvatarViewDelegate> {
    bool  _animated;
    _CNAvatarView * _avatarView;
    CNContactStore * _contactStore;
    NSArray * _contacts;
    NSArray * _likenessProviders;
    <CNUIPRLikenessResolver> * _likenessResolver;
    PRPersonaStore * _personaStore;
    bool  _threeDTouchEnabled;
}

@property (nonatomic) bool animated;
@property (nonatomic) _CNAvatarView *avatarView;
@property (nonatomic, readonly) CNContactStore *contactStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *likenessProviders;
@property (nonatomic, readonly) <CNUIPRLikenessResolver> *likenessResolver;
@property (nonatomic, readonly) PRPersonaStore *personaStore;
@property (readonly) Class superclass;
@property (getter=isThreeDTouchEnabled, nonatomic) bool threeDTouchEnabled;

+ (bool)defaultThreeDTouchSupport;

- (void).cxx_destruct;
- (bool)animated;
- (id)avatarView;
- (id)contactStore;
- (id)contacts;
- (id)descriptorForRequiredKeys;
- (id)initWithSettings:(id)arg1;
- (bool)isThreeDTouchEnabled;
- (id)likenessProviders;
- (id)likenessResolver;
- (void)loadView;
- (id)personaStore;
- (void)setAnimated:(bool)arg1;
- (void)setAvatarView:(id)arg1;
- (void)setContacts:(id)arg1;
- (void)setLikenessProviders:(id)arg1;
- (void)setThreeDTouchEnabled:(bool)arg1;

@end
