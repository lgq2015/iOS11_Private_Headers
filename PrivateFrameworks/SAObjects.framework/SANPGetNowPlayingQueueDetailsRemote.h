/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SANPGetNowPlayingQueueDetailsRemote : SABaseClientBoundCommand

@property (nonatomic, copy) NSArray *hashedRouteUIDs;
@property (nonatomic, retain) SANPGetNowPlayingQueueDetails *queueDetails;
@property (nonatomic) double routeTimeout;

+ (id)getNowPlayingQueueDetailsRemote;
+ (id)getNowPlayingQueueDetailsRemoteWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)hashedRouteUIDs;
- (bool)mutatingCommand;
- (id)queueDetails;
- (bool)requiresResponse;
- (double)routeTimeout;
- (void)setHashedRouteUIDs:(id)arg1;
- (void)setQueueDetails:(id)arg1;
- (void)setRouteTimeout:(double)arg1;

@end
