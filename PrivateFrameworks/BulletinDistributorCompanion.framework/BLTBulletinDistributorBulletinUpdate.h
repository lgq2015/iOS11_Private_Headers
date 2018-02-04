/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTBulletinDistributorBulletinUpdate : NSObject {
    BBBulletin * _bulletin;
    unsigned long long  _feed;
    unsigned long long  _updateType;
}

@property (nonatomic, retain) BBBulletin *bulletin;
@property (nonatomic) unsigned long long feed;
@property (nonatomic) unsigned long long updateType;

+ (id)bulletinUpdateWithType:(unsigned long long)arg1 bulletin:(id)arg2 feed:(unsigned long long)arg3;

- (void).cxx_destruct;
- (id)bulletin;
- (unsigned long long)feed;
- (void)setBulletin:(id)arg1;
- (void)setFeed:(unsigned long long)arg1;
- (void)setUpdateType:(unsigned long long)arg1;
- (unsigned long long)updateType;

@end
