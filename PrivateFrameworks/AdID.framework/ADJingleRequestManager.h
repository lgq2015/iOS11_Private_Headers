/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AdID.framework/AdID
 */

@interface ADJingleRequestManager : ADSingleton {
    bool  _jingleRequestInProgress;
    NSMutableDictionary * _pendingJingleRequests;
}

@property bool jingleRequestInProgress;
@property (nonatomic, retain) NSMutableDictionary *pendingJingleRequests;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)authenticateUser:(id /* block */)arg1;
- (bool)canMakeJingleRequest;
- (id)init;
- (void)jingleRequestCompleted:(id)arg1;
- (bool)jingleRequestInProgress;
- (id)makeOptOutRequest:(id)arg1 status:(bool)arg2 timestamp:(double)arg3 withCompletion:(id /* block */)arg4;
- (id)makeSegmentRequest:(id)arg1 forceSegments:(bool)arg2 withCompletion:(id /* block */)arg3;
- (id)pendingJingleRequests;
- (void)setJingleRequestInProgress:(bool)arg1;
- (void)setPendingJingleRequests:(id)arg1;
- (void)startJingleRequest:(id)arg1;

@end
