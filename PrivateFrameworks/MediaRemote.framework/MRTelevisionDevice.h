/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRTelevisionDevice : MRExternalDevice {
    unsigned int  _gameControllerInputMode;
    id /* block */  _gameControllerInputModeCallback;
    NSObject<OS_dispatch_queue> * _gameControllerInputModeCallbackQueue;
    id /* block */  _gameControllerPropertiesCallback;
    NSObject<OS_dispatch_queue> * _gameControllerPropertiesCallbackQueue;
    bool  _hiliteMode;
    id /* block */  _hiliteModeCallback;
    NSObject<OS_dispatch_queue> * _hiliteModeCallbackQueue;
    id /* block */  _recordingStateCallback;
    NSObject<OS_dispatch_queue> * _recordingStateCallbackQueue;
    NSObject<OS_dispatch_queue> * _serialQueue;
    id /* block */  _textInputCallback;
    NSObject<OS_dispatch_queue> * _textInputCallbackQueue;
}

@property (nonatomic) unsigned int gameControllerInputMode;
@property (nonatomic, copy) id /* block */ gameControllerInputModeCallback;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *gameControllerInputModeCallbackQueue;
@property (nonatomic, copy) id /* block */ gameControllerPropertiesCallback;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *gameControllerPropertiesCallbackQueue;
@property (nonatomic, readonly) bool hiliteMode;
@property (nonatomic, copy) id /* block */ hiliteModeCallback;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *hiliteModeCallbackQueue;
@property (nonatomic, copy) id /* block */ recordingStateCallback;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *recordingStateCallbackQueue;
@property (nonatomic, copy) id /* block */ textInputCallback;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *textInputCallbackQueue;

- (void)_callCientHiliteModeCallback;
- (void)_callClientGameControllerInputModeCallback;
- (void)_callClientGameControllerPropertiesCallback:(void*)arg1 controller:(unsigned long long)arg2;
- (void)_callClientRecordingStateCallback;
- (void)_callClientTextInputCallback:(id)arg1 type:(unsigned int)arg2;
- (void)_handleHiliteModeMessage:(id)arg1;
- (void)_handleKeyboardMessage:(id)arg1;
- (void)_sendTextInputMessageWithActionType:(unsigned long long)arg1 text:(id)arg2;
- (void)clearActiveTextEditingSessionData;
- (void)clientConnection:(id)arg1 didReceiveMessage:(id)arg2;
- (id)currentClientUpdatesConfigMessage;
- (void)dealloc;
- (void)deleteBackwardInActiveTextEditingSession;
- (void)exitHiliteMode;
- (unsigned int)gameControllerInputMode;
- (id /* block */)gameControllerInputModeCallback;
- (id)gameControllerInputModeCallbackQueue;
- (id /* block */)gameControllerPropertiesCallback;
- (id)gameControllerPropertiesCallbackQueue;
- (void)getTextEditingSessionWithReplyQueue:(id)arg1 completion:(id /* block */)arg2;
- (bool)hiliteMode;
- (id /* block */)hiliteModeCallback;
- (id)hiliteModeCallbackQueue;
- (id)initWithTransport:(id)arg1;
- (void)insertTextIntoActiveTextEditingSessionWithText:(id)arg1;
- (void)processVoiceInputAudioDataForDeviceID:(unsigned int)arg1 withBuffer:(id)arg2 time:(struct { double x1; double x2; })arg3 gain:(float)arg4;
- (id /* block */)recordingStateCallback;
- (id)recordingStateCallbackQueue;
- (void)registerGameControllerWithProperties:(void*)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (void)registerTouchDeviceWithDescriptor:(id)arg1 replyQueue:(id)arg2 completion:(id /* block */)arg3;
- (void)registerVoiceInputDeviceWithDescriptor:(id)arg1 replyQueue:(id)arg2 completion:(id /* block */)arg3;
- (void)sendButtonEvent:(struct _MRHIDButtonEvent { unsigned int x1; unsigned int x2; bool x3; })arg1;
- (void)sendGameControllerEvent:(void*)arg1 controllerID:(unsigned long long)arg2;
- (void)sendHIDEvent:(struct __IOHIDEvent { }*)arg1;
- (void)sendTouchEvent:(struct _MRHIDTouchEvent { union _MRHIDPoint { struct { float x_1_2_1; float x_1_2_2; } x_1_1_1; float x_1_1_2[2]; } x1; unsigned int x2; unsigned long long x3; unsigned int x4; })arg1 toVirtualDeviceWithID:(unsigned long long)arg2;
- (void)setGameControllerInputMode:(unsigned int)arg1;
- (void)setGameControllerInputModeCallback:(id /* block */)arg1;
- (void)setGameControllerInputModeCallback:(id /* block */)arg1 withQueue:(id)arg2;
- (void)setGameControllerInputModeCallbackQueue:(id)arg1;
- (void)setGameControllerPropertiesCallback:(id /* block */)arg1;
- (void)setGameControllerPropertiesCallback:(id /* block */)arg1 withQueue:(id)arg2;
- (void)setGameControllerPropertiesCallbackQueue:(id)arg1;
- (void)setHiliteMode:(bool)arg1;
- (void)setHiliteModeCallback:(id /* block */)arg1;
- (void)setHiliteModeCallback:(id /* block */)arg1 withQueue:(id)arg2;
- (void)setHiliteModeCallbackQueue:(id)arg1;
- (void)setRecordingStateCallback:(id /* block */)arg1;
- (void)setRecordingStateCallbackQueue:(id)arg1;
- (void)setTextEditingCallback:(id /* block */)arg1 withQueue:(id)arg2;
- (void)setTextInputCallback:(id /* block */)arg1;
- (void)setTextInputCallbackQueue:(id)arg1;
- (void)setTextOnActiveTextEditingSessionWithText:(id)arg1;
- (void)setVoiceRecordingState:(unsigned int)arg1;
- (void)setVoiceRecordingStateCallback:(id /* block */)arg1 withQueue:(id)arg2;
- (id /* block */)textInputCallback;
- (id)textInputCallbackQueue;
- (void)unregisterGameController:(unsigned long long)arg1;
- (void)wake;

@end
