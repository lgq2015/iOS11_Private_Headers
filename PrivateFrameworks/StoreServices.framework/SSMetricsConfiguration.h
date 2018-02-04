/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSMetricsConfiguration : NSObject {
    NSSet * _blacklistedEvents;
    SSMetricsConfiguration * _childConfiguration;
    NSDictionary * _config;
    NSMutableSet * _cookieFieldsUnion;
    bool  _disableEventDecoration;
    bool  _disabled;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSMutableDictionary * _eventFieldsUnion;
    NSDictionary * _fields;
    int  _internalSettingsToken;
    id  _reportingFrequencyOverride;
    bool  _sendDisabled;
}

@property (nonatomic, retain) SSMetricsConfiguration *childConfiguration;
@property (nonatomic) bool disableEventDecoration;
@property (nonatomic, readonly) NSDictionary *fieldsMap;

+ (id)_reportingFrequencyOverride;
+ (void)getReportingFrequencyOverrideWithCompletionBlock:(id /* block */)arg1;
+ (void)setReportingFrequencyOverride:(id)arg1;

- (void).cxx_destruct;
- (bool)_configBooleanForKey:(id)arg1 defaultValue:(bool)arg2;
- (bool)_decorateITMLEvents;
- (id)_initSSMetricsEventConfiguration;
- (void)_setReportingFrequencyOverride:(id)arg1;
- (id)blacklistedEventFields;
- (id)childConfiguration;
- (id)compoundStringWithElements:(id)arg1;
- (id)cookieFields;
- (void)dealloc;
- (bool)disableEventDecoration;
- (id)eventFields;
- (id)fieldsMap;
- (id)initWithGlobalConfiguration:(id)arg1;
- (id)initWithStorePlatformData:(id)arg1;
- (bool)isDisabled;
- (bool)isEventTypeBlacklisted:(id)arg1;
- (bool)isSendDisabled;
- (id)pingURLs;
- (double)reportingFrequency;
- (id)reportingURLString;
- (void)setChildConfiguration:(id)arg1;
- (void)setDisableEventDecoration:(bool)arg1;
- (id)tokenStringWithElements:(id)arg1;
- (id)valueForConfigurationKey:(id)arg1;

@end
