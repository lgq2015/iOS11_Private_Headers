/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

@interface WFAirQualityRequest : WFTask {
    bool  _attachRawAPIData;
    id /* block */  _completionHandler;
    NSLocale * _locale;
    WFLocation * _location;
}

@property (nonatomic) bool attachRawAPIData;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, copy) NSLocale *locale;
@property (nonatomic, copy) WFLocation *location;

+ (id)airQualityRequestForLocation:(id)arg1 locale:(id)arg2 completionHandler:(id /* block */)arg3;

- (void).cxx_destruct;
- (bool)attachRawAPIData;
- (void)cleanup;
- (id /* block */)completionHandler;
- (void)handleResponse:(id)arg1;
- (id)initWithLocation:(id)arg1 locale:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)locale;
- (id)location;
- (id)options;
- (void)setAttachRawAPIData:(bool)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setLocale:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)startWithService:(id)arg1;

@end
