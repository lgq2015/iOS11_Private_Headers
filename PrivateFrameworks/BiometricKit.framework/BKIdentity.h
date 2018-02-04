/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
 */

@interface BKIdentity : NSObject {
    NSDate * _creationTime;
    NSString * _name;
    long long  _type;
    unsigned int  _userID;
    NSUUID * _uuid;
}

@property (nonatomic, retain) NSDate *creationTime;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) long long type;
@property (nonatomic) unsigned int userID;
@property (nonatomic, retain) NSUUID *uuid;

+ (id)identity;

- (void).cxx_destruct;
- (id)creationTime;
- (id)initWithDeviceIdentity:(id)arg1;
- (id)name;
- (id)serverIdentity;
- (void)setCreationTime:(id)arg1;
- (void)setName:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setUserID:(unsigned int)arg1;
- (void)setUuid:(id)arg1;
- (long long)type;
- (unsigned int)userID;
- (id)uuid;

@end
