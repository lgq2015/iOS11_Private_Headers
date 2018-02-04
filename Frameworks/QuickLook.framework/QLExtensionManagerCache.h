/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLExtensionManagerCache : NSObject {
    NSObject<OS_dispatch_queue> * _accessMatchingExtensionsQueue;
    bool  _isMatchingExtensions;
    NSMutableArray * _loadedNonUIExtensions;
    NSMutableArray * _loadedUIExtensions;
    NSDictionary * _matchingAttributes;
    id  _matchingContext;
    NSMutableDictionary * _matchingExtensions;
    NSObject<OS_dispatch_queue> * _waitForExtensionListQueue;
    NSObject<OS_dispatch_semaphore> * _waitForExtensionsSemaphore;
}

@property (nonatomic, retain) NSMutableArray *loadedNonUIExtensions;
@property (nonatomic, retain) NSMutableArray *loadedUIExtensions;
@property (nonatomic, retain) NSDictionary *matchingAttributes;
@property (nonatomic, retain) id matchingContext;
@property (nonatomic, retain) NSMutableDictionary *matchingExtensions;

- (void).cxx_destruct;
- (void)_didReceiveNewMatchingExtensionList:(id)arg1;
- (void)_synchronouslyWaitForExtensionListIfNeeded;
- (void)beginMatchingExtensions;
- (void)dealloc;
- (void)endMatchingExtensions;
- (id)extensionWithMatchingAttributes:(id)arg1 extensionPath:(id)arg2;
- (bool)hasExtensionWithMatchingAttributes:(id)arg1;
- (id)initWithMatchingAttributes:(id)arg1;
- (id)loadedNonUIExtensions;
- (id)loadedUIExtensions;
- (id)matchingAttributes;
- (id)matchingContext;
- (id)matchingExtensions;
- (void)setLoadedNonUIExtensions:(id)arg1;
- (void)setLoadedUIExtensions:(id)arg1;
- (void)setMatchingAttributes:(id)arg1;
- (void)setMatchingContext:(id)arg1;
- (void)setMatchingExtensions:(id)arg1;

@end
