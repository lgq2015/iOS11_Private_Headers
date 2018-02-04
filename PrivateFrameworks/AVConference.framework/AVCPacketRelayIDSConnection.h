/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface AVCPacketRelayIDSConnection : NSObject <AVCPacketRelayConnectionProtocol> {
    IDSDatagramChannel * _datagramChannel;
    bool  _isDemuxNeeded;
    bool  _isResumed;
    AVCPacketFilter * _packetFilter;
    IDSService * _packetRelayService;
    id /* block */  _readHandler;
    unsigned char  _type;
}

@property bool isDemuxNeeded;
@property bool isResumed;
@property (retain) AVCPacketFilter *packetFilter;
@property (copy) id /* block */ readHandler;
@property (readonly) unsigned char type;

- (void)dealloc;
- (id)initWithIDSDestination:(id)arg1;
- (id)initWithIDSSocketDescriptor:(unsigned short)arg1;
- (bool)isDemuxNeeded;
- (bool)isResumed;
- (id)packetFilter;
- (id /* block */)readHandler;
- (void)readyToRead;
- (bool)sendData:(const void*)arg1 size:(unsigned int)arg2 error:(id*)arg3;
- (void)setIsDemuxNeeded:(bool)arg1;
- (void)setIsResumed:(bool)arg1;
- (void)setPacketFilter:(id)arg1;
- (void)setReadHandler:(id /* block */)arg1;
- (int)start;
- (int)stop;
- (unsigned char)type;

@end
