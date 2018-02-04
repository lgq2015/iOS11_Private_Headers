/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@interface ChartIntervalButtonRow : UIView {
    <ChartIntervalButtonRowDelegate> * _delegate;
    NSArray * _intervalButtons;
    long long  _maxChartInterval;
    ChartIntervalButton * _selectedButton;
}

@property (nonatomic) <ChartIntervalButtonRowDelegate> *delegate;
@property (nonatomic, retain) NSArray *intervalButtons;
@property (nonatomic) long long maxChartInterval;
@property (nonatomic) ChartIntervalButton *selectedButton;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithMaxChartInterval:(long long)arg1 chartIntervalButtonRowDelegate:(id)arg2;
- (id)intervalButtons;
- (void)intervalButtonsTapped:(id)arg1;
- (long long)intervalForTouchLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)layoutSubviews;
- (long long)maxChartInterval;
- (void)selectChartIntervalButtonForInterval:(long long)arg1;
- (id)selectedButton;
- (void)setDelegate:(id)arg1;
- (void)setIntervalButtons:(id)arg1;
- (void)setMaxChartInterval:(long long)arg1;
- (void)setSelectedButton:(id)arg1;
- (void)sizeToBoldLabels;
- (void)updateMaxChartInterval:(long long)arg1;

@end
