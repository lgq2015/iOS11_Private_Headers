/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXIPCMessage : NSObject <NSSecureCoding> {
    struct { 
        unsigned int val[8]; 
    }  _auditToken;
    unsigned int  _clientPort;
    int  _key;
    NSDictionary * _payload;
}

@property (nonatomic) struct { unsigned int x1[8]; } auditToken;
@property (nonatomic) unsigned int clientPort;
@property (nonatomic) int key;
@property (nonatomic, copy) NSDictionary *payload;
@property (nonatomic, readonly, copy) NSString *senderBundleId;

+ (id)archivedMessageFromData:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct { unsigned int x1[8]; })auditToken;
- (unsigned int)clientPort;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(int)arg1;
- (id)initWithKey:(int)arg1 payload:(id)arg2;
- (id)initWithKey:(int)arg1 payload:(id)arg2 keyDebugInfo:(id)arg3;
- (int)key;
- (id)payload;
- (id)senderBundleId;
- (void)setAuditToken:(struct { unsigned int x1[8]; })arg1;
- (void)setClientPort:(unsigned int)arg1;
- (void)setKey:(int)arg1;
- (void)setPayload:(id)arg1;

@end
