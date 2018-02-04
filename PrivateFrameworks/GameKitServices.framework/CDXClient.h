/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface CDXClient : NSObject {
    struct addrinfo { int x1; int x2; int x3; int x4; unsigned int x5; char *x6; struct sockaddr {} *x7; struct addrinfo {} *x8; } * cdxMappedIPv4Addr;
    struct sockaddr_in { 
        unsigned char sin_len; 
        unsigned char sin_family; 
        unsigned short sin_port; 
        struct in_addr { 
            unsigned int s_addr; 
        } sin_addr; 
        BOOL sin_zero[8]; 
    }  cdxaddr_ipv4;
    <CDXClientDelegate> * delegate_;
    NSError * error_;
    int  fd_;
    long long  holePunchAttemptCount_;
    double  holePunchInterval_;
    unsigned long long  holePunchSID_;
    NSObject<OS_dispatch_source> * holePunchTimer_;
    unsigned short  localPort_;
    void * padding_;
    unsigned short  port_;
    id /* block */  preblobCallback_;
    bool  preblobIsUpToDate_;
    NSData * preblob_;
    unsigned long long  prevHolePunchSID_;
    NSObject<OS_dispatch_queue> * queue_;
    long long  restartCount_;
    struct __CFRunLoopSource { } * scDynamicStoreRunLoopSource_;
    struct __SCDynamicStore { } * scDynamicStore_;
    NSString * server_;
    NSMutableDictionary * sessionLookup_;
    NSObject<OS_dispatch_source> * source_;
    bool  willReconfigureShortly_;
}

@property (nonatomic) <CDXClientDelegate> *delegate;
@property (nonatomic, readonly) NSError *error;
@property (readonly) NSData *preblob;
@property (nonatomic, copy) id /* block */ preblobCallback;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedClient;

- (id)createSessionWithTicket:(id)arg1 sessionKey:(id)arg2;
- (const struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)currentSockAddr;
- (unsigned char)currentSockAddrLen;
- (void)dealloc;
- (id)delegate;
- (id)error;
- (void)handleFDEvent;
- (bool)handleHolePunchEvent;
- (id)initWithOptions:(id)arg1 delegate:(id)arg2;
- (void)invalidate;
- (void)invalidateSession:(id)arg1;
- (void)mapIPv4AddrToIPv6:(struct sockaddr_in { unsigned char x1; unsigned char x2; unsigned short x3; struct in_addr { unsigned int x_4_1_1; } x4; BOOL x5[8]; }*)arg1;
- (void)networkDidChange;
- (id)preblob;
- (id /* block */)preblobCallback;
- (id)queue;
- (void)resetHolepunchTimer;
- (void)restart;
- (void)sendHolePunch;
- (bool)sendRaw:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setError:(id)arg1;
- (void)setPreblob:(id)arg1;
- (void)setPreblobCallback:(id /* block */)arg1;
- (void)start;
- (void)startListeningOnSockets;
- (void)stopHolePunchTimer;
- (void)stopListeningOnSockets;

@end
