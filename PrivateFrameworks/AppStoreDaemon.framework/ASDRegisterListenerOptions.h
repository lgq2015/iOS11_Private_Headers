/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

@interface ASDRegisterListenerOptions : NSObject <NSSecureCoding> {
    NSString * _clientID;
    NSXPCConnection * _endpoint;
}

@property (nonatomic, copy) NSString *clientID;
@property (nonatomic, retain) NSXPCConnection *endpoint;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)clientID;
- (void)encodeWithCoder:(id)arg1;
- (id)endpoint;
- (id)initWithCoder:(id)arg1;
- (void)setClientID:(id)arg1;
- (void)setEndpoint:(id)arg1;

@end
