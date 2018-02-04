/* made by EzioChiu
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADNSURLSessionDemultiplexerManager : NSObject {
    NSObject<OS_dispatch_queue> * _demuxManagerQueue;
    NSArray * _protocolClasses;
    NSURLSessionConfiguration * _sessionConfiguration;
    NSMutableDictionary * _sessionDemultiplexerForIdentifier;
}

@property (nonatomic) NSObject<OS_dispatch_queue> *demuxManagerQueue;
@property (copy) NSArray *protocolClasses;
@property (nonatomic, retain) NSURLSessionConfiguration *sessionConfiguration;
@property (retain) NSMutableDictionary *sessionDemultiplexerForIdentifier;

+ (id)sharedManager;

- (void)dealloc;
- (id)demuxManagerQueue;
- (id)init;
- (long long)pretapRequestCountForIdentifier:(id)arg1;
- (id)protocolClasses;
- (id)sessionConfiguration;
- (id)sessionDemultiplexerForAdByIdentifier:(id)arg1 maximumRequestCount:(long long)arg2;
- (id)sessionDemultiplexerForIdentifier;
- (void)setDemuxManagerQueue:(id)arg1;
- (void)setProtocolClasses:(id)arg1;
- (void)setSessionConfiguration:(id)arg1;
- (void)setSessionDemultiplexerForIdentifier:(id)arg1;
- (void)unregisterSessionDemultiplexerWithIdentifier:(id)arg1;

@end
