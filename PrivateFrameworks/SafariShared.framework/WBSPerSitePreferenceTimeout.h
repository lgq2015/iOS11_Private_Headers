/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSPerSitePreferenceTimeout : NSObject {
    WBSPerSitePreferenceValue * _fallbackValue;
    double  _interval;
}

@property (nonatomic, readonly) WBSPerSitePreferenceValue *fallbackValue;
@property (nonatomic, readonly) double interval;

+ (id)timeoutWithInterval:(double)arg1 fallbackValue:(id)arg2;

- (void).cxx_destruct;
- (id)fallbackValue;
- (id)initWithInterval:(double)arg1 fallbackValue:(id)arg2;
- (double)interval;

@end
