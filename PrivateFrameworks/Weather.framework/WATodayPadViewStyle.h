/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

@interface WATodayPadViewStyle : NSObject <NSCopying> {
    UIFont * _conditionsFont;
    double  _conditionsImageLeadingMargin;
    double  _conditionsLabelBaselineToBottom;
    double  _conditionsLabelBaselineToLocationLabelBaseline;
    unsigned long long  _format;
    double  _labelLeadingMargin;
    UIFont * _locationFont;
    double  _locationLabelBaselineToTemperatureLabelBaseline;
    long long  _orientation;
    UIFont * _temperatureFont;
    double  _temperatureLabelBaselineToConditionsImageViewBottom;
}

@property (nonatomic, copy) UIFont *conditionsFont;
@property (nonatomic) double conditionsImageLeadingMargin;
@property (nonatomic) double conditionsLabelBaselineToBottom;
@property (nonatomic) double conditionsLabelBaselineToLocationLabelBaseline;
@property (nonatomic) unsigned long long format;
@property (nonatomic) double labelLeadingMargin;
@property (nonatomic, copy) UIFont *locationFont;
@property (nonatomic) double locationLabelBaselineToTemperatureLabelBaseline;
@property (nonatomic) long long orientation;
@property (nonatomic, copy) UIFont *temperatureFont;
@property (nonatomic) double temperatureLabelBaselineToConditionsImageViewBottom;

+ (id)styleForScreenWithSize:(struct CGSize { double x1; double x2; })arg1 orientation:(long long)arg2;

- (void).cxx_destruct;
- (void)_setupForDefaultWithOrientation:(long long)arg1;
- (void)_setupForGigantorWithOrientation:(long long)arg1;
- (id)conditionsFont;
- (double)conditionsImageLeadingMargin;
- (double)conditionsLabelBaselineToBottom;
- (double)conditionsLabelBaselineToLocationLabelBaseline;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)format;
- (id)init;
- (id)initWithFormat:(unsigned long long)arg1 orientation:(long long)arg2;
- (double)labelLeadingMargin;
- (id)locationFont;
- (double)locationLabelBaselineToTemperatureLabelBaseline;
- (long long)orientation;
- (void)setConditionsFont:(id)arg1;
- (void)setConditionsImageLeadingMargin:(double)arg1;
- (void)setConditionsLabelBaselineToBottom:(double)arg1;
- (void)setConditionsLabelBaselineToLocationLabelBaseline:(double)arg1;
- (void)setFormat:(unsigned long long)arg1;
- (void)setLabelLeadingMargin:(double)arg1;
- (void)setLocationFont:(id)arg1;
- (void)setLocationLabelBaselineToTemperatureLabelBaseline:(double)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setTemperatureFont:(id)arg1;
- (void)setTemperatureLabelBaselineToConditionsImageViewBottom:(double)arg1;
- (id)temperatureFont;
- (double)temperatureLabelBaselineToConditionsImageViewBottom;

@end
