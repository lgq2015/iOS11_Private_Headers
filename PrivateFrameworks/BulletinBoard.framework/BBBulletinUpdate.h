/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBBulletinUpdate : NSObject <NSCopying, NSSecureCoding> {
    BBBulletin * _bulletin;
    unsigned long long  _feeds;
}

@property (nonatomic, readonly, copy) BBBulletin *bulletin;
@property (nonatomic, readonly) unsigned long long feeds;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bulletin;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)feeds;
- (unsigned long long)hash;
- (id)initWithBulletin:(id)arg1 feeds:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)typeDescription;

@end
