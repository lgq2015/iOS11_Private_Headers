/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLLoadConfigurationOperation : NSOperation {
    SKUIClientContext * _clientContext;
    id /* block */  _configurationBlock;
    NSLock * _lock;
}

@property (retain) SKUIClientContext *clientContext;
@property (copy) id /* block */ configurationBlock;

- (void).cxx_destruct;
- (id)_authenticateAccount:(id)arg1 error:(id*)arg2;
- (id)_configurationWithAccount:(id)arg1 clientContext:(id)arg2 error:(id*)arg3;
- (id)_loadAuthorWithAccount:(id)arg1 clientContext:(id)arg2;
- (id)clientContext;
- (id /* block */)configurationBlock;
- (id)init;
- (void)main;
- (void)setClientContext:(id)arg1;
- (void)setConfigurationBlock:(id /* block */)arg1;

@end
