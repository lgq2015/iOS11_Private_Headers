/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXAppLaunchHistogramWithPersistentBackup : _ATXAppLaunchHistogram <NSSecureCoding> {
    _ATXDataStore * _datastore;
    long long  _histogramType;
    bool  _saveInBackground;
    ATXBackgroundSaver * _saver;
}

@property (nonatomic, readonly) _ATXDataStore *datastore;
@property (nonatomic, readonly) long long histogramType;
@property (nonatomic) bool saveInBackground;

- (void).cxx_destruct;
- (void)addLaunchWithBundleId:(id)arg1 date:(id)arg2 timeZone:(id)arg3;
- (void)addLaunchWithBundleId:(id)arg1 elapsedTime:(double)arg2;
- (id)datastore;
- (void)flush;
- (long long)histogramType;
- (id)initWithDataStore:(id)arg1 histogramType:(long long)arg2;
- (id)initWithDataStore:(id)arg1 histogramType:(long long)arg2 loadFromDataStore:(bool)arg3 saveInBackground:(bool)arg4;
- (id)initWithDataStore:(id)arg1 histogramType:(long long)arg2 saveInBackground:(bool)arg3;
- (bool)removeHistoryForBundleId:(id)arg1;
- (int)removeHistoryForBundleIds:(id)arg1;
- (void)resetData;
- (bool)saveInBackground;
- (void)setSaveInBackground:(bool)arg1;

@end
