/* made by EzioChiu
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@interface _GCControllerManager : NSObject <GameControllerClientProtocol> {
    NSXPCConnection * _connection;
    NSMutableDictionary * _controllersByRegistryID;
    NSMutableDictionary * _controllersByUDID;
    NSObject<OS_dispatch_queue> * _controllersQueue;
    long long  _currentMediaRemoteInputMode;
    NSThread * _hidInputThread;
    struct __CFRunLoop { } * _hidInputThreadRunLoop;
    struct __IOHIDManager { } * _hidManager;
    struct __IOHIDEventSystemClient { } * _hidSystemClient;
    NSObject<OS_dispatch_queue> * _hidSystemClientQueue;
    NSMutableArray * _hidThreadExecutionBlocks;
    struct __CFRunLoopSource { } * _hidThreadRunLoopSource;
    bool  _idleTimerNeedsReset;
    NSTimer * _idleWatchTimer;
    bool  _isAppInBackground;
    id /* block */  _logger;
    <GameControllerDaemon> * _remote;
    id /* block */  _requestConnectedHostsCallback;
    bool  _shouldKeepRunning;
    unsigned int  _usbAddedIterator;
    struct IONotificationPort { } * _usbNotify;
    unsigned int  _usbRemovedIterator;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic, readonly, retain) NSObject<OS_dispatch_queue> *controllersQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, retain) NSThread *hidInputThread;
@property (nonatomic, readonly) struct __CFRunLoop { }*hidInputThreadRunLoop;
@property (nonatomic) struct __IOHIDManager { }*hidManager;
@property (nonatomic, readonly) NSMutableArray *hidThreadExecutionBlocks;
@property (nonatomic, readonly) struct __CFRunLoopSource { }*hidThreadRunLoopSource;
@property (nonatomic) bool idleTimerNeedsReset;
@property (nonatomic, readonly) bool isAppInBackground;
@property (nonatomic, copy) id /* block */ logger;
@property (nonatomic, retain) <GameControllerDaemon> *remote;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)CBApplicationDidBecomeActive;
- (void)CBApplicationWillResignActive;
- (void)addConnectedDevices;
- (void)addController:(id)arg1;
- (void)addControllerWithServiceRef:(struct __IOHIDServiceClient { }*)arg1;
- (void)async_HIDBlock:(id /* block */)arg1;
- (id)connection;
- (void)controller:(id)arg1 setValue:(float)arg2 forElement:(int)arg3;
- (void)controllerWithUDID:(unsigned long long)arg1 setData:(id)arg2;
- (void)controllerWithUDID:(unsigned long long)arg1 setValue0:(float)arg2 setValue1:(float)arg3 setValue2:(float)arg4 setValue3:(float)arg5 forElement:(int)arg6;
- (void)controllerWithUDID:(unsigned long long)arg1 setValue:(float)arg2 forElement:(int)arg3;
- (id)controllers;
- (id)controllersQueue;
- (void)dealloc;
- (id)firstMicroGamepad;
- (id)hidInputThread;
- (struct __CFRunLoop { }*)hidInputThreadRunLoop;
- (struct __IOHIDManager { }*)hidManager;
- (id)hidThreadExecutionBlocks;
- (struct __CFRunLoopSource { }*)hidThreadRunLoopSource;
- (bool)idleTimerNeedsReset;
- (id)init;
- (bool)isAppInBackground;
- (bool)isExistingController:(id)arg1;
- (bool)isPhysicalB239:(id)arg1;
- (void)launchHIDInputThread;
- (id /* block */)logger;
- (void)microControllerWithDigitizerX:(float)arg1 withY:(float)arg2 withTimeStamp:(unsigned long long)arg3 touchDown:(bool)arg4;
- (void)microControllerWithUDID:(unsigned long long)arg1 setDigitizerX:(float)arg2 digitizerY:(float)arg3 withTimeStamp:(unsigned long long)arg4 touchDown:(bool)arg5;
- (void)open;
- (id)remote;
- (void)removeController:(id)arg1;
- (void)removeControllerWithServiceRef:(struct __IOHIDServiceClient { }*)arg1;
- (void)replyConnectedHosts:(id)arg1;
- (void)requestConnectedHostsWithHandler:(id /* block */)arg1;
- (void)setConnection:(id)arg1;
- (void)setHidManager:(struct __IOHIDManager { }*)arg1;
- (void)setIdleTimerNeedsReset:(bool)arg1;
- (void)setLogger:(id /* block */)arg1;
- (void)setRemote:(id)arg1;
- (void)startHIDDeviceMonitor;
- (void)startHIDEventMonitor;
- (void)startIdleWatchTimer;
- (void)stopHIDDeviceMonitor;
- (void)stopHIDEventMonitor;
- (void)threadHIDInputOffMain:(id)arg1;
- (void)threadHIDInputOnMain:(id)arg1;
- (void)updateControllerWithEvent:(struct __IOHIDEvent { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned int x5; char *x6; void *x7; void *x8; struct __CFArray {} *x9; struct __IOHIDEvent {} *x10; long long x11; long long x12; struct IOHIDEventData { unsigned int x_13_1_1; unsigned int x_13_1_2; unsigned int x_13_1_3; unsigned char x_13_1_4; unsigned char x_13_1_5[3]; } x13[0]; }*)arg1;
- (void)updateIdleTimer:(id)arg1;

@end
