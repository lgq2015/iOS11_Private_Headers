/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCDatagramChannelManager : NSObject {
    NSMutableDictionary * _datagramChannels;
    NSMutableDictionary * _destinations;
    unsigned int  _nextToken;
    id /* block */  _readHandler;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _stateLock;
}

@property (copy) id /* block */ readHandler;

+ (id)sharedInstance;

- (id)addDatagramChannelWithDescriptor:(int)arg1 eventHandler:(id /* block */)arg2 error:(id*)arg3;
- (id)addDatagramChannelWithDestination:(id)arg1 eventHandler:(id /* block */)arg2 error:(id*)arg3;
- (id)datagramChannelWithIDSDestination:(id)arg1;
- (id)datagramChannelWithToken:(unsigned int)arg1;
- (void)dealloc;
- (id)init;
- (id /* block */)readHandler;
- (void)removeDatagramChannel:(id)arg1;
- (void)setReadHandler:(id /* block */)arg1;
- (bool)setupDatagramChannel:(id)arg1 eventHandler:(id /* block */)arg2 error:(id*)arg3;

@end
