/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDKeyedRemoteArchiver : HMFObject {
    NSKeyedArchiver * _archiver;
    NSString * _transportType;
}

@property (nonatomic, retain) NSKeyedArchiver *archiver;
@property (nonatomic, retain) NSString *transportType;

- (void).cxx_destruct;
- (void)__configure;
- (id)archiver;
- (void)dealloc;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (void)finishEncoding;
- (id)initForWritingWithMutableData:(id)arg1 remoteDeviceIsOnSameAccount:(bool)arg2 remoteGateway:(bool)arg3 remoteUserIsAdministrator:(bool)arg4 user:(id)arg5 supportedFeatures:(id)arg6;
- (void)setArchiver:(id)arg1;
- (void)setTransportType:(id)arg1;
- (id)transportType;

@end