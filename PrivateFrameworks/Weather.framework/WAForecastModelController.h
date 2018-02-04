/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

@interface WAForecastModelController : NSObject {
    NSObject<OS_dispatch_queue> * _completionHandlerQueue;
    NSMutableDictionary * _completionHandlersForCity;
    WFServiceConnection * _connection;
    NSOperationQueue * _forecastOperationQueue;
    struct ct_green_tea_logger_s { } * _greenTeaLogger;
    NSObject<OS_dispatch_queue> * _incomingRequestQueue;
    NSString * _trackingParameter;
    NSMutableSet * _updatingCities;
}

@property (retain) NSObject<OS_dispatch_queue> *completionHandlerQueue;
@property (retain) NSMutableDictionary *completionHandlersForCity;
@property (nonatomic, retain) WFServiceConnection *connection;
@property (retain) NSOperationQueue *forecastOperationQueue;
@property (nonatomic) struct ct_green_tea_logger_s { }*greenTeaLogger;
@property (retain) NSObject<OS_dispatch_queue> *incomingRequestQueue;
@property (copy) NSString *trackingParameter;
@property (retain) NSMutableSet *updatingCities;

- (void).cxx_destruct;
- (id)_commaSeparatedUpdatingCitiesNames;
- (void)_handleForecastOperationCompletion:(id)arg1;
- (id)_queue_executeFetchForCity:(id)arg1 completion:(id /* block */)arg2;
- (void)cancelAllFetchRequests;
- (id)completionHandlerQueue;
- (id)completionHandlersForCity;
- (id)connection;
- (void)dealloc;
- (bool)fetchForecastForCities:(id)arg1 completion:(id /* block */)arg2;
- (bool)fetchForecastForCity:(id)arg1 completion:(id /* block */)arg2;
- (id)forecastOperationQueue;
- (struct ct_green_tea_logger_s { }*)greenTeaLogger;
- (id)incomingRequestQueue;
- (id)init;
- (bool)isCityBeingUpdated:(id)arg1;
- (void)setCompletionHandlerQueue:(id)arg1;
- (void)setCompletionHandlersForCity:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setForecastOperationQueue:(id)arg1;
- (void)setGreenTeaLogger:(struct ct_green_tea_logger_s { }*)arg1;
- (void)setIncomingRequestQueue:(id)arg1;
- (void)setTrackingParameter:(id)arg1;
- (void)setUpdatingCities:(id)arg1;
- (id)trackingParameter;
- (id)updatingCities;

@end
