/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKNebulaSecondaryState : NSObject <NSCoding> {
    long long  _failedStateReadAttemptsCount;
    NSDate * _lastMovieWriteAttemptTime;
    long long  _movieWriteAttemptsCount;
    long long  _stopReasons;
    NSDate * _stopTime;
}

@property (nonatomic) long long failedStateReadAttemptsCount;
@property (nonatomic, readonly) NSDate *lastMovieWriteAttemptTime;
@property (nonatomic, readonly) long long movieWriteAttemptsCount;
@property (nonatomic) long long stopReasons;
@property (nonatomic, retain) NSDate *stopTime;

+ (id)secondaryStateWithContentsOfFile:(id)arg1;

- (void).cxx_destruct;
- (bool)addStopReasons:(long long)arg1 stopTime:(id)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)failedStateReadAttemptsCount;
- (id)initWithCoder:(id)arg1;
- (id)lastMovieWriteAttemptTime;
- (long long)movieWriteAttemptsCount;
- (void)notifyWillAttemptToWriteMovie;
- (void)setFailedStateReadAttemptsCount:(long long)arg1;
- (void)setStopReasons:(long long)arg1;
- (void)setStopTime:(id)arg1;
- (long long)stopReasons;
- (id)stopTime;
- (bool)writeToFile:(id)arg1;

@end
