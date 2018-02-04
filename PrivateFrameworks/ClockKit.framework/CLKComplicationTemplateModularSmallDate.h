/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

@interface CLKComplicationTemplateModularSmallDate : CLKComplicationTemplate {
    CLKDateTextProvider * _dayTextProvider;
    unsigned long long  _highlightMode;
    CLKDateTextProvider * _weekdayTextProvider;
}

@property (nonatomic, copy) CLKDateTextProvider *dayTextProvider;
@property (nonatomic) unsigned long long highlightMode;
@property (nonatomic, copy) CLKDateTextProvider *weekdayTextProvider;

- (void).cxx_destruct;
- (id)JSONObjectRepresentationWritingResourcesToBundlePath:(id)arg1;
- (void)_enumerateIntegerKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)arg1;
- (id)_initWithJSONObjectRepresentation:(id)arg1 bundle:(id)arg2;
- (id)dayTextProvider;
- (bool)highlightLine2;
- (unsigned long long)highlightMode;
- (bool)isCompatibleWithFamily:(long long)arg1;
- (void)setDayTextProvider:(id)arg1;
- (void)setHighlightLine2:(bool)arg1;
- (void)setHighlightMode:(unsigned long long)arg1;
- (void)setWeekdayTextProvider:(id)arg1;
- (id)weekdayTextProvider;

@end
