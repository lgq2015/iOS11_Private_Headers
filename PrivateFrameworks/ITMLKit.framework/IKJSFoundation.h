/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKJSFoundation : NSObject {
    IKAppContext * _appContext;
    NSMutableDictionary * _dateFormatterCache;
    <IKAppDeviceConfig> * _deviceConfig;
    NSMutableDictionary * _jsTimers;
}

@property (nonatomic) IKAppContext *appContext;
@property (nonatomic, retain) NSMutableDictionary *dateFormatterCache;
@property (nonatomic) <IKAppDeviceConfig> *deviceConfig;
@property (nonatomic, retain) NSMutableDictionary *jsTimers;

- (void).cxx_destruct;
- (void)_clearTimer:(id)arg1;
- (void)_jsTimerFired:(id)arg1;
- (id)_startTimer:(id)arg1 time:(long long)arg2 repeating:(bool)arg3;
- (id)_stringForKey:(id)arg1 fromDict:(id)arg2;
- (id)appContext;
- (void)clearCookies;
- (void)clearInterval:(id)arg1;
- (void)clearTimeout:(id)arg1;
- (id)dateFormatterCache;
- (id)deviceConfig;
- (id)getCookieForURL:(id)arg1 useSSCookieStorage:(bool)arg2;
- (id)initWithAppContext:(id)arg1 deviceConfig:(id)arg2;
- (id)jsTimers;
- (void)setAppContext:(id)arg1;
- (void)setCookie:(id)arg1 useSSCookieStorage:(bool)arg2;
- (void)setDateFormatterCache:(id)arg1;
- (void)setDeviceConfig:(id)arg1;
- (id)setInterval:(id)arg1 time:(long long)arg2;
- (void)setJsTimers:(id)arg1;
- (id)setTimeout:(id)arg1 time:(long long)arg2;
- (void)stopTimers;

@end
