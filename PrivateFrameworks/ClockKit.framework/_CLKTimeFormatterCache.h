/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

@interface _CLKTimeFormatterCache : NSObject {
    NSMutableDictionary * _timeAndDesignatorFormatters;
    NSMutableDictionary * _timeAndDesignatorFormattersSuppressingWhitespace;
    NSMutableDictionary * _timeOnlyFormatters;
}

+ (id)sharedInstance;
+ (id)zoneName:(id)arg1;

- (void).cxx_destruct;
- (void)_invalidateFormatters;
- (void)dealloc;
- (id)init;
- (id)timeAndDesignatorFormatterForZone:(id)arg1 suppressWhitespace:(bool)arg2;
- (id)timeOnlyFormatterForZone:(id)arg1 hasSeconds:(bool)arg2;

@end
