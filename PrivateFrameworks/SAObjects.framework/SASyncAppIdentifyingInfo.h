/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASyncAppIdentifyingInfo : AceObject <SAAceSerializable>

@property (nonatomic, copy) NSString *buildNumber;
@property (nonatomic, copy) NSString *bundleId;
@property (nonatomic, copy) NSString *clientIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *version;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)appIdentifyingInfo;
+ (id)appIdentifyingInfoWithDictionary:(id)arg1 context:(id)arg2;

- (id)buildNumber;
- (id)bundleId;
- (id)clientIdentifier;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setBuildNumber:(id)arg1;
- (void)setBundleId:(id)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)version;

// Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI

- (id)siriui_bundleId;
- (bool)siriui_isSurfAppInfo;

@end
