/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDHomePresenceUpdate : HMFObject {
    HMDDevice * _causingDevice;
    HMDHomePresence * _homePresence;
    bool  _update;
    HMDUserPresence * _userPresence;
}

@property (nonatomic, readonly) HMDDevice *causingDevice;
@property (nonatomic, readonly) HMDHomePresence *homePresence;
@property (getter=isUpdate, nonatomic, readonly) bool update;
@property (nonatomic, readonly) HMDUserPresence *userPresence;

- (void).cxx_destruct;
- (id)causingDevice;
- (id)description;
- (id)homePresence;
- (id)initWithHomePresence:(id)arg1 userPresence:(id)arg2 update:(bool)arg3 causingDevice:(id)arg4;
- (bool)isUpdate;
- (id)userPresence;

@end
