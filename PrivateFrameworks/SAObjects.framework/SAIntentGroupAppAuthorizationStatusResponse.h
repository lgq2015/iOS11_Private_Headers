/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAIntentGroupAppAuthorizationStatusResponse : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic, copy) NSDictionary *appAuthorizationStatusMap;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)appAuthorizationStatusResponse;
+ (id)appAuthorizationStatusResponseWithDictionary:(id)arg1 context:(id)arg2;

- (id)appAuthorizationStatusMap;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setAppAuthorizationStatusMap:(id)arg1;

@end
