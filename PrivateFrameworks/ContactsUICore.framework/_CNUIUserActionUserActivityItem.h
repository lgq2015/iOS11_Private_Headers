/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

@interface _CNUIUserActionUserActivityItem : CNUIUserActionItem {
    NSUserActivity * _userActivity;
}

@property (nonatomic, readonly) NSUserActivity *userActivity;

- (void).cxx_destruct;
- (unsigned long long)_hashForIntent:(id)arg1;
- (bool)_isIntent:(id)arg1 equalToOther:(id)arg2;
- (id)_personFromIntent:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithType:(id)arg1 contactProperty:(id)arg2 bundleIdentifier:(id)arg3 userActivity:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6;
- (bool)isEqual:(id)arg1;
- (id)performActionWithContext:(id)arg1;
- (id)userActivity;

@end
