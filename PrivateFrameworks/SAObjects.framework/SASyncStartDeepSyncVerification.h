/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASyncStartDeepSyncVerification : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *keys;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)startDeepSyncVerification;
+ (id)startDeepSyncVerificationWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)keys;
- (bool)requiresResponse;
- (void)setKeys:(id)arg1;

@end
