/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXIPCServerClientRegistration : NSObject {
    <AXIPCServerClientRegistrationDelegate> * _delegate;
    NSString * _identifier;
    NSObject<OS_dispatch_source> * _invalidationSource;
    unsigned int  _port;
}

@property (nonatomic) <AXIPCServerClientRegistrationDelegate> *delegate;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_source> *invalidationSource;
@property (nonatomic, readonly) unsigned int port;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithPort:(unsigned int)arg1 identifier:(id)arg2;
- (id)invalidationSource;
- (bool)isEqual:(id)arg1;
- (unsigned int)port;
- (void)setDelegate:(id)arg1;

@end
