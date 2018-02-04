/* made by EzioChiu.
 */

@protocol WLKUIMediaPlayerLibraryExport <JSExport>

@required

- (NSDictionary *)findItemByPersistentIdentifier:(id)arg1 :(NSArray *)arg2;
- (NSDictionary *)findItemByStoreIdentifier:(NSNumber *)arg1 :(NSArray *)arg2;
- (void)getImageForItem:(NSString *)arg1 :(NSDictionary *)arg2 :(JSValue *)arg3;
- (bool)getIsInitialImport;
- (bool)getIsUpdateInProgress;
- (NSDictionary *)getItem:(NSString *)arg1 :(NSArray *)arg2;
- (unsigned long long)getItemCount;
- (NSDictionary *)getItemWithChildren:(NSString *)arg1 :(NSArray *)arg2;
- (NSArray *)getItems;
- (NSString *)getShowIdentifierForStoreIdentifier:(NSNumber *)arg1;
- (void)getUpdateProgress:(JSValue *)arg1;
- (bool)libraryHasMedia;
- (long long)queryHasItemCount:(NSString *)arg1;
- (bool)setFilter:(NSDictionary *)arg1;
- (void)setFilterAsync:(NSDictionary *)arg1 :(JSValue *)arg2;

@end
