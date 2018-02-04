/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

@interface ATStatusObserver : NSObject <ATStatusObserverProtocol> {
    bool  _ATCRunning;
    NSXPCConnection * _connection;
    <ATStatusObserverDelegate> * _delegate;
    int  _notifyToken;
    bool  _resumed;
}

@property (nonatomic) bool ATCRunning;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ATStatusObserverDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int notifyToken;
@property (nonatomic) bool resumed;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)ATCRunning;
- (id)connection;
- (id)delegate;
- (void)fetchAllStatusWithCompletion:(id /* block */)arg1;
- (id)init;
- (int)notifyToken;
- (void)resume;
- (bool)resumed;
- (void)setATCRunning:(bool)arg1;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNotifyToken:(int)arg1;
- (void)setResumed:(bool)arg1;
- (void)suspend;
- (void)updateWithStatus:(id)arg1;

@end
