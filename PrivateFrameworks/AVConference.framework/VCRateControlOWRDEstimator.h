/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCRateControlOWRDEstimator : NSObject {
    double  _firstReceiveTime;
    unsigned int  _firstReceiveTimestamp;
    double  _firstSendTime;
    unsigned int  _firstSendTimestamp;
    double  _longAverageLag;
    double  _owrd;
    unsigned int  _previousReceiveTimestamp;
    unsigned int  _previousReceiveTimestampDiff;
    unsigned int  _previousSendTimestamp;
    unsigned int  _previousSendTimestampDiff;
    int  _receiveTimestampWrappedAround;
    int  _sendTimestampWrappedAround;
    double  _shortAverageLag;
}

@property (nonatomic, readonly) double owrd;

- (void)calculateOWRDWithSendTime:(double)arg1 receiveTime:(double)arg2;
- (double)owrd;
- (double)relativeReceiveTimeWithTimestamp:(unsigned short)arg1 timestampRate:(unsigned short)arg2;
- (double)relativeSendTimeWithTimestamp:(unsigned int)arg1 timestampRate:(unsigned int)arg2;

@end
