/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFContextManager : NSObject {
    CPDistributedMessagingCenter * _center;
    struct __CFArray { } * _contextProviders;
}

+ (id)defaultContextManager;

- (void).cxx_destruct;
- (id)_collateContexts;
- (void)_collateContextsIntoArray:(id)arg1;
- (id)_serverName;
- (void)_shutdownServer;
- (void)_startListening;
- (void)_stopListening;
- (bool)addContextProvider:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)nothing;
- (void)removeContextProvider:(id)arg1;
- (void)startCenter:(id)arg1;

@end
