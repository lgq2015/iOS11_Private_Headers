/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXEventKeyInfoRepresentation : NSObject <AXEventRepresentationDescription, NSCopying, NSSecureCoding> {
    unsigned short  _alternativeKeyCode;
    unsigned short  _keyCode;
    bool  _keyDown;
    NSString * _modifiedInput;
    unsigned int  _modifierState;
    NSString * _shiftModifiedInput;
    NSString * _unmodifiedInput;
    unsigned int  _usagePage;
}

@property (nonatomic) unsigned short alternativeKeyCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned short keyCode;
@property (nonatomic) bool keyDown;
@property (nonatomic, retain) NSString *modifiedInput;
@property (nonatomic) unsigned int modifierState;
@property (nonatomic, retain) NSString *shiftModifiedInput;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *unmodifiedInput;
@property (nonatomic) unsigned int usagePage;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct __GSKeyboard { }*)_getUIKitKeyboardRef;
- (id)accessibilityEventRepresentationTabularDescription;
- (unsigned short)alternativeKeyCode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned short)keyCode;
- (bool)keyDown;
- (id)modifiedInput;
- (unsigned int)modifierState;
- (void)setAlternativeKeyCode:(unsigned short)arg1;
- (void)setKeyCode:(unsigned short)arg1;
- (void)setKeyDown:(bool)arg1;
- (void)setModifiedInput:(id)arg1;
- (void)setModifierState:(unsigned int)arg1;
- (void)setShiftModifiedInput:(id)arg1;
- (void)setUnmodifiedInput:(id)arg1;
- (void)setUsagePage:(unsigned int)arg1;
- (id)shiftModifiedInput;
- (void)translateKeycode;
- (void)translateStringToKeycode;
- (id)unmodifiedInput;
- (unsigned int)usagePage;

@end
