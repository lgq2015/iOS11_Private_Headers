/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TITypologyRecordHitTest : TITypologyRecord {
    long long  _keyCode;
    TIKeyboardLayout * _keyLayout;
    TIKeyboardState * _keyboardState;
    TIKeyboardTouchEvent * _touchEvent;
}

@property (nonatomic) long long keyCode;
@property (nonatomic, retain) TIKeyboardLayout *keyLayout;
@property (nonatomic, retain) TIKeyboardState *keyboardState;
@property (nonatomic, retain) TIKeyboardTouchEvent *touchEvent;

- (void)applyToStatistic:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)keyCode;
- (id)keyLayout;
- (id)keyboardState;
- (void)setKeyCode:(long long)arg1;
- (void)setKeyLayout:(id)arg1;
- (void)setKeyboardState:(id)arg1;
- (void)setTouchEvent:(id)arg1;
- (id)shortDescription;
- (id)touchEvent;

@end
