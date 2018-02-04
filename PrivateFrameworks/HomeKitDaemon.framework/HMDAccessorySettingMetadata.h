/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAccessorySettingMetadata : HMFObject <HMFObject> {
    NSArray * _constraints;
    NSString * _name;
    unsigned long long  _properties;
    long long  _type;
    id  _value;
}

@property (readonly, copy) NSArray *constraints;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *name;
@property (readonly) unsigned long long properties;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly) Class superclass;
@property (readonly) long long type;
@property (readonly) id value;

+ (id)settingWithDictonaryRepresentation:(id)arg1;
+ (id)settingsWithArrayRepresenation:(id)arg1;
+ (id)valueWithType:(long long)arg1 constraints:(id)arg2 representation:(id)arg3;

- (void).cxx_destruct;
- (id)constraints;
- (id)initWithName:(id)arg1 type:(long long)arg2 properties:(unsigned long long)arg3 constraints:(id)arg4 value:(id)arg5;
- (id)modelWithParentIdentifier:(id)arg1;
- (id)name;
- (unsigned long long)properties;
- (id)propertyDescription;
- (long long)type;
- (id)value;

@end
