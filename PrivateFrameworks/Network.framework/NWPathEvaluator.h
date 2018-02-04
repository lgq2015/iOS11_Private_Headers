/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Network.framework/Network
 */

@interface NWPathEvaluator : NSObject {
    NWEndpoint * _endpoint;
    NSObject<OS_nw_path_evaluator> * _internalEvaluator;
    NWPath * _internalPath;
    NWParameters * _parameters;
}

@property (nonatomic, readonly) NWEndpoint *endpoint;
@property (readonly) NSObject<OS_nw_path_evaluator> *internalEvaluator;
@property (retain) NWPath *internalPath;
@property (readonly) NWParameters *parameters;
@property (nonatomic, readonly) NWPath *path;

// Image: /System/Library/PrivateFrameworks/Network.framework/Network

+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)copySavedPathEvaluatorForEndpoint:(id)arg1 parameters:(id)arg2;
+ (void)initialize;
+ (void)savePathEvaluator:(id)arg1;
+ (id)sharedDefaultEvaluator;

- (void).cxx_destruct;
- (id)copyPath;
- (void)dealloc;
- (id)endpoint;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBrowseDescriptor:(id)arg1 parameters:(id)arg2;
- (id)initWithEndpoint:(id)arg1 parameters:(id)arg2;
- (id)initWithEvaluator:(id)arg1 parameters:(id)arg2;
- (id)initWithListenParameters:(id)arg1;
- (id)internalEvaluator;
- (id)internalPath;
- (bool)isEqual:(id)arg1;
- (bool)matchesEndpoint:(id)arg1 parameters:(id)arg2;
- (id)parameters;
- (id)path;
- (bool)requestNexus;
- (void)satisfyPathAgentsWithCompletionHandler:(id /* block */)arg1;
- (void)setInternalPath:(id)arg1;
- (void)triggerPathAgentsIncludingVoluntary:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)triggerVoluntaryPathAgentsWithCompletionHandler:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation

+ (id)wf_pathEvaluatorForURL:(id)arg1;

- (bool)wf_isReachable;

@end
