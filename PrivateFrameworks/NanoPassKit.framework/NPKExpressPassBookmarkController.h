/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKExpressPassBookmarkController : NSObject {
    int  _bookmarkDidChangeToken;
    <NPKExpressPassBookmarkControllerDelegate> * _delegate;
    NPSDomainAccessor * _domainAccessor;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NPSManager * _preferenceSyncManager;
}

@property (nonatomic, readonly) NSDictionary *allBookmarkDictionariesMap;
@property <NPKExpressPassBookmarkControllerDelegate> *delegate;
@property (nonatomic, retain) NPSDomainAccessor *domainAccessor;
@property (nonatomic, readonly) NPSManager *preferenceSyncManager;

- (void).cxx_destruct;
- (id)_backwardCompatibilityDefaultExpressFelicaTransitBookmark;
- (id)_bookmarkWithDictionary:(id)arg1;
- (void)_postDefaultExpressPassDidUpdateDarwinNotification;
- (id)_queueAllBookmarks;
- (void)_queueBackwardCompatibilityRemoveDefaultExpressFelicaTransitBookmark;
- (void)_queueBackwardCompatibilitySetDefaultExpressFelicaTransitBookmark:(id)arg1;
- (void)_registerDefaultExpressPassDidUpdateDarwinNotification;
- (void)_synchronizeDomainAccessorWithExpressPassType:(long long)arg1;
- (id)allBookmarkDictionariesMap;
- (id)allBookmarks;
- (id)bookmarkForExpressMode:(id)arg1;
- (id)bookmarksWithPassUniqueIdentifier:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)domainAccessor;
- (id)init;
- (id)initWithDomainAccessor:(id)arg1 preferenceSyncManager:(id)arg2;
- (id)preferenceSyncManager;
- (void)removeBookmarkWithPassUniqueIdentifier:(id)arg1 expressMode:(id)arg2;
- (void)setBookmark:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDomainAccessor:(id)arg1;

@end
