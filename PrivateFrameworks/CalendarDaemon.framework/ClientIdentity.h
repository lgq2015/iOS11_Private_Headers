/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@interface ClientIdentity : NSObject {
    struct { 
        unsigned int val[8]; 
    }  _auditToken;
    NSString * _bundleIdentifier;
    NSString * _clientName;
    NSString * _codeSigningIdentity;
    int  _pid;
}

@property (nonatomic, readonly) struct { unsigned int x1[8]; } auditToken;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly, copy) NSString *clientName;
@property (nonatomic, readonly, copy) NSString *codeSigningIdentity;
@property (nonatomic, readonly) int pid;

- (void).cxx_destruct;
- (struct { unsigned int x1[8]; })auditToken;
- (id)bundleIdentifier;
- (id)clientName;
- (id)codeSigningIdentity;
- (id)description;
- (id)initWithAuditToken:(struct { unsigned int x1[8]; })arg1;
- (int)pid;

@end
