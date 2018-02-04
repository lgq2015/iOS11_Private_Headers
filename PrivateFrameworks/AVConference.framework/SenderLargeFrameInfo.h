/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface SenderLargeFrameInfo : NSObject {
    bool  isLargeFrameRequestDisabled;
    bool  isLastFrameProbingSequence;
    unsigned int  largeFrameSizeAtCurrentBandwidth;
    unsigned int  largeFrameSizeRequested;
    double  lastProbingSequenceTimeActual;
    double  lastProbingSequenceTimeExpect;
    double  probingInterval;
    int  probingSequenceCount;
    unsigned int  probingSequencePacketCount;
    unsigned int  probingSequencePacketSize;
    double  startTime;
    int  totalLargeFrameWaste;
}

@property (nonatomic) bool isLargeFrameRequestDisabled;
@property (nonatomic) bool isLastFrameProbingSequence;
@property (nonatomic) unsigned int largeFrameSizeAtCurrentBandwidth;
@property (nonatomic) unsigned int largeFrameSizeRequested;
@property (nonatomic) double lastProbingSequenceTimeActual;
@property (nonatomic) double lastProbingSequenceTimeExpect;
@property (nonatomic) int probingSequenceCount;
@property (nonatomic) unsigned int probingSequencePacketCount;
@property (nonatomic) unsigned int probingSequencePacketSize;
@property (nonatomic) double startTime;
@property (nonatomic) int totalLargeFrameWaste;

- (bool)isLargeFrameRequestDisabled;
- (bool)isLastFrameProbingSequence;
- (unsigned int)largeFrameSizeAtCurrentBandwidth;
- (unsigned int)largeFrameSizeRequested;
- (double)lastProbingSequenceTimeActual;
- (double)lastProbingSequenceTimeExpect;
- (int)probingSequenceCount;
- (unsigned int)probingSequencePacketCount;
- (unsigned int)probingSequencePacketSize;
- (void)setIsLargeFrameRequestDisabled:(bool)arg1;
- (void)setIsLastFrameProbingSequence:(bool)arg1;
- (void)setLargeFrameSizeAtCurrentBandwidth:(unsigned int)arg1;
- (void)setLargeFrameSizeRequested:(unsigned int)arg1;
- (void)setLastProbingSequenceTimeActual:(double)arg1;
- (void)setLastProbingSequenceTimeExpect:(double)arg1;
- (void)setProbingSequenceCount:(int)arg1;
- (void)setProbingSequencePacketCount:(unsigned int)arg1;
- (void)setProbingSequencePacketSize:(unsigned int)arg1;
- (void)setStartTime:(double)arg1;
- (void)setTotalLargeFrameWaste:(int)arg1;
- (double)startTime;
- (int)totalLargeFrameWaste;

@end
