/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BookmarkDAV.framework/BookmarkDAV
 */

@interface BookmarkDAVBulkPostTask : CoreDAVPostTask {
    NSString * _checkCTag;
    NSURL * _checkCTagURL;
    NSMutableDictionary * _folderURLToChildrenURLOrder;
    NSString * _nextRootCTag;
    NSString * _nextRootSyncToken;
    NSMutableArray * _parsedBookmarks;
    NSMutableDictionary * _parsedBookmarksByURL;
    NSMutableArray * _parsedFolders;
    NSMutableDictionary * _parsedFoldersByURL;
}

@property (nonatomic, readonly) NSDictionary *folderURLToChildrenURLOrder;
@property (nonatomic, retain) NSString *nextRootCTag;
@property (nonatomic, retain) NSString *nextRootSyncToken;
@property (nonatomic, readonly) NSArray *parsedBookmarks;
@property (nonatomic, readonly) NSArray *parsedFolders;

- (void)_foundChildrenOrder:(id)arg1 inFolderWithURL:(id)arg2;
- (id)additionalHeaderValues;
- (id)copyDefaultParserForContentType:(id)arg1;
- (void)dealloc;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)folderURLToChildrenURLOrder;
- (id)initWithDataPayload:(id)arg1 atURL:(id)arg2 checkCTag:(id)arg3 checkCTagURL:(id)arg4;
- (id)nextRootCTag;
- (id)nextRootSyncToken;
- (id)parsedBookmarks;
- (id)parsedFolders;
- (void)setNextRootCTag:(id)arg1;
- (void)setNextRootSyncToken:(id)arg1;

@end
