/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKDisplayTypeContextItem : NSObject {
    NSAttributedString * _attributedValue;
    NSString * _dateString;
    long long  _heartType;
    bool  _infoHidden;
    HKUIMetricColors * _metricColors;
    HKUIMetricColors * _selectedMetricColors;
    NSString * _title;
    NSString * _unit;
    NSString * _value;
}

@property (nonatomic, copy) NSAttributedString *attributedValue;
@property (nonatomic, copy) NSString *dateString;
@property (nonatomic) long long heartType;
@property (nonatomic) bool infoHidden;
@property (nonatomic, retain) HKUIMetricColors *metricColors;
@property (nonatomic, retain) HKUIMetricColors *selectedMetricColors;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *unit;
@property (nonatomic, copy) NSString *value;

- (void).cxx_destruct;
- (id)attributedValue;
- (id)dateString;
- (long long)heartType;
- (bool)infoHidden;
- (bool)isEqual:(id)arg1;
- (id)metricColors;
- (id)selectedMetricColors;
- (void)setAttributedValue:(id)arg1;
- (void)setDateString:(id)arg1;
- (void)setHeartType:(long long)arg1;
- (void)setInfoHidden:(bool)arg1;
- (void)setMetricColors:(id)arg1;
- (void)setSelectedMetricColors:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUnit:(id)arg1;
- (void)setValue:(id)arg1;
- (id)title;
- (id)unit;
- (id)value;

@end
