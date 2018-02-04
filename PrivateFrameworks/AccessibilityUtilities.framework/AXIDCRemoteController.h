/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXIDCRemoteController : NSObject <NSNetServiceDelegate, NSStreamDelegate> {
    AXIDCMessage * _currentMessageInFlight;
    AXIDCPacket * _currentPacket;
    <AXIDCRemoteControllerDelegate> * _delegate;
    NSMutableData * _inputBuffer;
    NSInputStream * _inputStream;
    NSMutableData * _outputBuffer;
    NSMutableArray * _outputDataQueue;
    NSOutputStream * _outputStream;
    NSNetService * _service;
}

@property (nonatomic, retain) AXIDCMessage *currentMessageInFlight;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AXIDCRemoteControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableData *inputBuffer;
@property (nonatomic, retain) NSInputStream *inputStream;
@property (nonatomic, retain) NSMutableData *outputBuffer;
@property (nonatomic, retain) NSMutableArray *outputDataQueue;
@property (nonatomic, retain) NSOutputStream *outputStream;
@property (nonatomic, retain) NSNetService *service;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)acceptConnection:(int)arg1;
- (void)clearMessageQueue;
- (void)closeConnectionWithError:(id)arg1;
- (id)currentMessageInFlight;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)didCommunicate;
- (void)enqueueData:(id)arg1;
- (void)finishedSending:(id)arg1;
- (id)init;
- (id)initWithService:(id)arg1;
- (id)inputBuffer;
- (id)inputStream;
- (bool)isConnected;
- (bool)isConnecting;
- (bool)isSlave;
- (void)messageWasAcked:(id)arg1;
- (id)name;
- (id)nextMessageInQueue;
- (void)openConnectionIfNecessary;
- (id)outputBuffer;
- (id)outputDataQueue;
- (id)outputStream;
- (bool)outputStreamReady;
- (void)receivedData:(id)arg1;
- (void)resetConnection;
- (void)sendDataChunk;
- (bool)sendObject:(id)arg1;
- (bool)sendObject:(id)arg1 withSendCompletion:(id /* block */)arg2;
- (id)service;
- (void)setCurrentMessageInFlight:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInputBuffer:(id)arg1;
- (void)setInputStream:(id)arg1;
- (void)setOutputBuffer:(id)arg1;
- (void)setOutputDataQueue:(id)arg1;
- (void)setOutputStream:(id)arg1;
- (void)setSecuritySettingsForStream:(id)arg1;
- (void)setService:(id)arg1;
- (void)setupStream:(id)arg1;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;

@end
