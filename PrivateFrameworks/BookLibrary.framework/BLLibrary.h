/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
 */

@interface BLLibrary : NSObject {
    IMLibraryPlist * _booksPlist;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    IMLibraryPlist * _managedPlist;
    IMLibraryPlist * _purchasedPlist;
    IMLibraryPlist * _sharedPlist;
}

@property (nonatomic, retain) IMLibraryPlist *booksPlist;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, retain) IMLibraryPlist *managedPlist;
@property (nonatomic, retain) IMLibraryPlist *purchasedPlist;
@property (nonatomic, retain) IMLibraryPlist *sharedPlist;

+ (bool)_addDate:(id)arg1 toPlist:(id)arg2 bookItem:(id)arg3 error:(id*)arg4;
+ (id)defaultBookLibrary;
+ (void)initialize;

- (void).cxx_destruct;
- (bool)_addSharedBookToPurchasesPlistWithPermlink:(id)arg1 error:(id*)arg2;
- (id)_allPlists;
- (id)_bookItemFromPermlink:(id)arg1 error:(id*)arg2;
- (id)_bookItemFromStoreID:(id)arg1 permlink:(id)arg2 error:(id*)arg3;
- (bool)_bookItemIsShared:(id)arg1;
- (id)_bookItemsFromPlist:(id)arg1;
- (void)_bookWasOpenedWithStoreID:(id)arg1 permlink:(id)arg2 date:(id)arg3;
- (void)_cancelPurge;
- (void)_deleteBooksFromSharedPlist:(id)arg1;
- (void)_downloadWithPermalink:(id)arg1 title:(id)arg2 result:(id /* block */)arg3;
- (id)_findBookItemWithTestBlock:(id /* block */)arg1 foundWhere:(long long*)arg2;
- (bool)_isMultiUser;
- (bool)_isShareableBook:(id)arg1;
- (id)_list:(id)arg1 testBlock:(id /* block */)arg2;
- (id)_orphanedBookURLs;
- (id)_perUserBookURLForBookURL:(id)arg1;
- (long long)_periodicPurgeVolume:(id)arg1 urgency:(long long)arg2 requested:(id)arg3;
- (long long)_purgeOrphanedBooks;
- (long long)_purgeVolume:(id)arg1 urgency:(long long)arg2 requested:(id)arg3;
- (long long)_purgeableAmountForVolume:(id)arg1 urgency:(long long)arg2;
- (long long)_recoverSpace:(long long)arg1 fromList:(id)arg2 withMaxPriority:(long long)arg3;
- (bool)_removeBookFromLibraryWithPath:(id)arg1 error:(id*)arg2;
- (id)_scoredSharedBooksWithinVolume:(id)arg1;
- (void)addITunesUBookToLibraryWithPermlink:(id)arg1 title:(id)arg2 result:(id /* block */)arg3;
- (id)allBookItems;
- (id)bookIdentifierFromURL:(id)arg1 error:(id*)arg2;
- (bool)bookItem:(id)arg1 isWithinVolume:(id)arg2;
- (id)booksPlist;
- (id)dispatchQueue;
- (id)init;
- (id)managedPlist;
- (id)purchasedPlist;
- (bool)removeBookFromLibraryWithIdentifier:(id)arg1 error:(id*)arg2;
- (void)setBooksPlist:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setManagedPlist:(id)arg1;
- (void)setPurchasedPlist:(id)arg1;
- (void)setSharedPlist:(id)arg1;
- (id)sharedPlist;

@end
