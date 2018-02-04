/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
 */

@interface WPStateTracker : WPClient {
    <WPStateTrackerProtocol> * _delegate;
}

@property (nonatomic) <WPStateTrackerProtocol> *delegate;

- (void).cxx_destruct;
- (id)clientAsString;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (void)invalidate;
- (void)setDelegate:(id)arg1;
- (void)stateDidChange:(long long)arg1;

@end
