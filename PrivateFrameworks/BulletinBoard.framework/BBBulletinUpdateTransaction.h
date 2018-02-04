/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBBulletinUpdateTransaction : NSObject <NSCopying, NSSecureCoding> {
    BBBulletinUpdate * _bulletinUpdate;
    unsigned long long  _transactionID;
}

@property (nonatomic, readonly, copy) BBBulletinUpdate *bulletinUpdate;
@property (nonatomic, readonly) unsigned long long transactionID;

+ (bool)supportsSecureCoding;
+ (id)transactionWithBulletinUpdate:(id)arg1 transactionID:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)_initWithBulletinUpdate:(id)arg1 transactionID:(unsigned long long)arg2;
- (id)bulletinUpdate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)transactionID;

@end
