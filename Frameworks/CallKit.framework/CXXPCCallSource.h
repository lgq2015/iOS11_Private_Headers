/* made by EzioChiu
   Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

@interface CXXPCCallSource : CXCallSource {
    NSString * _applicationIdentifier;
    NSBundle * _bundle;
    NSSet * _capabilities;
    NSXPCConnection * _connection;
    bool  _hasVoIPBackgroundMode;
}

@property (nonatomic, copy) NSString *applicationIdentifier;
@property (nonatomic, retain) NSBundle *bundle;
@property (nonatomic, copy) NSSet *capabilities;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic) bool hasVoIPBackgroundMode;

- (void).cxx_destruct;
- (id)applicationIdentifier;
- (id)bundle;
- (id)capabilities;
- (id)connection;
- (void)dealloc;
- (id)displayName;
- (bool)hasVoIPBackgroundMode;
- (id)identifier;
- (id)init;
- (id)initWithConnection:(id)arg1;
- (bool)isConnected;
- (bool)isPermittedToUsePrivateAPI;
- (bool)isPermittedToUsePublicAPI;
- (int)processIdentifier;
- (void)setApplicationIdentifier:(id)arg1;
- (void)setBundle:(id)arg1;
- (void)setCapabilities:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setHasVoIPBackgroundMode:(bool)arg1;
- (id)vendorProtocolDelegate;

@end
