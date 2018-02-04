/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSWRMMetricContainer : NSObject {
    unsigned long long  _MessageDeliveredDeliveryError;
    unsigned long long  _MessageDeliveredRTT;
    unsigned long long  _MessageDeliveredSize;
    unsigned long long  _MessageReceivedSize;
    unsigned long long  _MessageSentSize;
    unsigned long long  _StreamBytesReceived;
    unsigned long long  _StreamBytesSent;
    unsigned long long  _StreamPacketsReceived;
    unsigned long long  _StreamPacketsSent;
    unsigned long long  _numMessageDeliveredRTT;
    unsigned long long  _numMessageDeliveredSize;
    unsigned long long  _numMessageReceivedSize;
    unsigned long long  _numMessageSentSize;
}

@property (nonatomic) unsigned long long MessageDeliveredDeliveryError;
@property (nonatomic) unsigned long long MessageDeliveredRTT;
@property (nonatomic) unsigned long long MessageDeliveredSize;
@property (nonatomic) unsigned long long MessageReceivedSize;
@property (nonatomic) unsigned long long MessageSentSize;
@property (nonatomic) unsigned long long StreamBytesReceived;
@property (nonatomic) unsigned long long StreamBytesSent;
@property (nonatomic) unsigned long long StreamPacketsReceived;
@property (nonatomic) unsigned long long StreamPacketsSent;
@property (nonatomic, readonly) unsigned long long numMessageDeliveredRTT;
@property (nonatomic, readonly) unsigned long long numMessageDeliveredSize;
@property (nonatomic, readonly) unsigned long long numMessageReceivedSize;
@property (nonatomic, readonly) unsigned long long numMessageSentSize;

- (unsigned long long)MessageDeliveredDeliveryError;
- (unsigned long long)MessageDeliveredRTT;
- (unsigned long long)MessageDeliveredSize;
- (unsigned long long)MessageReceivedSize;
- (unsigned long long)MessageSentSize;
- (unsigned long long)StreamBytesReceived;
- (unsigned long long)StreamBytesSent;
- (unsigned long long)StreamPacketsReceived;
- (unsigned long long)StreamPacketsSent;
- (id)description;
- (id)init;
- (unsigned long long)numMessageDeliveredRTT;
- (unsigned long long)numMessageDeliveredSize;
- (unsigned long long)numMessageReceivedSize;
- (unsigned long long)numMessageSentSize;
- (void)resetMetric;
- (void)setMessageDeliveredDeliveryError:(unsigned long long)arg1;
- (void)setMessageDeliveredRTT:(unsigned long long)arg1;
- (void)setMessageDeliveredSize:(unsigned long long)arg1;
- (void)setMessageReceivedSize:(unsigned long long)arg1;
- (void)setMessageSentSize:(unsigned long long)arg1;
- (void)setStreamBytesReceived:(unsigned long long)arg1;
- (void)setStreamBytesSent:(unsigned long long)arg1;
- (void)setStreamPacketsReceived:(unsigned long long)arg1;
- (void)setStreamPacketsSent:(unsigned long long)arg1;

@end
