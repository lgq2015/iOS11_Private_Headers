/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

@interface FAFamilySetupBuddyMLRequest : AAFamilyRequest {
    SSAccount * _iTunesAccount;
    NSString * _inviteCode;
}

@property (setter=setiTunesAccount:, nonatomic, retain) SSAccount *iTunesAccount;
@property (nonatomic, copy) NSString *inviteCode;

- (void).cxx_destruct;
- (id)iTunesAccount;
- (id)inviteCode;
- (bool)isUserInitiated;
- (void)setInviteCode:(id)arg1;
- (void)setiTunesAccount:(id)arg1;
- (id)urlRequest;
- (id)urlString;

@end
