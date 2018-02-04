/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXMIDIEvent : NSObject <NSCopying, NSSecureCoding> {
    unsigned short  _channel;
    unsigned char  _control;
    unsigned char  _controlValue;
    unsigned char  _note;
    unsigned short  _pitchBend;
    unsigned char  _pressure;
    unsigned char  _program;
    long long  _type;
}

@property (nonatomic) unsigned short channel;
@property (nonatomic) unsigned char control;
@property (nonatomic) unsigned char controlValue;
@property (getter=isDownEvent, nonatomic, readonly) bool downEvent;
@property (nonatomic) unsigned char note;
@property (nonatomic, readonly) unsigned char noteOctave;
@property (nonatomic, readonly) long long noteValue;
@property (getter=isOmniChannel, nonatomic, readonly) bool omniChannel;
@property (nonatomic, readonly) long long ordinalChannel;
@property (nonatomic) unsigned short pitchBend;
@property (nonatomic) unsigned char pressure;
@property (nonatomic) unsigned char program;
@property (nonatomic) long long type;

+ (bool)supportsSecureCoding;

- (unsigned short)channel;
- (unsigned char)control;
- (unsigned char)controlValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isDownEvent;
- (bool)isOmniChannel;
- (unsigned char)note;
- (id)noteDescription;
- (unsigned char)noteOctave;
- (long long)noteValue;
- (long long)ordinalChannel;
- (unsigned short)pitchBend;
- (unsigned char)pressure;
- (unsigned char)program;
- (void)setChannel:(unsigned short)arg1;
- (void)setControl:(unsigned char)arg1;
- (void)setControlValue:(unsigned char)arg1;
- (void)setNote:(unsigned char)arg1;
- (void)setPitchBend:(unsigned short)arg1;
- (void)setPressure:(unsigned char)arg1;
- (void)setProgram:(unsigned char)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
