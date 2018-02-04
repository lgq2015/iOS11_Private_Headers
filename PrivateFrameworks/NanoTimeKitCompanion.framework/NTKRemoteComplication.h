/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKRemoteComplication : NTKComplication {
    NSString * _appBundleIdentifier;
    NSString * _clientIdentifier;
}

@property (nonatomic, readonly) NSString *appBundleIdentifier;
@property (nonatomic, readonly) NSString *clientIdentifier;

+ (id)_allComplicationConfigurationsWithType:(unsigned long long)arg1;
+ (id)_remoteStocksComplication;
+ (id)complicationWithClientIdentifier:(id)arg1 appBundleIdentifier:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_addKeysToJSONDictionary:(id)arg1;
- (id)_initWithComplicationType:(unsigned long long)arg1 JSONDictionary:(id)arg2;
- (id)appBundleIdentifier;
- (id)clientIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customDailySnapshotKey;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithComplicationType:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (id)localizedDetailText;
- (id)localizedKeylineLabelText;

@end
