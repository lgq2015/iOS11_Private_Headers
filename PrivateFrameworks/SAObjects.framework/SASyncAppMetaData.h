/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASyncAppMetaData : AceObject <SAAceSerializable>

@property (nonatomic, retain) SASyncAppIdentifyingInfo *appIdentifyingInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSNumber *developerMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *syncSlots;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)appMetaData;
+ (id)appMetaDataWithDictionary:(id)arg1 context:(id)arg2;

- (id)appIdentifyingInfo;
- (id)developerMode;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setAppIdentifyingInfo:(id)arg1;
- (void)setDeveloperMode:(id)arg1;
- (void)setSyncSlots:(id)arg1;
- (id)syncSlots;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (id)_af_preferredBundleID;

@end
