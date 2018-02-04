/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface DTMFEventHandler : NSObject {
    unsigned int  currentDurationCounter;
    unsigned int  currentEndTimestamp;
    unsigned char  currentEvent;
    bool  currentEventInTransmission;
    bool  currentEventNeedsEndBlock;
    bool  currentIsMarker;
    unsigned int  currentStartTimestamp;
    unsigned char  currentVolume;
    NSMutableArray * dtmfEventQueue;
    NSObject<OS_dispatch_queue> * dtmfQueue;
}

- (int)constructDTMFEventPacketWithEvent:(unsigned char)arg1 volume:(unsigned char)arg2 durationCounter:(unsigned int)arg3 interval:(unsigned int)arg4 dataBuffer:(char *)arg5 isEnd:(bool)arg6;
- (void)dealloc;
- (id)init;
- (bool)insertStartBlockWithEvent:(unsigned char)arg1 volume:(unsigned char)arg2 timestamp:(unsigned int)arg3;
- (bool)insertStopBlockWithTimestamp:(unsigned int)arg1;
- (void)sendDTMFEvent:(id)arg1 atTimestamp:(unsigned int)arg2 withSampleRate:(unsigned int)arg3;
- (void)sendingDTMFEventWithTimeStamp:(unsigned int)arg1 interval:(unsigned int)arg2 RTPHandle:(struct tagHANDLE { int x1; }*)arg3;
- (bool)shouldTransmitDTMFWithTimestamp:(unsigned int)arg1;
- (void)stopDTMFEvent;

@end
