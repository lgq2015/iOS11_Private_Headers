/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMMachineReadableCodeLoggingController : NSObject {
    bool  __seenMachineReadableObjectInNonActiveState;
    bool  __seenMachineReadableObjectOfAcceptableSize;
    bool  __seenMachineReadableObjectOfUnacceptableSize;
}

@property (setter=_setSeenMachineReadableObjectInNonActiveState:, nonatomic) bool _seenMachineReadableObjectInNonActiveState;
@property (setter=_setSeenMachineReadableObjectOfAcceptableSize:, nonatomic) bool _seenMachineReadableObjectOfAcceptableSize;
@property (setter=_setSeenMachineReadableObjectOfUnacceptableSize:, nonatomic) bool _seenMachineReadableObjectOfUnacceptableSize;

- (bool)_seenMachineReadableObjectInNonActiveState;
- (bool)_seenMachineReadableObjectOfAcceptableSize;
- (bool)_seenMachineReadableObjectOfUnacceptableSize;
- (void)_setSeenMachineReadableObjectInNonActiveState:(bool)arg1;
- (void)_setSeenMachineReadableObjectOfAcceptableSize:(bool)arg1;
- (void)_setSeenMachineReadableObjectOfUnacceptableSize:(bool)arg1;
- (id)init;
- (void)logMachineReadableCodeResult:(id)arg1 isOfSignificantSize:(bool)arg2;
- (void)logMachineReadableCodeResultDuringInactiveAppState;
- (void)resetLoggingState;

@end
