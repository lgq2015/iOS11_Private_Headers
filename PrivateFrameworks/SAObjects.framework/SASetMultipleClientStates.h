/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASetMultipleClientStates : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic, copy) NSArray *clientStateSetters;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *failedGetters;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)setMultipleClientStates;
+ (id)setMultipleClientStatesWithDictionary:(id)arg1 context:(id)arg2;

- (id)clientStateSetters;
- (id)encodedClassName;
- (id)failedGetters;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setClientStateSetters:(id)arg1;
- (void)setFailedGetters:(id)arg1;

@end
