/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface _MPServerDelayedInvocation : NSObject {
    struct { unsigned int x1[8]; } * _clientAuditToken;
    int  _clientPID;
    id  _context;
    NSInvocation * _invocation;
}

@property (nonatomic) struct { unsigned int x1[8]; }*clientAuditToken;
@property (nonatomic) int clientPID;
@property (nonatomic, retain) id context;
@property (nonatomic, retain) NSInvocation *invocation;

- (struct { unsigned int x1[8]; }*)clientAuditToken;
- (int)clientPID;
- (id)context;
- (void)dealloc;
- (id)invocation;
- (void)setClientAuditToken:(struct { unsigned int x1[8]; }*)arg1;
- (void)setClientPID:(int)arg1;
- (void)setContext:(id)arg1;
- (void)setInvocation:(id)arg1;

@end
