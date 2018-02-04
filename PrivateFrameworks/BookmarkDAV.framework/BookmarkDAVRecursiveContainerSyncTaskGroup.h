/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BookmarkDAV.framework/BookmarkDAV
 */

@interface BookmarkDAVRecursiveContainerSyncTaskGroup : CoreDAVRecursiveContainerSyncTaskGroup

- (id)copyFolderMultiGetTaskWithURLs:(id)arg1;
- (id)copyMultiGetTaskWithURLs:(id)arg1;
- (id)dataContentType;
- (id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousPTag:(id)arg3 previousSyncToken:(id)arg4 actions:(id)arg5 syncItemOrder:(bool)arg6 context:(id)arg7 accountInfoProvider:(id)arg8 taskManager:(id)arg9;
- (bool)shouldSyncChildWithResourceType:(id)arg1;

@end
