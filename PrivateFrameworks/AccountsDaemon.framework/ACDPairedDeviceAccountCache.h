/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACDPairedDeviceAccountCache : NSObject {
    NSArray * _accounts;
    bool  _accountsIsValid;
    NSMutableArray * _completions;
    NSObject<OS_dispatch_queue> * _synchronizationQueue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_didFetchAccounts:(id)arg1 error:(id)arg2;
- (void)accountsFromRemoteDeviceProxy:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)invalidate;

@end
