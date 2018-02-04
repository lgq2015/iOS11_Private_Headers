/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDUserPresence : HMFObject <NSSecureCoding> {
    HMDUserPresenceRegion * _presenceRegionStatus;
    NSDate * _updateTimestamp;
    HMDUser * _user;
}

@property (getter=isAtHome, nonatomic, readonly) bool atHome;
@property (getter=isNotAtHome, nonatomic, readonly) bool notAtHome;
@property (nonatomic, retain) HMDUserPresenceRegion *presenceRegionStatus;
@property (nonatomic, readonly) NSDate *updateTimestamp;
@property (nonatomic, readonly) HMDUser *user;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUser:(id)arg1 presenceRegionStatus:(id)arg2;
- (bool)isAtHome;
- (bool)isNotAtHome;
- (id)presenceRegionStatus;
- (void)setPresenceRegionStatus:(id)arg1;
- (id)updateTimestamp;
- (id)user;

@end
