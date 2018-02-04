/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDBulletinProvider : HMFObject <BBRemoteDataProvider, NSSecureCoding> {
    NSMutableDictionary * _bulletins;
    HMDHomeManager * _homeManager;
    BBDataProviderProxy * _proxy;
}

@property (nonatomic, retain) NSMutableDictionary *bulletins;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) HMDHomeManager *homeManager;
@property (nonatomic, retain) BBDataProviderProxy *proxy;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attachmentPNGDataForRecordID:(id)arg1 sizeConstraints:(id)arg2;
- (id)bulletins;
- (id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2;
- (id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2;
- (void)configure:(id)arg1;
- (void)configureHomeManager:(id)arg1;
- (void)cullBulletinsToCount:(unsigned long long)arg1;
- (id)defaultSectionInfo;
- (void)encodeWithCoder:(id)arg1;
- (void)handleBulletinActionResponse:(id)arg1;
- (id)homeManager;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)insertBulletinWithTitle:(id)arg1 snapshotData:(id)arg2 message:(id)arg3 recordID:(id)arg4 bulletinType:(unsigned long long)arg5 actionURL:(id)arg6 bulletinContext:(struct NSDictionary { Class x1; }*)arg7 actionContext:(struct NSDictionary { Class x1; }*)arg8;
- (id)proxy;
- (void)reloadDefaultSectionInfo;
- (void)removeBulletin:(id)arg1;
- (void)removeBulletinWithRecordID:(id)arg1;
- (id)sectionDisplayName;
- (id)sectionIcon;
- (id)sectionIdentifier;
- (id)sectionParameters;
- (void)setBulletins:(id)arg1;
- (void)setHomeManager:(id)arg1;
- (void)setProxy:(id)arg1;
- (id)sortDescriptors;
- (id)sortedBulletinsByDate;
- (bool)syncsBulletinDismissal;
- (void)updateBulletin:(id)arg1;

@end
