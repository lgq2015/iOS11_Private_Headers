/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
 */

@interface MSPauseManager : NSObject {
    NSMutableDictionary * _UUIDToTimerMap;
    <MSPauseManagerDelegate> * _delegate;
}

@property (nonatomic) <MSPauseManagerDelegate> *delegate;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_addPauseUUID:(id)arg1;
- (void)_removeTimerUUID:(id)arg1;
- (void)_timerDidFire:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (bool)isPaused;
- (void)pingPauseUUID:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)unpauseUUID:(id)arg1;

@end
