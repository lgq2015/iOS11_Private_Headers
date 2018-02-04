/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface AVCPacketFilterRTP : AVCPacketFilter {
    unsigned int  _SSRC;
    unsigned char  _type;
}

- (id)initWithIncomingSSRC:(unsigned int)arg1 acceptPacketType:(unsigned char)arg2;
- (bool)isMatchedPacket:(const void*)arg1 size:(int)arg2;
- (bool)isPayloadTypeMatched:(bool)arg1;
- (bool)isRTCPPayload:(unsigned short)arg1;

@end
