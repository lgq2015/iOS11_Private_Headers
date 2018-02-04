/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSToggleButton : PTSButton <PTSHUDControl, _UISettingsKeyPathObserver> {
    NSString * _titleForOffState;
    NSString * _titleForOnState;
    id  _valueForOffState;
    id  _valueForOnState;
}

@property (nonatomic) int alignment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) _UISettings *settings;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *titleForOffState;
@property (nonatomic, copy) NSString *titleForOnState;
@property (nonatomic, copy) id valueForOffState;
@property (nonatomic, copy) id valueForOnState;
@property (nonatomic, copy) NSString *valueKeyPath;

+ (id)toggleButtonForSettings:(id)arg1 valueKeyPath:(id)arg2 titleForOnState:(id)arg3 titleForOffState:(id)arg4;

- (void).cxx_destruct;
- (void)dealloc;
- (void)pressed:(id)arg1;
- (void)setSettings:(id)arg1 valueKeyPath:(id)arg2;
- (void)setTitleForOffState:(id)arg1;
- (void)setTitleForOnState:(id)arg1;
- (void)setValueForOffState:(id)arg1;
- (void)setValueForOnState:(id)arg1;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (id)titleForOffState;
- (id)titleForOnState;
- (id)valueForOffState;
- (id)valueForOnState;

@end
