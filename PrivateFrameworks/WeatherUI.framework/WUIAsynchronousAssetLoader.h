/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WeatherUI.framework/WeatherUI
 */

@interface WUIAsynchronousAssetLoader : NSObject {
    NSCache * _caDataCache;
    NSObject<OS_dispatch_queue> * _caml_parsing_queue;
    NSCache * _dataCache;
    <WAAssetLoaderDelegate> * _delegate;
    NSTimer * _opportunityTimer;
    NSObject<OS_dispatch_queue> * _queue;
    NSCache * _resourceCache;
}

@property (nonatomic, retain) NSCache *caDataCache;
@property (nonatomic, retain) NSCache *dataCache;
@property (nonatomic) <WAAssetLoaderDelegate> *delegate;
@property (nonatomic, retain) NSTimer *opportunityTimer;
@property (nonatomic, retain) NSCache *resourceCache;

+ (id)sharedAssetLoader;

- (void).cxx_destruct;
- (Class)CAMLParser:(id)arg1 didFailToFindClassWithName:(id)arg2;
- (void)CAMLParser:(id)arg1 didLoadResource:(id)arg2 fromURL:(id)arg3;
- (void)CAMLParser:(id)arg1 formatErrorString:(const char *)arg2 arguments:(char *)arg3 lineNumber:(unsigned long long)arg4;
- (void)CAMLParser:(id)arg1 formatWarningString:(const char *)arg2 arguments:(char *)arg3 lineNumber:(unsigned long long)arg4;
- (id)CAMLParser:(id)arg1 resourceForURL:(id)arg2;
- (void)_asynchronouslyPreheatCADataForCity:(id)arg1;
- (void)_opportunisticallyLoad;
- (void)_primeOpportunisticLoad;
- (void)beginLoading;
- (id)caDataCache;
- (id)caml_parsing_queue;
- (void)cancelLoading;
- (id)dataCache;
- (void)dealloc;
- (id)delegate;
- (void)didReceivedMemoryWarning;
- (id)filenameForCondition:(long long)arg1 isDay:(bool)arg2;
- (id)init;
- (void)loadRootLayerForFile:(id)arg1 completion:(id /* block */)arg2;
- (id)opportunityTimer;
- (id)queue;
- (id)resourceCache;
- (void)setCaDataCache:(id)arg1;
- (void)setDataCache:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setOpportunityTimer:(id)arg1;
- (void)setResource:(id)arg1 forKey:(id)arg2;
- (void)setResourceCache:(id)arg1;

@end
