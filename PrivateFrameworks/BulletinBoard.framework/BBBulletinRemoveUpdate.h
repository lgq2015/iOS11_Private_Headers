/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBBulletinRemoveUpdate : BBBulletinUpdate {
    bool  _shouldSync;
}

@property (nonatomic, readonly) bool shouldSync;

+ (bool)supportsSecureCoding;
+ (id)updateWithBulletin:(id)arg1 feeds:(unsigned long long)arg2 shouldSync:(bool)arg3;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBulletin:(id)arg1 feeds:(unsigned long long)arg2 shouldSync:(bool)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)shouldSync;
- (id)typeDescription;

@end
