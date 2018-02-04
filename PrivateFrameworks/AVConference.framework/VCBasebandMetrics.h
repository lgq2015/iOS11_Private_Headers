/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCBasebandMetrics : NSObject {
    unsigned int  _averageBitrate;
    unsigned int  _averageBitrateLong;
    double  _bdcd;
    struct { 
        double time[15]; 
        double bdcd[15]; 
        double delay[15]; 
        int frontIndex; 
        int rearIndex; 
        unsigned int size; 
    }  _bdcdList;
    double  _expectedQueuingDelay;
    double  _expectedQueuingDelayLong;
    struct { 
        double time[15]; 
        unsigned int transmittedBytes[15]; 
        int frontIndex; 
        int rearIndex; 
        unsigned int size; 
    }  _infoList;
    bool  _isBDCDListReady;
    bool  _isTargetBitrateStabilized;
    struct { 
        int type; 
        unsigned short version; 
        double arrivalTime; 
        union { 
            struct { 
                unsigned short radioTechnology; 
                unsigned char transmissionAntenna; 
                unsigned short numberOfFlows; 
                unsigned char flowType; 
                BOOL transmissionPower; 
                unsigned int queueDepth1; 
                unsigned int queueDepth2; 
                unsigned int basebandTransmissionBytes; 
                unsigned int lastTransmissionTimestamp; 
            } report; 
            struct { 
                unsigned short transactionID; 
                unsigned short totalNumDropped; 
                unsigned short numberOfPayloadTypes; 
                struct { 
                    unsigned char payloadType; 
                    unsigned short numberOfPacketDropped; 
                    unsigned short awDroppedSN[500]; 
                } PTSpecific[6]; 
            } dropAck; 
        } notes; 
    }  _lastBasebandNotification;
    void * _logBasebandDump;
    double  _normalizedBDCD;
    double  _normalizedDelay;
    unsigned int  _previousAverageBitrate;
    bool  _resetAverageBitrateLong;
    unsigned int  _targetBitrate;
    unsigned int  _txBitrate;
}

@property (nonatomic) bool isTargetBitrateStabilized;
@property (nonatomic) unsigned int targetBitrate;

- (void)addBDCDListWithNotificationArrivalTime:(double)arg1 bdcd:(double)arg2 queuingDelay:(double)arg3;
- (void)addInfoListWithNotificationArrivalTime:(double)arg1 transmittedBytes:(unsigned int)arg2;
- (void)calculateBitratesAndDelays:(unsigned int)arg1 totalQueueDepth:(unsigned int)arg2;
- (void)enableBasebandLogDump:(void*)arg1;
- (struct { int x1; double x2; union { struct { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; double x_1_2_6; double x_1_2_7; double x_1_2_8; double x_1_2_9; BOOL x_1_2_10[64]; } x_3_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; unsigned int x_2_2_4; unsigned int x_2_2_5; unsigned int x_2_2_6; unsigned int x_2_2_7; } x_3_1_2; struct { unsigned int x_3_2_1; unsigned int x_3_2_2; unsigned int x_3_2_3; unsigned int x_3_2_4; } x_3_1_3; struct { bool x_4_2_1; unsigned int x_4_2_2; unsigned int x_4_2_3; double x_4_2_4; unsigned int x_4_2_5; } x_3_1_4; struct { unsigned int x_5_2_1; unsigned int x_5_2_2; unsigned int x_5_2_3; unsigned int x_5_2_4; double x_5_2_5; } x_3_1_5; struct { unsigned int x_6_2_1; unsigned int x_6_2_2; unsigned int x_6_2_3; double x_6_2_4; } x_3_1_6; struct { unsigned int x_7_2_1; unsigned int x_7_2_2; double x_7_2_3; } x_3_1_7; struct { unsigned int x_8_2_1; unsigned int x_8_2_2; double x_8_2_3; } x_3_1_8; struct { unsigned int x_9_2_1; unsigned int x_9_2_2; unsigned int x_9_2_3; unsigned int x_9_2_4; } x_3_1_9; } x3; })getBasebandMetricsWithNotification:(struct { int x1; unsigned short x2; double x3; union { struct { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned short x_1_2_3; unsigned char x_1_2_4; BOOL x_1_2_5; unsigned int x_1_2_6; unsigned int x_1_2_7; unsigned int x_1_2_8; unsigned int x_1_2_9; } x_4_1_1; struct { unsigned short x_2_2_1; unsigned short x_2_2_2; unsigned short x_2_2_3; struct { unsigned char x_4_3_1; unsigned short x_4_3_2; unsigned short x_4_3_3[500]; } x_2_2_4[6]; } x_4_1_2; } x4; }*)arg1;
- (bool)isTargetBitrateStabilized;
- (void)normalizeBDCD:(double)arg1;
- (void)resetBDCDList;
- (void)setIsTargetBitrateStabilized:(bool)arg1;
- (void)setTargetBitrate:(unsigned int)arg1;
- (unsigned int)targetBitrate;

@end
