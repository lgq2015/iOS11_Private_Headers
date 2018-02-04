/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXSwitch : NSObject <NSSecureCoding> {
    long long  _action;
    long long  _buttonNumber;
    long long  _headSwitch;
    unsigned short  _keyCode;
    long long  _longPressAction;
    NSString * _manufacturerName;
    AXMIDIEvent * _midiEvent;
    NSString * _name;
    NSString * _productName;
    NSString * _remoteDeviceIdentifier;
    NSString * _remoteDeviceName;
    NSString * _remoteSwitchIdentifier;
    struct NSString { Class x1; } * _source;
    struct NSString { Class x1; } * _type;
    NSUUID * _uuid;
}

@property (nonatomic) long long action;
@property (nonatomic) long long buttonNumber;
@property (nonatomic, readonly) bool hasLongPressAction;
@property (nonatomic) long long headSwitch;
@property (nonatomic) unsigned short keyCode;
@property (nonatomic, readonly) NSString *localizedSourceDescription;
@property (nonatomic) long long longPressAction;
@property (nonatomic, copy) NSString *manufacturerName;
@property (nonatomic, retain) AXMIDIEvent *midiEvent;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *productName;
@property (nonatomic, copy) NSString *remoteDeviceIdentifier;
@property (nonatomic, copy) NSString *remoteDeviceName;
@property (nonatomic, copy) NSString *remoteSwitchIdentifier;
@property (nonatomic, retain) NSString *source;
@property (nonatomic, readonly) bool supportsLongPress;
@property (nonatomic, retain) NSString *type;
@property (nonatomic, retain) NSUUID *uuid;

+ (bool)supportsSecureCoding;
+ (id)switchWithAction:(long long)arg1 name:(id)arg2 source:(struct NSString { Class x1; }*)arg3 type:(struct NSString { Class x1; }*)arg4;

- (void).cxx_destruct;
- (long long)action;
- (long long)buttonNumber;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasLongPressAction;
- (unsigned long long)hash;
- (long long)headSwitch;
- (id)initWithAction:(long long)arg1 name:(id)arg2 source:(struct NSString { Class x1; }*)arg3 type:(struct NSString { Class x1; }*)arg4;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned short)keyCode;
- (id)localizedSourceDescription;
- (long long)longPressAction;
- (id)manufacturerName;
- (id)midiEvent;
- (id)name;
- (id)productName;
- (id)remoteDeviceIdentifier;
- (id)remoteDeviceName;
- (id)remoteSwitchIdentifier;
- (void)setAction:(long long)arg1;
- (void)setButtonNumber:(long long)arg1;
- (void)setHeadSwitch:(long long)arg1;
- (void)setKeyCode:(unsigned short)arg1;
- (void)setLongPressAction:(long long)arg1;
- (void)setManufacturerName:(id)arg1;
- (void)setMidiEvent:(id)arg1;
- (void)setName:(id)arg1;
- (void)setProductName:(id)arg1;
- (void)setRemoteDeviceIdentifier:(id)arg1;
- (void)setRemoteDeviceName:(id)arg1;
- (void)setRemoteSwitchIdentifier:(id)arg1;
- (void)setSource:(struct NSString { Class x1; }*)arg1;
- (void)setType:(struct NSString { Class x1; }*)arg1;
- (void)setUuid:(id)arg1;
- (struct NSString { Class x1; }*)source;
- (bool)supportsLongPress;
- (struct NSString { Class x1; }*)type;
- (id)uuid;

@end
