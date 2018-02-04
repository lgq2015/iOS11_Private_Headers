/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSSocketPairResourceTransferReceiver : NSObject {
    bool  _compressed;
    bool  _done;
    bool  _expectsPeerResponse;
    NSDate * _expiryDate;
    int  _fileDescriptor;
    bool  _isResuming;
    NSString * _messageUUID;
    NSDictionary * _metadata;
    NSString * _peerResponseIdentifier;
    NSString * _resourcePath;
    bool  _resumeResourceTransfers;
    unsigned int  _sequenceNumber;
    unsigned short  _streamID;
    unsigned long long  _totalBytesExpected;
    unsigned long long  _totalBytesReceived;
    bool  _wantsAppAck;
}

@property (nonatomic, readonly) NSDate *expiryDate;
@property (nonatomic, readonly) NSString *messageUUID;
@property (nonatomic, readonly) unsigned long long totalBytesReceived;

+ (id)incomingFilePath;
+ (id)incomingFilePathForMessageUUID:(id)arg1;

- (void).cxx_destruct;
- (void)abortTransfer;
- (bool)appendMessage:(id)arg1 receiverError:(unsigned char*)arg2;
- (void)dealloc;
- (id)expiryDate;
- (id)finalizedMessageDictionaryIfDone;
- (id)initWithMessage:(id)arg1 resumeResourceTransfers:(bool)arg2 receiverError:(unsigned char*)arg3;
- (id)messageUUID;
- (unsigned long long)totalBytesReceived;
- (bool)writeResourceData:(id)arg1;
- (bool)writeResourceData:(id)arg1 resourceByteOffset:(unsigned long long)arg2;

@end
