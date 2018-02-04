/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

@interface WATodayModel : NSObject {
    WFServiceConnection * _connection;
    WAForecastModel * _forecastModel;
    struct ct_green_tea_logger_s { } * _greenTeaLogger;
    NSDate * _lastUpdateDate;
    NSOperationQueue * _modelOperationQueue;
    NSHashTable * _observers;
}

@property (nonatomic, retain) WFServiceConnection *connection;
@property (nonatomic, retain) WAForecastModel *forecastModel;
@property (nonatomic) struct ct_green_tea_logger_s { }*greenTeaLogger;
@property (nonatomic, retain) NSDate *lastUpdateDate;

+ (id)autoupdatingLocationModelWithPreferences:(id)arg1 effectiveBundleIdentifier:(id)arg2;
+ (id)modelWithLocation:(id)arg1;

- (void).cxx_destruct;
- (void)_executeForecastRetrievalForLocation:(id)arg1 completion:(id /* block */)arg2;
- (void)_executeLocationUpdateWithCompletion:(id /* block */)arg1;
- (void)_fireTodayModelForecastWasUpdated:(id)arg1;
- (void)_fireTodayModelWantsUpdate;
- (void)_forecastUpdateCompleted:(id)arg1 forecastModel:(id)arg2 error:(id)arg3 completion:(id /* block */)arg4;
- (void)_locationUpdateCompleted:(id)arg1 error:(id)arg2 completion:(id /* block */)arg3;
- (void)_persistStateWithModel:(id)arg1;
- (void)_willDeliverForecastModel:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)connection;
- (void)dealloc;
- (bool)executeModelUpdateWithCompletion:(id /* block */)arg1;
- (id)forecastModel;
- (struct ct_green_tea_logger_s { }*)greenTeaLogger;
- (id)init;
- (id)initWithLocation:(id)arg1;
- (id)lastUpdateDate;
- (id)location;
- (void)removeObserver:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setForecastModel:(id)arg1;
- (void)setGreenTeaLogger:(struct ct_green_tea_logger_s { }*)arg1;
- (void)setLastUpdateDate:(id)arg1;

@end
