/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMTimelapseState : NSObject <NSCoding, NSCopying> {
    bool  _allFramesWritten;
    long long  _captureDevice;
    int  _captureOrientation;
    double  _captureTimeInterval;
    float  _focusLensPosition;
    long long  _frameIndexStride;
    NSDate * _lastFrameResponseTime;
    long long  _nextFrameIndex;
    struct CGSize { 
        double width; 
        double height; 
    }  _nominalIntermediateFrameSize;
    bool  _preferHEVC;
    unsigned short  _sessionIdentifier;
    CLLocation * _startLocation;
    NSDate * _startTime;
    long long  _stopReasons;
    NSDate * _stopTime;
    NSString * _timelapseUUID;
}

@property (nonatomic) bool allFramesWritten;
@property (nonatomic) long long captureDevice;
@property (nonatomic) int captureOrientation;
@property (nonatomic, readonly) double captureTimeInterval;
@property (nonatomic, readonly) long long connectionMode;
@property (nonatomic) float focusLensPosition;
@property (nonatomic, readonly) long long frameIndexStride;
@property (nonatomic, retain) NSDate *lastFrameResponseTime;
@property (nonatomic, readonly) long long nextFrameIndex;
@property (nonatomic) struct CGSize { double x1; double x2; } nominalIntermediateFrameSize;
@property (nonatomic) bool preferHEVC;
@property (nonatomic) unsigned short sessionIdentifier;
@property (nonatomic, retain) CLLocation *startLocation;
@property (nonatomic, retain) NSDate *startTime;
@property (nonatomic) long long stopReasons;
@property (nonatomic, retain) NSDate *stopTime;
@property (nonatomic, retain) NSString *timelapseUUID;

+ (double)maxTimeToWaitForWrittenFrameAfterStop;
+ (id)stateWithContentsOfFile:(id)arg1;

- (void).cxx_destruct;
- (bool)_commonCAMTimelapseStateInitWithCoder:(id)arg1;
- (bool)addStopReasons:(long long)arg1 stopTime:(id)arg2;
- (bool)allFramesWritten;
- (bool)canContinueCapture;
- (long long)captureDevice;
- (int)captureOrientation;
- (double)captureTimeInterval;
- (long long)connectionMode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)filePathForNextFrameIndex;
- (float)focusLensPosition;
- (void)forceCompleted;
- (long long)frameIndexStride;
- (id)fullDescription;
- (bool)incrementFrameIndex;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToState:(id)arg1;
- (bool)isReadyForWritingMovie;
- (id)lastFrameResponseTime;
- (bool)mergeSecondaryState:(id)arg1;
- (long long)nextFrameIndex;
- (struct CGSize { double x1; double x2; })nominalIntermediateFrameSize;
- (bool)preferHEVC;
- (unsigned short)sessionIdentifier;
- (void)setAllFramesWritten:(bool)arg1;
- (void)setCaptureDevice:(long long)arg1;
- (void)setCaptureOrientation:(int)arg1;
- (void)setFocusLensPosition:(float)arg1;
- (void)setLastFrameResponseTime:(id)arg1;
- (void)setNominalIntermediateFrameSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPreferHEVC:(bool)arg1;
- (void)setSessionIdentifier:(unsigned short)arg1;
- (void)setStartLocation:(id)arg1;
- (void)setStartTime:(id)arg1;
- (void)setStopReasons:(long long)arg1;
- (void)setStopTime:(id)arg1;
- (void)setTimelapseUUID:(id)arg1;
- (id)startLocation;
- (id)startTime;
- (long long)stopReasons;
- (id)stopTime;
- (id)timelapseUUID;
- (bool)writeToFile:(id)arg1 createDirectoryIfNeeded:(bool)arg2;

@end
