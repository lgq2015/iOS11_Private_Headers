/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCCaptionsManagerStreamTokenClientList : NSObject {
    <VCCaptionsSource> * _captionsSource;
    NSMutableArray * _clientContextList;
    long long  _streamToken;
}

@property (nonatomic, readonly) <VCCaptionsSource> *captionsSource;
@property (nonatomic, readonly) NSArray *clientContextList;

+ (bool)isValidContext:(id)arg1;
+ (long long)streamTokenFromClientContext:(id)arg1;

- (id)captionsSource;
- (id)clientContextList;
- (void)dealloc;
- (id)initWithStreamToken:(long long)arg1 captionsSource:(id)arg2;
- (id)newContext;
- (void)removeContext:(id)arg1;

@end
