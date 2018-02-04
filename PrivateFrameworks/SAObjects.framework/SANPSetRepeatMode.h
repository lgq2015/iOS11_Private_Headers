/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SANPSetRepeatMode : SADomainCommand

@property (nonatomic, copy) NSArray *hashedRouteUIDs;
@property (nonatomic, copy) NSString *repeatMode;

+ (id)setRepeatMode;
+ (id)setRepeatModeWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)hashedRouteUIDs;
- (id)repeatMode;
- (bool)requiresResponse;
- (void)setHashedRouteUIDs:(id)arg1;
- (void)setRepeatMode:(id)arg1;

@end
