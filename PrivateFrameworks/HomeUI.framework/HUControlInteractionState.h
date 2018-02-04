/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUControlInteractionState : NSObject {
    unsigned long long  _inFlightWriteCount;
    bool  _userInteractionActive;
    NAValueThrottler * _writeThrottler;
    bool  _writesInProgressOrPossible;
}

@property (nonatomic) unsigned long long inFlightWriteCount;
@property (getter=isUserInteractionActive, nonatomic) bool userInteractionActive;
@property (nonatomic, retain) NAValueThrottler *writeThrottler;
@property (getter=areWritesInProgressOrPossible, nonatomic) bool writesInProgressOrPossible;

- (void).cxx_destruct;
- (bool)areWritesInProgressOrPossible;
- (unsigned long long)inFlightWriteCount;
- (bool)isUserInteractionActive;
- (void)setInFlightWriteCount:(unsigned long long)arg1;
- (void)setUserInteractionActive:(bool)arg1;
- (void)setWriteThrottler:(id)arg1;
- (void)setWritesInProgressOrPossible:(bool)arg1;
- (id)writeThrottler;

@end
