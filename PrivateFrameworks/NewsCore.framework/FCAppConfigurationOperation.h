/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCAppConfigurationOperation : FCOperation {
    FCAppConfigurationResource * _cachedResource;
    NSObject<OS_dispatch_queue> * _completionQueue;
    id /* block */  _configurationCompletionHandler;
    FCCKContentDatabase * _contentDatabase;
    NSString * _resourceID;
    FCAppConfigurationResource * _resultResource;
    bool  _useSecureConnection;
}

@property (nonatomic, copy) FCAppConfigurationResource *cachedResource;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *completionQueue;
@property (nonatomic, copy) id /* block */ configurationCompletionHandler;
@property (nonatomic, retain) FCCKContentDatabase *contentDatabase;
@property (nonatomic, copy) NSString *resourceID;
@property (nonatomic, retain) FCAppConfigurationResource *resultResource;
@property (nonatomic) bool useSecureConnection;

- (void).cxx_destruct;
- (void)_downloadAppConfigFromURL:(id)arg1;
- (id)cachedResource;
- (id)completionQueue;
- (id /* block */)configurationCompletionHandler;
- (id)contentDatabase;
- (id)init;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id)resourceID;
- (id)resultResource;
- (void)setCachedResource:(id)arg1;
- (void)setCompletionQueue:(id)arg1;
- (void)setConfigurationCompletionHandler:(id /* block */)arg1;
- (void)setContentDatabase:(id)arg1;
- (void)setResourceID:(id)arg1;
- (void)setResultResource:(id)arg1;
- (void)setUseSecureConnection:(bool)arg1;
- (bool)useSecureConnection;
- (bool)validateOperation;

@end
