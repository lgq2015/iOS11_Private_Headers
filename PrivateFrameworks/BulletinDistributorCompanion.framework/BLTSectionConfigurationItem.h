/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTSectionConfigurationItem : NSObject {
    bool  _alwaysAlert;
    bool  _alwaysSyncSettings;
    NSArray * _blacklistedCategories;
    bool  _optOutOfAttachmentTransmission;
    bool  _optOutOfCoordination;
    bool  _optOutOfWaitForUserIdle;
    NSArray * _whitelistedSubtypes;
}

@property (nonatomic) bool alwaysAlert;
@property (nonatomic) bool alwaysSyncSettings;
@property (nonatomic, retain) NSArray *blacklistedCategories;
@property (nonatomic) bool optOutOfAttachmentTransmission;
@property (nonatomic) bool optOutOfCoordination;
@property (nonatomic) bool optOutOfWaitForUserIdle;
@property (nonatomic, retain) NSArray *whitelistedSubtypes;

- (void).cxx_destruct;
- (bool)alwaysAlert;
- (bool)alwaysSyncSettings;
- (id)blacklistedCategories;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (bool)optOutOfAttachmentTransmission;
- (bool)optOutOfCoordination;
- (bool)optOutOfCoordinationWithSubtype:(long long)arg1;
- (bool)optOutOfWaitForUserIdle;
- (void)setAlwaysAlert:(bool)arg1;
- (void)setAlwaysSyncSettings:(bool)arg1;
- (void)setBlacklistedCategories:(id)arg1;
- (void)setOptOutOfAttachmentTransmission:(bool)arg1;
- (void)setOptOutOfCoordination:(bool)arg1;
- (void)setOptOutOfWaitForUserIdle:(bool)arg1;
- (void)setWhitelistedSubtypes:(id)arg1;
- (id)whitelistedSubtypes;

@end
