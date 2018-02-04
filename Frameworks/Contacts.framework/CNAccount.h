/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNAccount : NSObject <NSCopying, NSSecureCoding> {
    NSString * _externalIdentifierString;
    NSString * _identifier;
}

@property (nonatomic, readonly) NSString *_cnui_displayName;
@property (nonatomic, readonly, copy) NSString *externalIdentifierString;
@property (nonatomic, readonly, copy) NSString *identifier;

// Image: /System/Library/Frameworks/Contacts.framework/Contacts

+ (id)identifierProvider;
+ (id)localAccount;
+ (id)makeIdentifier;
+ (id)makeIdentifierString;
+ (id)predicateForAccountForContainerWithIdentifier:(id)arg1;
+ (id)predicateForAccountWithExternalIdentifier:(id)arg1;
+ (id)predicateForAccountsWithIdentifiers:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)externalIdentifierString;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithExternalIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 externalIdentifier:(id)arg2;
- (bool)isEqual:(id)arg1;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

+ (id)_cnui_accountStore;
+ (void)_cnui_canRequestRefreshWithCompletion:(id /* block */)arg1;
+ (id)_cnui_displayNameForACAccount:(id)arg1;
+ (id)_cnui_displayNameForLocal;
+ (bool)_cnui_isFacebookACAccount:(id)arg1;
+ (bool)_cnui_requestRefreshWithUserAction:(bool)arg1;

- (id)_cnui_displayName;

@end
