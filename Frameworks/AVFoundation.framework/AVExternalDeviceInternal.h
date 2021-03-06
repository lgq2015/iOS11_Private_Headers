/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVExternalDeviceInternal : NSObject {
    NSArray * _HIDs;
    NSData * _MFiCertSerial;
    <AVExternalDeviceDelegate> * _delegate;
    struct OpaqueFigEndpoint { } * _figEndpoint;
    long long  _makeHIDsOnlyOnce;
    long long  _makeIconsOnlyOnce;
    NSArray * _oemIcons;
    NSObject<OS_dispatch_queue> * _queue;
    NSArray * _screenInfo;
    AVWeakReference * _weakReference;
}

@end
