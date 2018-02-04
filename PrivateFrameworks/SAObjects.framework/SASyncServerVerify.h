/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASyncServerVerify : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool fetchSyncDebugInfo;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool performInternalVerification;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)serverVerify;
+ (id)serverVerifyWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (bool)fetchSyncDebugInfo;
- (id)groupIdentifier;
- (bool)performInternalVerification;
- (bool)requiresResponse;
- (void)setFetchSyncDebugInfo:(bool)arg1;
- (void)setPerformInternalVerification:(bool)arg1;

@end
