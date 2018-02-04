/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

@interface CLKComplicationTemplateExtraLargeStackText : CLKComplicationTemplate {
    unsigned long long  _highlightMode;
    CLKTextProvider * _line1TextProvider;
    CLKTextProvider * _line2TextProvider;
}

@property (nonatomic) bool highlightLine2;
@property (nonatomic) unsigned long long highlightMode;
@property (nonatomic, copy) CLKTextProvider *line1TextProvider;
@property (nonatomic, copy) CLKTextProvider *line2TextProvider;

- (void).cxx_destruct;
- (id)JSONObjectRepresentationWritingResourcesToBundlePath:(id)arg1;
- (void)_enumerateIntegerKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)arg1;
- (id)_initWithJSONObjectRepresentation:(id)arg1 bundle:(id)arg2;
- (bool)highlightLine2;
- (unsigned long long)highlightMode;
- (bool)isCompatibleWithFamily:(long long)arg1;
- (id)line1TextProvider;
- (id)line2TextProvider;
- (void)setHighlightLine2:(bool)arg1;
- (void)setHighlightMode:(unsigned long long)arg1;
- (void)setLine1TextProvider:(id)arg1;
- (void)setLine2TextProvider:(id)arg1;

@end
