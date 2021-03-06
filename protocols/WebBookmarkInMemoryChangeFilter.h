/* made by EzioChiu.
 */

@protocol WebBookmarkInMemoryChangeFilter <NSObject>

@required

- (NSArray *)bookmarkIDsModifiedInMemoryNotPassingFilterFromChangeSet:(WebBookmarkChangeSet *)arg1 inFolder:(int)arg2;
- (NSArray *)bookmarkIDsModifiedInMemoryPassingFilterFromChangeSet:(WebBookmarkChangeSet *)arg1 inFolder:(int)arg2;

@end
