/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SANPGetNowPlayingQueueDetails : SABaseClientBoundCommand

@property (nonatomic, copy) NSArray *hashedRouteUIDs;
@property (nonatomic) long long nextItemCount;
@property (nonatomic) long long previousItemCount;

+ (id)getNowPlayingQueueDetails;
+ (id)getNowPlayingQueueDetailsWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)hashedRouteUIDs;
- (bool)mutatingCommand;
- (long long)nextItemCount;
- (long long)previousItemCount;
- (bool)requiresResponse;
- (void)setHashedRouteUIDs:(id)arg1;
- (void)setNextItemCount:(long long)arg1;
- (void)setPreviousItemCount:(long long)arg1;

@end
