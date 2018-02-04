/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKNumberPadKeyButton : PKNumericBorderButton {
    unsigned long long  _value;
}

@property (nonatomic, readonly) unsigned long long value;

- (id)init;
- (id)initWithValue:(unsigned long long)arg1;
- (unsigned long long)value;

@end
