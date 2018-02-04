/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSSiriIntelligenceDonor : NSObject {
    NSObject<OS_dispatch_queue> * _coreSpotlightDonationSerialQueue;
}

+ (id)_bookmarkItemIdentifierForURLString:(id)arg1;
+ (id)_coreSpotlightItemIdentifierForURLString:(id)arg1;
+ (id)_historyItemIdentifierForURLString:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_computeCoreSpotlightIDsForBookmarks:(id)arg1;
- (void)_computeCoreSpotlightIndexingRequirementsForAllBookmarksIDs:(id)arg1 indexedBookmarksIDs:(id)arg2 outIndexIDs:(id*)arg3 outRemoveIDs:(id*)arg4;
- (void)_historyItemsWereRemoved:(id)arg1;
- (void)_indexCoreSpotlightData:(id)arg1;
- (void)_indexHistoryItemsToCoreSpotlight:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)_indexedBookmarksIDs:(id*)arg1;
- (void)_removeAllCoreSpotlightHistoryDataDonatedBySafari;
- (void)_removeCoreSpotlightDataWithIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_sanitizeAttributeSet:(id)arg1;
- (id)_searchableItemsForIDs:(id)arg1 allBookmarks:(id)arg2;
- (void)donateDataForPageWithURL:(id)arg1 fullPageText:(id)arg2 readerText:(id)arg3;
- (void)donateSafariBookmarksToCoreSpotlight:(id)arg1;
- (void)export30DaysWorthOfHistoryToCoreSpotlightWithCompletionHandler:(id /* block */)arg1;
- (id)init;

@end
