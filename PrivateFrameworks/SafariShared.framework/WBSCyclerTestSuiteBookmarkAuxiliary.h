/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSCyclerTestSuiteBookmarkAuxiliary : NSObject {
    WBSCyclerOperation * _clearLocalDataOperation;
    WBSCyclerOperation * _cloudKitMigrationOperation;
    WBSCyclerOperation * _generateDAVServerIDsForExistingBookmarksOperation;
    WBSCyclerOperation * _initialClearOperation;
    float  _operationBackoffRatio;
    WBSCyclerOperation * _resetToDAVModeOperation;
}

@property (nonatomic, readonly) float operationBackoffRatio;

- (void).cxx_destruct;
- (void)_attemptCloudKitMigrationWithCompletionHandler:(id /* block */)arg1;
- (void)_attemptInitialClearWithTarget:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_attemptResetToDAVModeWithCompletionHandler:(id /* block */)arg1;
- (void)_attemptToClearDataWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_attemptToGenerateDAVServerIDsForExistingBookmarksWithCompletionHandler:(id /* block */)arg1;
- (id)_attributeStringForBookmark:(id)arg1 multiline:(bool)arg2;
- (id)_descriptionForBookmark:(id)arg1;
- (id)_descriptionForErrorCode:(long long)arg1;
- (id)_errorWithCode:(long long)arg1;
- (id)_errorWithCode:(long long)arg1 userInfo:(id)arg2;
- (id)_expandedDescriptionForBookmark:(id)arg1;
- (id)_formattedStringForBookmark:(id)arg1 indentationLevel:(unsigned long long)arg2;
- (void)fetchAndValidateBookmarksWithExpectedBookmarks:(id)arg1 context:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)hasPerformedOperation:(long long)arg1;
- (id)init;
- (float)operationBackoffRatio;
- (void)performOperation:(long long)arg1 withTarget:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)performOperation:(long long)arg1 withTarget:(id)arg2 options:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)resetOperation:(long long)arg1;
- (id)validateBookmarks:(id)arg1 expectingBookmarks:(id)arg2 context:(id)arg3;

@end
