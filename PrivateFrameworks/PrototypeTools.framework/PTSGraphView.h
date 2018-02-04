/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSGraphView : PT2DGraphView <PTSHUDControl, _UISettingsKeyPathObserver> {
    int  _alignment;
    _UISettings * _settings;
    _UISettingsGroup * _settingsGroup;
    NSString * _valueKeyPath;
    NSString * _xAxisValueKeyPath;
    NSString * _yAxisValueKeyPath;
}

@property (nonatomic) int alignment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) _UISettings *settings;
@property (nonatomic) _UISettingsGroup *settingsGroup;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *valueKeyPath;
@property (nonatomic, copy) NSString *xAxisValueKeyPath;
@property (nonatomic, copy) NSString *yAxisValueKeyPath;

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })defaultFrame;
+ (id)graphView;

- (void).cxx_destruct;
- (int)alignment;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEnabled;
- (void)setAlignment:(int)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setSettings:(id)arg1;
- (void)setSettings:(id)arg1 valueKeyPath:(id)arg2;
- (void)setSettingsGroup:(id)arg1;
- (void)setValueKeyPath:(id)arg1;
- (void)setXAxisValueKeyPath:(id)arg1;
- (void)setYAxisValueKeyPath:(id)arg1;
- (id)settings;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (id)settingsGroup;
- (void)updateGraphData;
- (id)valueKeyPath;
- (id)xAxisValueKeyPath;
- (id)yAxisValueKeyPath;

@end
