/* made by EzioChiu.
 */

@protocol MiroProjectEditing <NSObject>

@required

- (void)addAssets:(NSArray *)arg1 removeAssets:(NSArray *)arg2;
- (NSArray *)assetsFilteredForSuggestions;
- (NSIndexSet *)indexesForClipsOfAssetID:(NSString *)arg1;
- (NSString *)memoryLocalizedTitle;
- (void)moveClipAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (int)projectFrameRate;
- (void)removeClip:(id <MiroClip>)arg1;
- (bool)shouldRemoveClip:(id <MiroClip>)arg1;
- (bool)shouldTrimClip:(id <MiroClip>)arg1 startTime:(float)arg2 endTime:(float)arg3;
- (bool)trimClip:(id <MiroClip>)arg1 startTime:(float)arg2 endTime:(float)arg3;
- (NSSet *)usedAssetIDs;

@end
