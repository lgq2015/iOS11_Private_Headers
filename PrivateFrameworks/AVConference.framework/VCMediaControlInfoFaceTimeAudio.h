/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCMediaControlInfoFaceTimeAudio : VCMediaControlInfo {
    double  _controlInfoArrivalTime;
    unsigned int  _controlInfoAudioPacketSize;
    unsigned int  _controlInfoAudioTimestamp;
    unsigned char  _controlInfoFeedback;
    unsigned char  _controlInfoMediaQueue;
    unsigned int  _controlInfoReceivedKbits;
    unsigned int  _controlInfoReceivedPackets;
    unsigned int  _controlInfoStats;
}

- (int)configureWithBuffer:(const char *)arg1 length:(unsigned long long)arg2 optionalControlInfo:(struct { double x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; }*)arg3;
- (int)getInfo:(void*)arg1 bufferLength:(unsigned long long)arg2 infoSize:(unsigned long long*)arg3 type:(unsigned int)arg4;
- (int)handleOptionalControlInfo:(struct { double x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; }*)arg1;
- (bool)hasInfoType:(unsigned int)arg1;
- (int)serializeToBuffer:(char *)arg1 bufferLength:(unsigned long long)arg2 blobLength:(unsigned long long*)arg3;
- (unsigned long long)serializedSize;
- (int)setInfo:(void*)arg1 size:(unsigned long long)arg2 type:(unsigned int)arg3;

@end
