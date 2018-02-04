/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
 */

@interface AirPlayReceiverPlatform : NSObject {
    AirPlayControllerServer * _controllerServer;
    int  _lockDownActivationStateToken;
    int  _managedDefaultsChangedNotificationToken;
    int  _playbackAllowNotifyToken;
    int  _playbackPreventNotifyToken;
    unsigned char  _playbackPrevented;
    int  _prefChangedNotifyToken;
    struct AirPlayReceiverServerPrivate { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; void *x2; id x3; struct OpaqueAPAdvertiser {} x4; unsigned char x5; unsigned char x6; struct HTTPServerPrivate {} *x7; id x8; struct HTTPServerPrivate {} x9; unsigned char x10[16]; float x11; unsigned char x12; int x13; unsigned char x14; unsigned char x15; struct OpaqueAPReceiverSystemInfo {} *x16; unsigned char x17; unsigned char x18; struct __CFDictionary {} *x19; struct __CFDictionary {} *x20; struct MediaControlServerPrivate {} *x21; struct __CFDictionary {} *x22; unsigned int x23; int x24; unsigned int x25; struct APReceiverSessionManagerOpaque {} *x26; struct OpaqueFigValeria {} *x27; unsigned char x28; unsigned char x29; unsigned char x30; unsigned char x31; unsigned char x32; unsigned char x33; } * _server;
    int  _systemBufferSamples;
    int  _systemSampleRate;
    struct AirPlayReceiverUIPrivate { } * _ui;
    int  _uiErrorNotifyToken;
    int  _uiNotifyTokens;
    unsigned char  _voiceForSiri;
    unsigned char  _voiceForTelephony;
    float  _volumeLinear;
}

- (void)_avSystemControllerVolumeChanged:(id)arg1;
- (void)_handleAVAudioSessionServicesReset:(id)arg1;
- (void)_setupVolumeNotificationHandlers;

@end
