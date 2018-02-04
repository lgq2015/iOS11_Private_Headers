/* made by EzioChiu.
 */

@protocol AVCPacketRelayConnectionProtocol

@required

- (bool)isDemuxNeeded;
- (AVCPacketFilter *)packetFilter;
- (id /* block */)readHandler:(void *)arg1; // needs 1 arg types, found 8: id /* block */, void*, unsigned int, bool, NSError *, void*, id, SEL
- (void)readyToRead;
- (bool)sendData:(const void*)arg1 size:(unsigned int)arg2 error:(id*)arg3;
- (void)setIsDemuxNeeded:(bool)arg1;
- (void)setPacketFilter:(AVCPacketFilter *)arg1;
- (void)setReadHandler:(void *)arg1; // needs 1 arg types, found 9: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, unsigned int, bool, NSError *, void*
- (int)start;
- (int)stop;
- (unsigned char)type;

@end
