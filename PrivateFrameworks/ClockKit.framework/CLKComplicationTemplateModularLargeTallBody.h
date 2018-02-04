/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

@interface CLKComplicationTemplateModularLargeTallBody : CLKComplicationTemplate {
    CLKTextProvider * _bodyTextProvider;
    NSDate * _contentDate;
    CLKTextProvider * _headerTextProvider;
    CLKTextProvider * _headerTrailingTextProvider;
    bool  _shouldTruncateHeaderLeadingLabelFirst;
}

@property (nonatomic, copy) CLKTextProvider *bodyTextProvider;
@property (nonatomic, copy) NSDate *contentDate;
@property (nonatomic, copy) CLKTextProvider *headerTextProvider;
@property (nonatomic, copy) CLKTextProvider *headerTrailingTextProvider;
@property (nonatomic) bool shouldTruncateHeaderLeadingLabelFirst;

- (void).cxx_destruct;
- (void)_enumerateBOOLKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateDateKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)arg1;
- (id)bodyTextProvider;
- (id)contentDate;
- (id)headerTextProvider;
- (id)headerTrailingTextProvider;
- (bool)isCompatibleWithFamily:(long long)arg1;
- (void)setBodyTextProvider:(id)arg1;
- (void)setContentDate:(id)arg1;
- (void)setHeaderTextProvider:(id)arg1;
- (void)setHeaderTrailingTextProvider:(id)arg1;
- (void)setShouldTruncateHeaderLeadingLabelFirst:(bool)arg1;
- (bool)shouldTruncateHeaderLeadingLabelFirst;

@end
