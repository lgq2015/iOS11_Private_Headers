/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDHomePresenceRemote : HMFObject <HMDHomePresenceCheck> {
    NSDictionary * _userPresenceMap;
}

@property (nonatomic, readonly) NSDictionary *userPresenceMap;

+ (id)presenceRemoteWithDictionary:(id)arg1 presenceIdentifierDict:(id)arg2;

- (void).cxx_destruct;
- (void)_initializeWithPresenceIdentifierMap:(id)arg1;
- (void)_initializeWithPresenceMap:(id)arg1;
- (bool)areUsersAtHome:(id)arg1;
- (bool)areUsersNotAtHome:(id)arg1;
- (id)description;
- (id)initWithDictionary:(id)arg1 presenceIdentifierDict:(id)arg2;
- (bool)isAnyUserAtHome;
- (bool)isNoUserAtHome;
- (bool)isUserAtHome:(id)arg1;
- (bool)isUserNotAtHome:(id)arg1;
- (id)regionForUser:(id)arg1;
- (id)userPresenceMap;

@end
