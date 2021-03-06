/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
 */

@interface ADServer : ADSingleton <NSURLSessionDelegate> {
    double  _configurationExpirationTime;
    NSDictionary * _configurations;
    NSURLSession * _session;
}

@property double configurationExpirationTime;
@property (retain) NSDictionary *configurations;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSURLSession *session;
@property (readonly) Class superclass;

+ (void)initialize;
+ (id)sharedInstance;
+ (id)workQueue;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)buildConfigurationDictionary:(id)arg1;
- (double)configurationExpirationTime;
- (id)configurations;
- (void)handleRequest:(id)arg1 serverURL:(id)arg2 responseHandler:(id /* block */)arg3;
- (id)init;
- (void)restoreConfiguration;
- (id)routingHeaderForClass:(Class)arg1 serverURL:(id)arg2;
- (id)serializeMessage:(id)arg1;
- (id)serverURLForMessageClass:(Class)arg1 serverURL:(id)arg2;
- (id)session;
- (void)setConfigurationExpirationTime:(double)arg1;
- (void)setConfigurations:(id)arg1;
- (void)setSession:(id)arg1;
- (bool)shouldRestoreConfiguration;

@end
