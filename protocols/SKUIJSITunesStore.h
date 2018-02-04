/* made by EzioChiu.
 */

@protocol SKUIJSITunesStore <JSExport>

@required

- (long long)applicationIconBadgeNumber;
- (void)approveInPerson:(NSNumber *)arg1 :(JSValue *)arg2;
- (bool)areVideosCloudPurchasesEnabled;
- (void)attemptLocalAskToBuyApproval:(NSNumber *)arg1;
- (void)buy:(NSDictionary *)arg1;
- (void)clearToggleStateItems;
- (NSDictionary *)documentSizeForNavigationDocument:(id)arg1;
- (void)download:(NSDictionary *)arg1;
- (void)downloadExistsFor:(NSNumber *)arg1 :(JSValue *)arg2;
- (void)exit:(NSDictionary *)arg1;
- (void)fetchMSOProviderStatus:(JSValue *)arg1;
- (void)fetchTemplates:(NSArray *)arg1 :(JSValue *)arg2;
- (void)findApps:(NSArray *)arg1 :(JSValue *)arg2 :(NSDictionary *)arg3;
- (void)findLibraryItems:(NSArray *)arg1 :(JSValue *)arg2 :(NSDictionary *)arg3;
- (void)findOwnedItems:(NSArray *)arg1 :(JSValue *)arg2;
- (void)findToggleStateForItem:(NSString *)arg1 :(JSValue *)arg2;
- (void)getAdminStatus:(NSDictionary *)arg1 :(JSValue *)arg2;
- (void)getBookSample:(NSDictionary *)arg1;
- (void)getProfilePermissions:(NSDictionary *)arg1 :(JSValue *)arg2;
- (void)headsUp:(NSString *)arg1 :(NSDictionary *)arg2;
- (NSString *)hostApp;
- (bool)isAppPreview;
- (void)isInstalledApp:(NSNumber *)arg1 :(JSValue *)arg2;
- (void)isRemovedSystemApp:(NSString *)arg1 :(JSValue *)arg2;
- (void)launchICloudFamilySettings;
- (void)loadGratisContent:(JSValue *)arg1;
- (void)loadRental:(NSNumber *)arg1 :(JSValue *)arg2;
- (void)loadRentals:(JSValue *)arg1;
- (void)log:(NSString *)arg1;
- (SKUIJSAppleAccount *)primaryAppleAccount;
- (void)resetStateForActiveDocument;
- (bool)resourceExists:(NSString *)arg1;
- (void)restoreRemovedSystemApp:(NSString *)arg1 :(JSValue *)arg2;
- (SKUIJSRestrictions *)restrictions;
- (void)setApplicationIconBadgeNumber:(long long)arg1;
- (void)setPreviewOverlay:(IKDOMDocument *)arg1 :(NSDictionary *)arg2;
- (void)updateToggleStateForItem:(NSString *)arg1 toggled:(bool)arg2 :(JSValue *)arg3;

@end