/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

@interface WFReachabilityConfigurationRequest : WFTask {
    id /* block */  _resultHandler;
}

@property (nonatomic, copy) id /* block */ resultHandler;

- (void).cxx_destruct;
- (void)cleanup;
- (void)handleCancellation;
- (void)handleResponse:(id)arg1;
- (id)initWithResultHandler:(id /* block */)arg1;
- (bool)requiresResponse;
- (id /* block */)resultHandler;
- (void)setResultHandler:(id /* block */)arg1;
- (void)startWithService:(id)arg1;

@end
