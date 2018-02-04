/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSSavedModeTableView : UITableView <PTSHUDControl> {
    int  _alignment;
    _UISettings * _settings;
    NSString * _valueKeyPath;
}

@property (nonatomic) int alignment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) _UISettings *settings;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *valueKeyPath;

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })defaultFrame;

- (void).cxx_destruct;
- (int)alignment;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEnabled;
- (void)setAlignment:(int)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setSettings:(id)arg1;
- (void)setValueKeyPath:(id)arg1;
- (id)settings;
- (id)valueKeyPath;

@end
