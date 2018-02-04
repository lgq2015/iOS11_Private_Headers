/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKPMUButtonListener : NSObject {
    id /* block */  _buttonHandler;
    struct __IOHIDEventSystemClient { } * _hidSystemClient;
    NSObject<OS_dispatch_queue> * _hidSystemQueue;
}

@property (nonatomic, copy) id /* block */ buttonHandler;
@property (nonatomic) struct __IOHIDEventSystemClient { }*hidSystemClient;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *hidSystemQueue;

- (void).cxx_destruct;
- (void)_handleButtonEvent:(struct __IOHIDEvent { }*)arg1;
- (void)_initializeHIDClient;
- (id /* block */)buttonHandler;
- (void)dealloc;
- (struct __IOHIDEventSystemClient { }*)hidSystemClient;
- (id)hidSystemQueue;
- (id)initWithHandler:(id /* block */)arg1;
- (void)setButtonHandler:(id /* block */)arg1;
- (void)setHidSystemClient:(struct __IOHIDEventSystemClient { }*)arg1;
- (void)setHidSystemQueue:(id)arg1;

@end
