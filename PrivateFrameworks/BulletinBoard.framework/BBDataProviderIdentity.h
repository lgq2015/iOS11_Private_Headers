/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBDataProviderIdentity : NSObject <NSSecureCoding> {
    BBSectionInfo * _defaultSectionInfo;
    NSArray * _defaultSubsectionInfos;
    NSDictionary * _filterDisplayNames;
    NSString * _parentSectionIdentifier;
    NSString * _sectionDisplayName;
    BBSectionIcon * _sectionIcon;
    NSString * _sectionIdentifier;
    BBSectionParameters * _sectionParameters;
    NSArray * _sortDescriptors;
    NSString * _sortKey;
    NSDictionary * _subsectionDisplayNames;
    bool  _syncsBulletinDismissal;
    struct { 
        unsigned int pushDataProvider : 1; 
        unsigned int dataProviderDidLoad : 1; 
        unsigned int bulletinsWithRequestParameters : 1; 
        unsigned int bulletinsFilteredByDEPRECATED : 1; 
        unsigned int bulletinsFilteredByEnabledSectionsDEPRECATED : 1; 
        unsigned int clearedInfoForBulletins : 1; 
        unsigned int clearedInfoAndBulletinsForClearingAllBulletins : 1; 
        unsigned int clearedInfoAndBulletinsForClearingBulletinsByDate : 1; 
        unsigned int clearedInfoForBulletinsDEPRECATED : 1; 
        unsigned int defaultSectionInfo : 1; 
        unsigned int defaultSubsectionInfos : 1; 
        unsigned int displayNameForSubsectionID : 1; 
        unsigned int sectionParameters : 1; 
        unsigned int migrateSectionInfo : 1; 
        unsigned int sectionDisplayName : 1; 
        unsigned int sectionIcon : 1; 
        unsigned int sectionIconDataDEPRECATED : 1; 
        unsigned int receiveMessageWithName : 1; 
        unsigned int noteSectionInfoDidChange : 1; 
        unsigned int syncBulletinDismissal : 1; 
        unsigned int handleBulletinActionResponse : 1; 
        unsigned int handleBulletinActionResponseWithCompletion : 1; 
        unsigned int universalSectionIdentifier : 1; 
        unsigned int parentSectionIdentifier : 1; 
        unsigned int displayNameForFilterID : 1; 
    }  _traits;
    NSString * _universalSectionIdentifier;
}

@property (nonatomic, copy) BBSectionInfo *defaultSectionInfo;
@property (nonatomic, copy) NSArray *defaultSubsectionInfos;
@property (nonatomic, copy) NSDictionary *filterDisplayNames;
@property (nonatomic, copy) NSString *parentSectionIdentifier;
@property (nonatomic, copy) NSString *sectionDisplayName;
@property (nonatomic, copy) BBSectionIcon *sectionIcon;
@property (nonatomic, copy) NSString *sectionIdentifier;
@property (nonatomic, retain) BBSectionParameters *sectionParameters;
@property (nonatomic, copy) NSArray *sortDescriptors;
@property (nonatomic, copy) NSString *sortKey;
@property (nonatomic, copy) NSDictionary *subsectionDisplayNames;
@property (nonatomic, readonly) bool syncsBulletinDismissal;
@property (nonatomic, readonly) struct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; } traits;
@property (nonatomic, copy) NSString *universalSectionIdentifier;

+ (id)identityForDataProvider:(id)arg1;
+ (id)identityForRemoteDataProvider:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)defaultSectionInfo;
- (id)defaultSubsectionInfos;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)filterDisplayNames;
- (id)initForDataProvider:(id)arg1 forRemoteDataProvider:(bool)arg2;
- (id)initWithCoder:(id)arg1;
- (id)parentSectionIdentifier;
- (id)sectionDisplayName;
- (id)sectionIcon;
- (id)sectionIdentifier;
- (id)sectionParameters;
- (void)setDefaultSectionInfo:(id)arg1;
- (void)setDefaultSubsectionInfos:(id)arg1;
- (void)setFilterDisplayNames:(id)arg1;
- (void)setParentSectionIdentifier:(id)arg1;
- (void)setSectionDisplayName:(id)arg1;
- (void)setSectionIcon:(id)arg1;
- (void)setSectionIdentifier:(id)arg1;
- (void)setSectionParameters:(id)arg1;
- (void)setSortDescriptors:(id)arg1;
- (void)setSortKey:(id)arg1;
- (void)setSubsectionDisplayNames:(id)arg1;
- (void)setUniversalSectionIdentifier:(id)arg1;
- (id)sortDescriptors;
- (id)sortKey;
- (id)subsectionDisplayNames;
- (bool)syncsBulletinDismissal;
- (struct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; })traits;
- (id)universalSectionIdentifier;

@end
