/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariSafeBrowsing.framework/SafariSafeBrowsing
 */

@interface SSBLookupContext : NSObject {
    struct shared_ptr<SafeBrowsing::LookupContext> { 
        struct LookupContext {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _lookupContext;
    unsigned int  _observerToken;
}

+ (id)sharedLookupContext;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_forceDatabaseUpdateWithCompletionHandler:(id /* block */)arg1;
- (void)_forceLoadRemoteConfigurationFromDiskWithCompletionHandler:(id /* block */)arg1;
- (void)_forceUpdateRemoteConfigurationFromServerWithCompletionHandler:(id /* block */)arg1;
- (void)_getDatabaseStatusWithCompletionHandler:(id /* block */)arg1;
- (void)_getServiceStatusWithCompletionHandler:(id /* block */)arg1;
- (void)dealloc;
- (void)getLastDatabaseUpdateTimeWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (void)lookUpURL:(id)arg1 completionHandler:(id /* block */)arg2;

@end
