/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFAirDropBrowser : NSObject {
    struct __SFBrowser { } * _browser;
    <SFAirDropBrowserDelegate> * _delegate;
    NSMutableDictionary * _nodes;
    NSArray * _people;
    NSString * _sessionID;
}

@property <SFAirDropBrowserDelegate> *delegate;
@property (nonatomic, readonly) NSArray *people;
@property (nonatomic, copy) NSString *sessionID;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (void)handleBrowserCallBack;
- (id)init;
- (id)people;
- (id)sessionID;
- (void)setDelegate:(id)arg1;
- (void)setSessionID:(id)arg1;
- (void)start;
- (void)stop;
- (void)updateDiscoveredPeople;

@end
