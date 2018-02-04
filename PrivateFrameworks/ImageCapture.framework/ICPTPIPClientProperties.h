/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface ICPTPIPClientProperties : NSObject {
    struct __CFFileDescriptor { } * _fdref;
    int  _pid;
    bool  _registered;
    int  _remoteAddress;
    struct __CFMessagePort { } * _remotePort;
    int  _serverFD;
}

@property struct __CFFileDescriptor { }*fdref;
@property int pid;
@property (getter=didRegister) bool registered;
@property int remoteAddress;
@property struct __CFMessagePort { }*remotePort;
@property int serverFD;

- (void)dealloc;
- (bool)didRegister;
- (struct __CFFileDescriptor { }*)fdref;
- (void)finalize;
- (int)pid;
- (int)remoteAddress;
- (struct __CFMessagePort { }*)remotePort;
- (int)serverFD;
- (void)setFdref:(struct __CFFileDescriptor { }*)arg1;
- (void)setPid:(int)arg1;
- (void)setRegistered:(bool)arg1;
- (void)setRemoteAddress:(int)arg1;
- (void)setRemotePort:(struct __CFMessagePort { }*)arg1;
- (void)setServerFD:(int)arg1;

@end
