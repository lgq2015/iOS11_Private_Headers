/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDProtobufStreamWriter : NSObject <NSStreamDelegate> {
    NSMutableArray * _allObjects;
    NSFileHandle * _binaryLogFileHandle;
    unsigned long long  _bufferSize;
    NSData * _curData;
    unsigned long long  _curDataPos;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _hasInitedCompression;
    bool  _haveFinishedCompression;
    bool  _haveFinishedStreaming;
    bool  _haveFlushedZlib;
    NSInputStream * _inputStream;
    id /* block */  _logRequestObjectBlock;
    NSOutputStream * _outputStream;
    bool  _shouldCompress;
    <CKDProtobufMessageSigningDelegate> * _signingDelegate;
    struct z_stream_s { 
        char *next_in; 
        unsigned int avail_in; 
        unsigned long long total_in; 
        char *next_out; 
        unsigned int avail_out; 
        unsigned long long total_out; 
        char *msg; 
        struct internal_state {} *state; 
        int (*zalloc)(); 
        int (*zfree)(); 
        void *opaque; 
        int data_type; 
        unsigned long long adler; 
        unsigned long long reserved; 
    }  _zlibStream;
}

@property (nonatomic, retain) NSFileHandle *binaryLogFileHandle;
@property (nonatomic) unsigned long long bufferSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasInitedCompression;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool haveFinishedCompression;
@property bool haveFinishedStreaming;
@property (nonatomic, copy) id /* block */ logRequestObjectBlock;
@property (nonatomic) bool shouldCompress;
@property (nonatomic) <CKDProtobufMessageSigningDelegate> *signingDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_compressBodyData:(id)arg1 shouldFlush:(bool)arg2;
- (id)_dataForMessage:(id)arg1;
- (bool)_finishStreaming:(id)arg1;
- (id)_prepareMescalSignature:(id)arg1;
- (void)_prepareObjectForStreaming:(id)arg1 shouldSign:(bool)arg2;
- (long long)_streamNextObject:(id)arg1;
- (void)_tearDownOutputStream;
- (long long)_writeDataToStream:(id)arg1;
- (id)binaryLogFileHandle;
- (unsigned long long)bufferSize;
- (void)dealloc;
- (bool)hasInitedCompression;
- (bool)haveFinishedCompression;
- (bool)haveFinishedStreaming;
- (id)initWithCompression:(bool)arg1;
- (id /* block */)logRequestObjectBlock;
- (id)open;
- (void)setBinaryLogFileHandle:(id)arg1;
- (void)setBufferSize:(unsigned long long)arg1;
- (void)setHasInitedCompression:(bool)arg1;
- (void)setHaveFinishedCompression:(bool)arg1;
- (void)setHaveFinishedStreaming:(bool)arg1;
- (void)setLogRequestObjectBlock:(id /* block */)arg1;
- (void)setShouldCompress:(bool)arg1;
- (void)setSigningDelegate:(id)arg1;
- (void)setStreamedObjects:(id)arg1;
- (bool)shouldCompress;
- (id)signingDelegate;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)tearDown;

@end
