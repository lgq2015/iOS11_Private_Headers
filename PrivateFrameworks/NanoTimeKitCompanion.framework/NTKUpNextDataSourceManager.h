/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKUpNextDataSourceManager : NSObject {
    unsigned long long  _aggregatedState;
    NSObject<OS_dispatch_queue> * _coordinatorQueue;
    NSMutableArray * _dataSourceControllers;
    <NTKUpNextDataSourceManagerDelegate> * _delegate;
    NSSet * _disabledDataSources;
    NSLock * _lock;
    bool  _paused;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *coordinatorQueue;
@property (nonatomic, readonly) NSSet *currentDataSourceIdentifiers;
@property (nonatomic) unsigned long long dataSourceState;
@property (nonatomic, readonly) <NTKUpNextDataSourceManagerDelegate> *delegate;
@property (getter=isPaused, nonatomic, readonly) bool paused;
@property (nonatomic, retain) NSSet *userDisabledDataSources;

+ (id)_activeDataSourceIdentifiers;
+ (id)_availableDataSourceIdentifiers;
+ (id)_dataSourceIdentifierMap;
+ (id)_dataSourceImageCache;
+ (id)_dataSourceLoadingQueue;
+ (id)_dataSourceTitleCache;
+ (id)_removedDataSourceIdentifiers;
+ (id)availableDataSourceIdentifiers;
+ (void)loadDataSourceImageForBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
+ (void)loadDataSourceTitlesUsingBlock:(id /* block */)arg1;
+ (id)sampleContentForBundleIdentifier:(id)arg1;
+ (bool)shouldPreWarmApplicationWithBundleIdentifier:(id)arg1;
+ (bool)wantsLocationInUseAssertonForBundleIdentifier:(id)arg1;

- (void).cxx_destruct;
- (void)_availableDataSourcesDidChange;
- (void)_loadDataSourceWithIdentifier:(id)arg1;
- (void)_unloadDataSourceWithIdentifier:(id)arg1;
- (id)coordinatorQueue;
- (id)currentDataSourceIdentifiers;
- (unsigned long long)dataSourceState;
- (void)dealloc;
- (id)delegate;
- (void)enumerateElementDataSourceControllers:(id /* block */)arg1;
- (void)enumerateElementDataSourceControllersAsync:(id /* block */)arg1;
- (id)initWithQueue:(id)arg1 delegate:(id)arg2;
- (bool)isPaused;
- (void)pauseDataSources;
- (void)resumeDataSources;
- (void)setDataSourceState:(unsigned long long)arg1;
- (void)setUserDisabledDataSources:(id)arg1;
- (id)userDisabledDataSources;

@end
