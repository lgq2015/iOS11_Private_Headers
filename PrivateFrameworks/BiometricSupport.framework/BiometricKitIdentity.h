/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
 */

@interface BiometricKitIdentity : NSObject <NSCopying, NSSecureCoding> {
    int  _attribute;
    NSDate * _creationTime;
    int  _entity;
    long long  _matchCount;
    NSString * _name;
    int  _type;
    long long  _updateCount;
    unsigned int  _userID;
    NSUUID * _uuid;
}

@property (nonatomic) int attribute;
@property (nonatomic, retain) NSDate *creationTime;
@property (nonatomic) int entity;
@property (nonatomic) long long matchCount;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) int type;
@property (nonatomic) long long updateCount;
@property (nonatomic) unsigned int userID;
@property (nonatomic, retain) NSUUID *uuid;

+ (id)biometricKitIdentity;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)attribute;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationTime;
- (void)encodeWithCoder:(id)arg1;
- (int)entity;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (long long)matchCount;
- (id)name;
- (void)setAttribute:(int)arg1;
- (void)setCreationTime:(id)arg1;
- (void)setEntity:(int)arg1;
- (void)setMatchCount:(long long)arg1;
- (void)setName:(id)arg1;
- (void)setType:(int)arg1;
- (void)setUpdateCount:(long long)arg1;
- (void)setUserID:(unsigned int)arg1;
- (void)setUuid:(id)arg1;
- (int)type;
- (long long)updateCount;
- (unsigned int)userID;
- (id)uuid;

@end
