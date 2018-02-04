/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptFacebookSession : SUScriptObject {
    SUScriptAppleAccount * _account;
}

@property (readonly) id hasAccounts;
@property (readonly) unsigned long long likeStatusFlagFriendCount;
@property (readonly) unsigned long long likeStatusFlagFriends;
@property (readonly) unsigned long long likeStatusFlagGlobalCount;
@property (readonly) unsigned long long likeStatusFlagMe;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;
- (id)attributeKeys;
- (void)dealloc;
- (void)fetchLikeStatusForURL:(id)arg1 flags:(id)arg2 completionFunction:(id)arg3;
- (id)hasAccounts;
- (id)initWithAppleAccount:(id)arg1;
- (unsigned long long)likeStatusFlagFriendCount;
- (unsigned long long)likeStatusFlagFriends;
- (unsigned long long)likeStatusFlagGlobalCount;
- (unsigned long long)likeStatusFlagMe;
- (void)likeURL:(id)arg1 completionFunction:(id)arg2;
- (id)scriptAttributeKeys;
- (void)unlikeURL:(id)arg1 completionFunction:(id)arg2;

@end
