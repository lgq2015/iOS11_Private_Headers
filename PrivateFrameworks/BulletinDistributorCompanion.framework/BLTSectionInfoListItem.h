/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTSectionInfoListItem : NSObject {
    NSString * _displayName;
    NSDictionary * _overrides;
    BBSectionInfo * _sectionInfo;
    NSString * _universalSectionID;
}

@property (copy) NSString *displayName;
@property (retain) NSDictionary *overrides;
@property (retain) BBSectionInfo *sectionInfo;
@property (copy) NSString *universalSectionID;

- (void).cxx_destruct;
- (id)displayName;
- (id)overrides;
- (id)sectionInfo;
- (void)setDisplayName:(id)arg1;
- (void)setOverrides:(id)arg1;
- (void)setSectionInfo:(id)arg1;
- (void)setUniversalSectionID:(id)arg1;
- (id)universalSectionID;

@end
