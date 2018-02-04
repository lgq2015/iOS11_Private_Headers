/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASportsEntityGroup : SASportsEntity

@property (nonatomic, copy) NSArray *entities;
@property (nonatomic, copy) NSString *groupType;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)entityGroup;
+ (id)entityGroupWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)entities;
- (id)groupIdentifier;
- (id)groupType;
- (void)setEntities:(id)arg1;
- (void)setGroupType:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI

- (bool)siriui_containsAthletes;
- (bool)siriui_containsTeams;
- (void)siriui_enumerateEntitiesWithGroupHandler:(id /* block */)arg1 teamHandler:(id /* block */)arg2 athleteHandler:(id /* block */)arg3;

@end
