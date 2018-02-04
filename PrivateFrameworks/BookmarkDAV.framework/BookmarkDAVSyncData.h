/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BookmarkDAV.framework/BookmarkDAV
 */

@interface BookmarkDAVSyncData : NSObject {
    NSMutableDictionary * _backingDict;
    void * _db;
    bool  _hasChanges;
}

@property (nonatomic, retain) NSString *accountPrsId;
@property (nonatomic, retain) NSString *bookmarksBarId;
@property (nonatomic) unsigned long long bookmarksBarOrder;
@property (nonatomic, retain) NSString *bookmarksMenuId;
@property (nonatomic) unsigned long long bookmarksMenuOrder;
@property (nonatomic, retain) NSDictionary *bulkRequests;
@property (nonatomic) unsigned long long clientVersion;
@property (nonatomic, retain) NSString *ctag;
@property (nonatomic, retain) NSString *etag;
@property (nonatomic, readonly) bool hasChanges;
@property (nonatomic) bool hasHitQuotaLimit;
@property (nonatomic, retain) NSDictionary *heldAsideOrderings;
@property (nonatomic, retain) NSURL *homeURL;
@property (nonatomic) bool initialSyncDone;
@property (nonatomic, retain) NSNumber *knownQuotaRemaining;
@property (nonatomic, retain) NSURL *principalURL;
@property (nonatomic, retain) NSString *ptag;
@property (nonatomic, retain) NSString *pushKey;
@property (nonatomic, retain) NSDictionary *pushTransports;
@property (nonatomic) bool supportsSyncCollection;
@property (nonatomic, retain) NSString *syncToken;

- (id)accountPrsId;
- (id)bookmarksBarId;
- (unsigned long long)bookmarksBarOrder;
- (id)bookmarksMenuId;
- (unsigned long long)bookmarksMenuOrder;
- (id)bulkRequests;
- (unsigned long long)clientVersion;
- (id)ctag;
- (void)dealloc;
- (id)etag;
- (bool)hasChanges;
- (bool)hasHitQuotaLimit;
- (id)heldAsideOrderings;
- (id)homeURL;
- (id)initWithBookmarkDatabase:(void*)arg1;
- (bool)initialSyncDone;
- (id)knownQuotaRemaining;
- (id)principalURL;
- (id)ptag;
- (id)pushKey;
- (id)pushTransports;
- (void)setAccountPrsId:(id)arg1;
- (void)setBookmarksBarId:(id)arg1;
- (void)setBookmarksBarOrder:(unsigned long long)arg1;
- (void)setBookmarksMenuId:(id)arg1;
- (void)setBookmarksMenuOrder:(unsigned long long)arg1;
- (void)setBulkRequests:(id)arg1;
- (void)setClientVersion:(unsigned long long)arg1;
- (void)setCtag:(id)arg1;
- (void)setEtag:(id)arg1;
- (void)setHasHitQuotaLimit:(bool)arg1;
- (void)setHeldAsideOrderings:(id)arg1;
- (void)setHomeURL:(id)arg1;
- (void)setInitialSyncDone:(bool)arg1;
- (void)setKnownQuotaRemaining:(id)arg1;
- (void)setPrincipalURL:(id)arg1;
- (void)setPtag:(id)arg1;
- (void)setPushKey:(id)arg1;
- (void)setPushTransports:(id)arg1;
- (void)setSupportsSyncCollection:(bool)arg1;
- (void)setSyncToken:(id)arg1;
- (bool)supportsSyncCollection;
- (id)syncToken;
- (void)writeToBookmarkDB;

@end
