/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCMomentsManagerStreamTokenClientList : NSObject {
    NSMutableArray * _clientContextList;
    <VCMomentsMessenger> * _messenger;
    long long  _streamToken;
}

@property (nonatomic, readonly) NSArray *clientContextList;
@property (nonatomic, readonly) <VCMomentsMessenger> *messenger;

+ (bool)isValidContext:(id)arg1;
+ (long long)streamTokenFromClientContext:(id)arg1;

- (id)clientContextList;
- (void)dealloc;
- (id)initWithStreamToken:(long long)arg1 messenger:(id)arg2;
- (id)messenger;
- (id)newContext;
- (void)removeContext:(id)arg1;

@end
