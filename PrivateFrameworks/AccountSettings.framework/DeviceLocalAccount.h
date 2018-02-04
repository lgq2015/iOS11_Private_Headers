/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccountSettings.framework/AccountSettings
 */

@interface DeviceLocalAccount : BasicAccount <AccountCreationProtocol>

+ (id)_identifier;
+ (id)accountWithBasicAccount:(id)arg1;
+ (id)basicAccountProperties;
+ (bool)isTetheredSyncingDataclass:(id)arg1;
+ (id)localizedReferenceToSyncSourceStringForDataClass:(id)arg1;
+ (id)localizedSyncSourceStringForDataClass:(id)arg1 forBeginningOfSentence:(bool)arg2;
+ (id)tetheredSourceForDataClass:(id)arg1;
+ (id)typeString;

- (id)displayName;
- (id)identifier;
- (id)syncStoreIdentifier;

@end