/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SANPAddOutputDevicesToGroup : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *groupID;
@property (nonatomic, copy) NSArray *hashedRouteUIDs;

+ (id)addOutputDevicesToGroup;
+ (id)addOutputDevicesToGroupWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupID;
- (id)groupIdentifier;
- (id)hashedRouteUIDs;
- (bool)mutatingCommand;
- (bool)requiresResponse;
- (void)setGroupID:(id)arg1;
- (void)setHashedRouteUIDs:(id)arg1;

@end
