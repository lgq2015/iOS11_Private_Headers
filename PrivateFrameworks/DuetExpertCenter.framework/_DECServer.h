/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

@interface _DECServer : NSObject <_DECServer> {
    unsigned long long  _categories;
    NSXPCConnection * _connection;
    struct NSString { Class x1; } * _identifier;
    <_DECFilter> * _predictionFilter;
    NSObject<OS_dispatch_queue> * _queue;
    _DECServerResponder * _responder;
    _DECPredictionCache * _resultCache;
    long long  _type;
}

@property (nonatomic, readonly) unsigned long long categories;
@property (nonatomic, readonly) NSXPCConnection *connection;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, retain) <_DECFilter> *predictionFilter;
@property (nonatomic, readonly) long long type;

+ (id)_defaultRestorationDirectory;
+ (id)serverWithConnection:(id)arg1 responder:(id)arg2;

- (void).cxx_destruct;
- (void)_filterPrediction:(id)arg1 forConsumer:(unsigned long long)arg2;
- (id)_restorationPath;
- (unsigned long long)categories;
- (id)connection;
- (void)decDeviceIdWithReply:(id /* block */)arg1;
- (struct NSString { Class x1; }*)identifier;
- (id)initWithConnection:(id)arg1 responder:(id)arg2;
- (void)invalidate;
- (id)predictionFilter;
- (void)predictionForCategories:(unsigned long long)arg1 consumer:(unsigned long long)arg2 criteria:(id)arg3 limit:(unsigned long long)arg4 backgroundQuery:(bool)arg5 completionHandler:(id /* block */)arg6;
- (void)predictionForCategories:(unsigned long long)arg1 consumer:(unsigned long long)arg2 criteria:(id)arg3 limit:(unsigned long long)arg4 providesFeedback:(bool)arg5 reply:(id /* block */)arg6;
- (void)predictionForCategories:(unsigned long long)arg1 consumer:(unsigned long long)arg2 limit:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (void)predictionForCategories:(unsigned long long)arg1 consumer:(unsigned long long)arg2 limit:(unsigned long long)arg3 providesFeedback:(bool)arg4 reply:(id /* block */)arg5;
- (void)prewarmPredictionForCategories:(unsigned long long)arg1 consumer:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)registerClient:(long long)arg1 category:(unsigned long long)arg2 identifier:(struct NSString { Class x1; }*)arg3 reply:(id /* block */)arg4;
- (void)setPrediction:(id)arg1 category:(unsigned long long)arg2 consumer:(unsigned long long)arg3 reply:(id /* block */)arg4;
- (void)setPredictionFilter:(id)arg1;
- (long long)type;
- (void)userAbandoned:(id)arg1 result:(id)arg2 metadata:(id)arg3 reply:(id /* block */)arg4;
- (void)userEngaged:(id)arg1 result:(id)arg2 metadata:(id)arg3 reply:(id /* block */)arg4;

@end
