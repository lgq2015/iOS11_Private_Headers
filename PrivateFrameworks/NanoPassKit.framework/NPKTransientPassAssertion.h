/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKTransientPassAssertion : NSObject {
    bool  _requestServiceMode;
    NSString * _uniqueID;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic) bool requestServiceMode;
@property (nonatomic, retain) NSString *uniqueID;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (id)_remoteObjectProxy;
- (void)_resyncState;
- (id)initWithPassWithUniqueID:(id)arg1;
- (void)invalidate;
- (bool)requestServiceMode;
- (void)setRequestServiceMode:(bool)arg1;
- (void)setUniqueID:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (id)uniqueID;
- (id)xpcConnection;

@end
