/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPRequest : NSObject <MPRequestCancellationToken, NSCopying> {
    NSOperationQueue * _calloutQueue;
    NSError * _cancelationError;
    NSBlockOperation * _completionOperation;
    NSString * _label;
    NSArray * _middlewareClasses;
    long long  _qualityOfService;
    NSOperationQueue * _queue;
    double  _timeoutInterval;
}

@property (nonatomic, readonly) NSOperationQueue *calloutQueue;
@property (nonatomic, readonly) NSError *cancelationError;
@property (nonatomic, readonly) NSBlockOperation *completionOperation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSArray *middlewareClasses;
@property (nonatomic) long long qualityOfService;
@property (nonatomic, readonly) NSOperationQueue *queue;
@property (readonly) Class superclass;
@property (nonatomic) double timeoutInterval;

+ (double)expectedMaximumResponseTimeInterval;
+ (Class)responseClass;

- (void).cxx_destruct;
- (void)_performWithCompletion:(id /* block */)arg1;
- (id)calloutQueue;
- (void)cancel;
- (id)cancelationError;
- (id)completionOperation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)label;
- (id)middlewareClasses;
- (id)performWithCompletion:(id /* block */)arg1;
- (void)prepareForResponseWithCompletion:(id /* block */)arg1;
- (long long)qualityOfService;
- (id)queue;
- (void)setLabel:(id)arg1;
- (void)setMiddlewareClasses:(id)arg1;
- (void)setQualityOfService:(long long)arg1;
- (void)setTimeoutInterval:(double)arg1;
- (double)timeoutInterval;

@end
