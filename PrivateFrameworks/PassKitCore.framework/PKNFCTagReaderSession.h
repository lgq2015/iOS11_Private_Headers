/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKNFCTagReaderSession : PKPaymentSession <NFReaderSessionDelegate> {
    <PKNFCTagReaderSessionDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKNFCTagReaderSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (void)endSession;
- (id)initWithInternalSession:(id)arg1 targetQueue:(id)arg2;
- (void)readerSession:(id)arg1 didDetectTags:(id)arg2;
- (void)readerSessionDidEndUnexpectedly:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)startPolling;
- (void)stopPolling;

@end
