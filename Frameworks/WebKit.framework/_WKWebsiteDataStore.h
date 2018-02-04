/* made by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface _WKWebsiteDataStore : NSObject {
    struct RetainPtr<WKWebsiteDataStore> { 
        void *m_ptr; 
    }  _dataStore;
}

@property (getter=isNonPersistent, readonly) bool nonPersistent;

+ (id)defaultDataStore;
+ (id)nonPersistentDataStore;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)fetchDataRecordsOfTypes:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithDataStore:(id)arg1;
- (bool)isNonPersistent;
- (void)removeDataOfTypes:(unsigned long long)arg1 forDataRecords:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)removeDataOfTypes:(unsigned long long)arg1 modifiedSince:(id)arg2 completionHandler:(id /* block */)arg3;

@end