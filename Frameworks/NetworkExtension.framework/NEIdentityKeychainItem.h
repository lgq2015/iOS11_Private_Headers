/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEIdentityKeychainItem : NEKeychainItem

+ (id)copyIdentities:(id)arg1 fromDomain:(long long)arg2;
+ (id)copyPersistentReferenceForIdentity:(struct __SecIdentity { }*)arg1;
+ (id)copyPropertiesForIdentity:(struct __SecIdentity { }*)arg1 persistentReference:(id)arg2;
+ (id)importPKCS12Data:(id)arg1 passphrase:(id)arg2;

- (id)copyPassword;
- (id)copyQueryWithReturnTypes:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithPassword:(id)arg1 domain:(long long)arg2 accessGroup:(id)arg3;
- (void)sync;
- (void)syncUsingConfiguration:(id)arg1 accountName:(id)arg2 passwordType:(long long)arg3 identifierSuffix:(id)arg4;

@end
