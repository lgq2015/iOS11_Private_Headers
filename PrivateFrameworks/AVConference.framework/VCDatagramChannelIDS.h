/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCDatagramChannelIDS : NSObject {
    NSString * _destination;
    int  _driverSocket;
    IDSDatagramChannel * _idsChannel;
    unsigned int  _token;
}

@property (readonly) NSArray *connectedLinks;
@property (readonly) IDSDataChannelLinkContext *defaultLink;
@property (readonly) NSString *destination;
@property (readonly) unsigned int token;

- (id)connectedLinks;
- (void)dealloc;
- (id)defaultLink;
- (id)destination;
- (id)initWithDestination:(id)arg1 token:(unsigned int)arg2 error:(id*)arg3;
- (id)initWithSocketDescriptor:(int)arg1 token:(unsigned int)arg2 error:(id*)arg3;
- (void)invalidate;
- (void)optInStreamIDs:(id)arg1;
- (void)optOutStreamIDs:(id)arg1;
- (void)readyToRead;
- (void)setChannelPreferences:(id)arg1;
- (void)setEventHandler:(id /* block */)arg1;
- (void)setReadHandler:(id /* block */)arg1;
- (int)setupDriverSocket;
- (id)sharedIDSService;
- (int)start;
- (unsigned int)token;
- (void)writeDatagram:(const void*)arg1 datagramSize:(unsigned int)arg2 flags:(struct { BOOL x1; unsigned short x2; unsigned short x3; unsigned char x4; })arg3 completionHandler:(id /* block */)arg4;

@end
