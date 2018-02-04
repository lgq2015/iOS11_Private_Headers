/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MREmulatedGameController : NSObject {
    double  _buttonAUpDelay;
    GCController * _controller;
    <MREmulatedGameControllerDelegate> * _delegate;
    int  _profile;
    MRGameControllerDaemonProxy * _remote;
}

@property (nonatomic) double buttonAUpDelay;
@property (nonatomic, retain) GCController *controller;
@property (nonatomic) <MREmulatedGameControllerDelegate> *delegate;
@property (nonatomic, readonly) int profile;

- (void)_handleGameControllerDidChange:(id)arg1;
- (double)buttonAUpDelay;
- (id)controller;
- (void)dealloc;
- (id)delegate;
- (id)initWithProperties:(void*)arg1;
- (int)profile;
- (void)sendGameControllerEvent:(void*)arg1;
- (void)setButtonAUpDelay:(double)arg1;
- (void)setController:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
