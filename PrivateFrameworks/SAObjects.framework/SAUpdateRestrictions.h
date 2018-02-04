/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUpdateRestrictions : SABaseCommand <SAClientStateServerBoundCommand, SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *refId;
@property (nonatomic, copy) NSArray *restrictionsToAdd;
@property (nonatomic, copy) NSArray *restrictionsToRemove;
@property (readonly) Class superclass;

+ (id)updateRestrictions;
+ (id)updateRestrictionsWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (id)restrictionsToAdd;
- (id)restrictionsToRemove;
- (void)setRestrictionsToAdd:(id)arg1;
- (void)setRestrictionsToRemove:(id)arg1;

@end
