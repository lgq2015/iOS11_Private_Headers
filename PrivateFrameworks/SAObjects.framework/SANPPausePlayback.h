/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SANPPausePlayback : SADomainCommand

@property (nonatomic, copy) NSArray *hashedRouteUIDs;

+ (id)pausePlayback;
+ (id)pausePlaybackWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)hashedRouteUIDs;
- (bool)requiresResponse;
- (void)setHashedRouteUIDs:(id)arg1;

@end
