/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

@interface WATodayHeaderView : UIView {
    UIImage * _conditionsImage;
    UIImageView * _conditionsImageView;
    UILabel * _conditionsLabel1;
    UIVisualEffectView * _conditionsLabel1VisualEffectView;
    UILabel * _conditionsLabel2;
    UIVisualEffectView * _conditionsLabel2VisualEffectView;
    NSString * _conditionsLine1;
    NSString * _conditionsLine2;
    NSArray * _contentViewConstraints;
    UILabel * _locationLabel;
    UIVisualEffectView * _locationLabelVisualEffectView;
    NSString * _locationName;
    NSArray * _masterConstraints;
    double  _pageBaselineOffset;
    double  _pageDegreeFontSize;
    double  _pageFontSize;
    NSString * _temperature;
    NSString * _temperatureHigh;
    UILabel * _temperatureHighLowLabel;
    UIVisualEffectView * _temperatureHighLowLabelVisualEffectView;
    UILabel * _temperatureLabel;
    UIVisualEffectView * _temperatureLabelVisualEffectView;
    NSString * _temperatureLow;
}

@property (nonatomic, copy) UIImage *conditionsImage;
@property (nonatomic, retain) UIImageView *conditionsImageView;
@property (nonatomic, retain) UILabel *conditionsLabel1;
@property (nonatomic, retain) UIVisualEffectView *conditionsLabel1VisualEffectView;
@property (nonatomic, retain) UILabel *conditionsLabel2;
@property (nonatomic, retain) UIVisualEffectView *conditionsLabel2VisualEffectView;
@property (nonatomic, copy) NSString *conditionsLine1;
@property (nonatomic, copy) NSString *conditionsLine2;
@property (nonatomic, retain) NSArray *contentViewConstraints;
@property (nonatomic, retain) UILabel *locationLabel;
@property (nonatomic, retain) UIVisualEffectView *locationLabelVisualEffectView;
@property (nonatomic, copy) NSString *locationName;
@property (nonatomic, retain) NSArray *masterConstraints;
@property (nonatomic) double pageBaselineOffset;
@property (nonatomic) double pageDegreeFontSize;
@property (nonatomic) double pageFontSize;
@property (nonatomic, copy) NSString *temperature;
@property (nonatomic, copy) NSString *temperatureHigh;
@property (nonatomic, retain) UILabel *temperatureHighLowLabel;
@property (nonatomic, retain) UIVisualEffectView *temperatureHighLowLabelVisualEffectView;
@property (nonatomic, retain) UILabel *temperatureLabel;
@property (nonatomic, retain) UIVisualEffectView *temperatureLabelVisualEffectView;
@property (nonatomic, copy) NSString *temperatureLow;

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (void)_setupConstraints;
- (void)_setupSubviews;
- (void)_updateContent;
- (id)conditionsImage;
- (id)conditionsImageView;
- (id)conditionsLabel1;
- (id)conditionsLabel1VisualEffectView;
- (id)conditionsLabel2;
- (id)conditionsLabel2VisualEffectView;
- (id)conditionsLine1;
- (id)conditionsLine2;
- (id)contentViewConstraints;
- (id)init;
- (id)locationLabel;
- (id)locationLabelVisualEffectView;
- (id)locationName;
- (id)masterConstraints;
- (double)pageBaselineOffset;
- (double)pageDegreeFontSize;
- (double)pageFontSize;
- (void)setConditionsImage:(id)arg1;
- (void)setConditionsImageView:(id)arg1;
- (void)setConditionsLabel1:(id)arg1;
- (void)setConditionsLabel1VisualEffectView:(id)arg1;
- (void)setConditionsLabel2:(id)arg1;
- (void)setConditionsLabel2VisualEffectView:(id)arg1;
- (void)setConditionsLine1:(id)arg1;
- (void)setConditionsLine2:(id)arg1;
- (void)setContentViewConstraints:(id)arg1;
- (void)setLocationLabel:(id)arg1;
- (void)setLocationLabelVisualEffectView:(id)arg1;
- (void)setLocationName:(id)arg1;
- (void)setMasterConstraints:(id)arg1;
- (void)setPageBaselineOffset:(double)arg1;
- (void)setPageDegreeFontSize:(double)arg1;
- (void)setPageFontSize:(double)arg1;
- (void)setTemperature:(id)arg1;
- (void)setTemperatureHigh:(id)arg1;
- (void)setTemperatureHighLowLabel:(id)arg1;
- (void)setTemperatureHighLowLabelVisualEffectView:(id)arg1;
- (void)setTemperatureLabel:(id)arg1;
- (void)setTemperatureLabelVisualEffectView:(id)arg1;
- (void)setTemperatureLow:(id)arg1;
- (id)temperature;
- (id)temperatureHigh;
- (id)temperatureHighLowLabel;
- (id)temperatureHighLowLabelVisualEffectView;
- (id)temperatureLabel;
- (id)temperatureLabelVisualEffectView;
- (id)temperatureLow;
- (void)traitCollectionDidChange:(id)arg1;

@end
