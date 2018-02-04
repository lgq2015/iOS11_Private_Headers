/* made by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKProcessAssertionBackgroundTaskManager : NSObject {
    unsigned long long  _backgroundTask;
    struct HashSet<WebKit::ProcessAssertionClient *, WTF::PtrHash<WebKit::ProcessAssertionClient *>, WTF::HashTraits<WebKit::ProcessAssertionClient *> > { 
        struct HashTable<WebKit::ProcessAssertionClient *, WebKit::ProcessAssertionClient *, WTF::IdentityExtractor, WTF::PtrHash<WebKit::ProcessAssertionClient *>, WTF::HashTraits<WebKit::ProcessAssertionClient *>, WTF::HashTraits<WebKit::ProcessAssertionClient *> > { 
            struct ProcessAssertionClient {} **m_table; 
            unsigned int m_tableSize; 
            unsigned int m_tableSizeMask; 
            unsigned int m_keyCount; 
            unsigned int m_deletedCount; 
        } m_impl; 
    }  _clients;
    unsigned int  _needsToRunInBackgroundCount;
}

+ (id)shared;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_notifyClientsOfImminentSuspension;
- (void)_updateBackgroundTask;
- (void)addClient:(struct ProcessAssertionClient { int (**x1)(); }*)arg1;
- (void)dealloc;
- (void)decrementNeedsToRunInBackgroundCount;
- (void)incrementNeedsToRunInBackgroundCount;
- (id)init;
- (void)removeClient:(struct ProcessAssertionClient { int (**x1)(); }*)arg1;

@end
