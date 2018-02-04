/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SANPSetPlaybackSpeed : SADomainCommand

@property (nonatomic, copy) NSArray *hashedRouteUIDs;
@property (nonatomic) double scalingFactor;

+ (id)setPlaybackSpeed;
+ (id)setPlaybackSpeedWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)hashedRouteUIDs;
- (bool)requiresResponse;
- (double)scalingFactor;
- (void)setHashedRouteUIDs:(id)arg1;
- (void)setScalingFactor:(double)arg1;

@end
