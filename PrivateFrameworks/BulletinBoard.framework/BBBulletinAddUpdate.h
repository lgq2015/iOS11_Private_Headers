/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBBulletinAddUpdate : BBBulletinUpdate {
    bool  _shouldPlayLightsAndSirens;
}

@property (nonatomic, readonly) bool shouldPlayLightsAndSirens;

+ (bool)supportsSecureCoding;
+ (id)updateWithBulletin:(id)arg1 feeds:(unsigned long long)arg2 shouldPlayLightsAndSirens:(bool)arg3;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBulletin:(id)arg1 feeds:(unsigned long long)arg2 shouldPlayLightsAndSirens:(bool)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)shouldPlayLightsAndSirens;
- (id)typeDescription;

@end
