/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKComplication : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _complicationType;
}

@property (nonatomic, readonly) unsigned long long complicationType;

+ (id)_allComplicationConfigurationsWithType:(unsigned long long)arg1;
+ (Class)_complicationClassForType:(unsigned long long)arg1;
+ (id)allComplicationsOfType:(unsigned long long)arg1;
+ (id)anyComplicationOfType:(unsigned long long)arg1;
+ (id)complicationWithJSONObjectRepresentation:(id)arg1;
+ (id)nullComplication;
+ (bool)supportsSecureCoding;

- (id)JSONObjectRepresentation;
- (void)_addKeysToJSONDictionary:(id)arg1;
- (id)_initWithComplicationType:(unsigned long long)arg1 JSONDictionary:(id)arg2;
- (void)_setComplicationType:(unsigned long long)arg1;
- (bool)appearsInDailySnapshotForFamily:(long long)arg1;
- (id)awakeAfterUsingCoder:(id)arg1;
- (unsigned long long)complicationType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customDailySnapshotKey;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithComplicationType:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqual:(id)arg1 subclassesAllowed:(bool)arg2;
- (id)localizedDetailText;
- (id)localizedKeylineLabelText;
- (bool)snapshotContext:(id)arg1 isStaleRelativeToContext:(id)arg2;

@end
