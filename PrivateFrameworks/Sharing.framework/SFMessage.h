/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFMessage : NSObject <NSSecureCoding> {
    NSData * _bodyData;
    id /* block */  _completionHandler;
    struct NSSet { Class x1; } * _deviceIDs;
    bool  _expectsResponse;
    NSDictionary * _headerFields;
    NSUUID * _identifier;
    SFDevice * _peerDevice;
    SFSession * _session;
}

@property (nonatomic, copy) NSData *bodyData;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, copy) NSSet *deviceIDs;
@property (nonatomic) bool expectsResponse;
@property (nonatomic, copy) NSDictionary *headerFields;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, retain) SFDevice *peerDevice;
@property (nonatomic, retain) SFSession *session;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bodyData;
- (id /* block */)completionHandler;
- (id)description;
- (struct NSSet { Class x1; }*)deviceIDs;
- (void)encodeWithCoder:(id)arg1;
- (bool)expectsResponse;
- (id)headerFields;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (void)invalidate;
- (id)peerDevice;
- (id)session;
- (void)setBodyData:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDeviceIDs:(struct NSSet { Class x1; }*)arg1;
- (void)setExpectsResponse:(bool)arg1;
- (void)setHeaderFields:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPeerDevice:(id)arg1;
- (void)setSession:(id)arg1;

@end
