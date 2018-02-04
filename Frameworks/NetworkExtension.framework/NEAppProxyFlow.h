/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEAppProxyFlow : NSObject {
    struct _NEFlow { } * _flow;
    NEFlowMetaData * _metaData;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (retain) NSData *applicationData;
@property struct _NEFlow { }*flow;
@property (readonly) NEFlowMetaData *metaData;
@property (retain) NSObject<OS_dispatch_queue> *queue;

+ (struct __CFError { }*)copyVPNFlowErrorFromFlowError:(id)arg1;
+ (id)flowErrorForVPNFlowError:(long long)arg1;

- (void).cxx_destruct;
- (id)applicationData;
- (void)clearEventHandlers;
- (void)closeReadWithError:(id)arg1;
- (void)closeWriteWithError:(id)arg1;
- (void)dealloc;
- (struct _NEFlow { }*)flow;
- (unsigned long long)hash;
- (id)initWithNEFlow:(struct _NEFlow { }*)arg1 queue:(id)arg2;
- (id)metaData;
- (void)openWithLocalEndpoint:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)queue;
- (void)setApplicationData:(id)arg1;
- (void)setFlow:(struct _NEFlow { }*)arg1;
- (void)setQueue:(id)arg1;

@end
