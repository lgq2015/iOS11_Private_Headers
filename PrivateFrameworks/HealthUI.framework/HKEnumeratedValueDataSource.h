/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKEnumeratedValueDataSource : HKHealthQueryChartCacheDataSource {
    NSArray * _enumeratedValueOrder;
    id /* block */  _userInfoCreationBlock;
}

@property (nonatomic, retain) NSArray *enumeratedValueOrder;
@property (nonatomic, copy) id /* block */ userInfoCreationBlock;

- (void).cxx_destruct;
- (id)_enumeratedValueOrderMapping;
- (id)_enumeratedValuesToIndices:(id)arg1 mapping:(id)arg2;
- (void)_handleSamples:(id)arg1 blockStart:(id)arg2 blockEnd:(id)arg3 intervalComponents:(id)arg4 completion:(id /* block */)arg5;
- (id)enumeratedValueOrder;
- (id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setEnumeratedValueOrder:(id)arg1;
- (void)setUserInfoCreationBlock:(id /* block */)arg1;
- (id /* block */)userInfoCreationBlock;

@end
