/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXSwitchRegistrar : NSObject {
    AXSwitch * _aSwitch;
    bool  _addLongPressSwitch;
    <AXSwitchRegistrarDelegate> * _delegate;
    struct __IOHIDDevice { } * _device;
    struct __IOHIDEventSystemClient { } * _eventSystemClient;
    struct __IOHIDManager { } * _manager;
    AXMIDIManager * _midiManager;
}

@property (nonatomic, retain) AXSwitch *aSwitch;
@property (nonatomic) bool addLongPressSwitch;
@property (nonatomic) <AXSwitchRegistrarDelegate> *delegate;
@property (nonatomic, retain) struct __IOHIDDevice { }*device;
@property (nonatomic, retain) struct __IOHIDEventSystemClient { }*eventSystemClient;
@property (nonatomic, retain) struct __IOHIDManager { }*manager;
@property (nonatomic, retain) AXMIDIManager *midiManager;

- (void).cxx_destruct;
- (id)_atvRemoteMatching;
- (void)_filterEvents:(bool)arg1;
- (void)_handleATVRemoteButtonDownEvent:(struct __IOHIDEvent { }*)arg1;
- (void)_handleApplicationDidBecomeActive:(id)arg1;
- (void)_handleApplicationWillResignActive:(id)arg1;
- (void)_handleKeyboardKeyDownEvent:(struct __IOHIDEvent { }*)arg1;
- (void)_handleMFIButtonDownValue:(struct __IOHIDValue { }*)arg1;
- (void)_handleMIDIEvent:(id)arg1 device:(id)arg2 entity:(id)arg3 source:(id)arg4;
- (bool)_isATVRemoteButtonSwitchWithUsage:(long long)arg1 longPress:(bool)arg2;
- (bool)_isKeyboardSwitchWithKeyCode:(unsigned short)arg1 longPress:(bool)arg2;
- (bool)_isMFISwitchWithButtonNumber:(unsigned int)arg1 longPress:(bool)arg2;
- (bool)_isMIDISwitchWithMidiEvent:(id)arg1;
- (bool)_isSwitchWithSource:(struct NSString { Class x1; }*)arg1 keyCode:(unsigned short)arg2 buttonNumber:(unsigned int)arg3 ATVRemoteButtonUsage:(long long)arg4 midiEvent:(id)arg5;
- (id)_keyboardMatching;
- (id)_mfiMatching;
- (id)aSwitch;
- (bool)addLongPressSwitch;
- (void)beginFilteringEvents;
- (void)dealloc;
- (id)delegate;
- (struct __IOHIDDevice { }*)device;
- (void)endFilteringEvents;
- (struct __IOHIDEventSystemClient { }*)eventSystemClient;
- (id)firstAvailableName;
- (id)init;
- (bool)isSwitchWithName:(id)arg1;
- (struct __IOHIDManager { }*)manager;
- (id)midiManager;
- (void)setASwitch:(id)arg1;
- (void)setAddLongPressSwitch:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDevice:(struct __IOHIDDevice { }*)arg1;
- (void)setEventSystemClient:(struct __IOHIDEventSystemClient { }*)arg1;
- (void)setManager:(struct __IOHIDManager { }*)arg1;
- (void)setMidiManager:(id)arg1;

@end
