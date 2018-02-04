/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRApplicationActivity : NSObject <NSMutableCopying, NSSecureCoding> {
    int  _creatorProcessID;
    NSString * _primaryApplicationDisplayID;
    NSString * _secondaryApplicationDisplayID;
    bool  _shouldPrepareAppPlaybackQueue;
    int  _status;
    NSUUID * _uniqueIdentifier;
}

@property (nonatomic, readonly) int creatorProcessID;
@property (nonatomic, readonly) NSString *primaryApplicationDisplayID;
@property (nonatomic, readonly) NSString *secondaryApplicationDisplayID;
@property (nonatomic, readonly) bool shouldPrepareAppPlaybackQueue;
@property (nonatomic, readonly) int status;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;

+ (bool)supportsSecureCoding;

- (id)_copyWithZone:(struct _NSZone { }*)arg1 usingConcreteClass:(Class)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)creatorProcessID;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPrimaryAppDisplayID:(id)arg1 secondaryAppDisplayID:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)primaryApplicationDisplayID;
- (id)secondaryApplicationDisplayID;
- (bool)shouldPrepareAppPlaybackQueue;
- (int)status;
- (id)uniqueIdentifier;

@end
