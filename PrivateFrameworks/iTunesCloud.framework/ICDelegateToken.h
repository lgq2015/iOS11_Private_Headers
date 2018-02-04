/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICDelegateToken : NSObject <NSCopying, NSSecureCoding> {
    NSData * _data;
    NSDate * _expirationDate;
    long long  _type;
}

@property (nonatomic, readonly, copy) NSData *data;
@property (nonatomic, readonly, copy) NSDate *expirationDate;
@property (getter=isExpired, nonatomic, readonly) bool expired;
@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (bool)expiresBeforeDate:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 data:(id)arg2;
- (id)initWithType:(long long)arg1 data:(id)arg2 expirationDate:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isExpired;
- (long long)type;

@end
