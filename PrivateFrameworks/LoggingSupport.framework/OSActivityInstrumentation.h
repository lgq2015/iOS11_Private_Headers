/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

@interface OSActivityInstrumentation : NSObject {
    NSMutableData * _capturedData;
    NSObject<OS_xpc_object> * _daemon_conn;
    <OSActivityInstrumentationDelegate> * _delegate;
    unsigned long long  _eventFilter;
    unsigned long long  _mode;
    unsigned long long  _options;
    NSObject<OS_xpc_object> * _pidList;
    bool  _receivedHeader;
    unsigned long long  _state;
    NSObject<OS_xpc_object> * _stream;
    long long  _timeWindow;
}

@property (nonatomic, readonly) NSMutableData *capturedData;
@property (nonatomic) <OSActivityInstrumentationDelegate> *delegate;
@property (nonatomic) unsigned long long eventFilter;
@property (nonatomic) unsigned long long options;

+ (bool)blessProcess:(int)arg1 processID:(unsigned long long)arg2;
+ (void)evaluateBuffer:(id)arg1 usingPredicate:(id)arg2 withBlock:(id /* block */)arg3;

- (void).cxx_destruct;
- (bool)addProcess:(int)arg1 withProcessID:(unsigned long long)arg2;
- (id)capturedData;
- (id)createMessage;
- (id)delegate;
- (void)endCapture;
- (unsigned long long)eventFilter;
- (id)init;
- (id)initDeferredMode;
- (id)initImmediateMode:(long long)arg1;
- (id)initWindowedMode:(long long)arg1;
- (unsigned long long)options;
- (void)setDelegate:(id)arg1;
- (void)setEventFilter:(unsigned long long)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)startCapture;

@end
