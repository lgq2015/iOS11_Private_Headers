/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface AVCRateControlFeedbackController : NSObject {
    unsigned int  _feedbackMessageCount;
    unsigned int  _mode;
    AVCStatisticsCollector * _statisticsCollector;
}

@property (nonatomic) unsigned int mode;
@property (nonatomic, retain) AVCStatisticsCollector *statisticsCollector;

- (void)dealloc;
- (bool)getFeedbackMessage:(id*)arg1 type:(unsigned int)arg2 metaData:(id*)arg3 error:(id*)arg4;
- (id)getRateControlDataWithStatistics:(id)arg1;
- (bool)getRateControlFeedbackMessage:(id*)arg1 type:(unsigned int)arg2 metaData:(id*)arg3 error:(id*)arg4;
- (unsigned int)mode;
- (bool)processFeedbackMessage:(id)arg1 type:(unsigned int)arg2 metaData:(id)arg3 error:(id*)arg4;
- (bool)processRateControlFeedbackMessage:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; })arg1 type:(unsigned int)arg2 error:(id*)arg3;
- (bool)processRateControlProbingMessage:(struct { bool x1; unsigned int x2; unsigned int x3; double x4; unsigned int x5; })arg1 type:(unsigned int)arg2 error:(id*)arg3;
- (void)setMode:(unsigned int)arg1;
- (void)setStatisticsCollector:(id)arg1;
- (id)statisticsCollector;
- (struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; })translateAFRCFeedbackMessage:(struct tagAFRCFB { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })arg1;
- (bool)translateMediaControlInfo:(void*)arg1 feedbackMessage:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; }*)arg2;
- (struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; })translateRateControlFeedbackMessageFromData:(id)arg1;

@end
