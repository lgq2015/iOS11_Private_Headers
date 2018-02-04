/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@interface WebBookmarkReadonlyCollection : NSObject <WBBookmarkProvider> {
    WebBookmarkCollection * _collection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)databaseHealthInformation;
- (void)enumerateBookmarks:(bool)arg1 andReadingListItems:(bool)arg2 matchingString:(id)arg3 usingBlock:(id /* block */)arg4;
- (id)initReadonlySafariBookmarkCollection;
- (id)readingListBookmarksMatchingString:(id)arg1 maxResults:(unsigned int)arg2 onlyArchivedBookmarks:(bool)arg3;

@end
