/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
 */

@interface WFHotspotDetailsView : UIStackView {
    unsigned long long  _batteryCharge;
    _UIBatteryView * _batteryView;
    NSString * _cellularProtocolString;
    UILabel * _networkTypeLabel;
    unsigned long long  _signalBars;
    UIImageView * _signalImageView;
}

@property (nonatomic) unsigned long long batteryCharge;
@property (nonatomic, retain) _UIBatteryView *batteryView;
@property (nonatomic, copy) NSString *cellularProtocolString;
@property (nonatomic, retain) UILabel *networkTypeLabel;
@property (nonatomic) unsigned long long signalBars;
@property (nonatomic, retain) UIImageView *signalImageView;

- (void).cxx_destruct;
- (id)attributedStringFromCellularProtocol:(id)arg1;
- (unsigned long long)batteryCharge;
- (id)batteryView;
- (id)cellularProtocolString;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)networkTypeLabel;
- (void)setBatteryCharge:(unsigned long long)arg1;
- (void)setBatteryView:(id)arg1;
- (void)setCellularProtocolString:(id)arg1;
- (void)setNetworkTypeLabel:(id)arg1;
- (void)setSignalBars:(unsigned long long)arg1;
- (void)setSignalImageView:(id)arg1;
- (void)setupSubviews;
- (unsigned long long)signalBars;
- (id)signalImageView;
- (void)updateCellularProtocolLabel;
- (void)updateSignalBars;

@end
