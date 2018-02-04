/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
 */

@interface NFCISO15693Tag : NFCTag <NFCISO15693Tag>

@property (getter=isAvailable, nonatomic, readonly) bool available;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long icManufacturerCode;
@property (nonatomic, readonly, copy) NSData *icSerialNumber;
@property (nonatomic, readonly, copy) NSData *identifier;
@property (nonatomic, readonly) <NFCReaderSession> *session;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long type;

+ (bool)supportsSecureCoding;

- (id)_parseResponseData:(id)arg1 outError:(id*)arg2;
- (unsigned long long)_parseResponseErrorWithData:(id)arg1;
- (bool)_transceiveWithData:(id)arg1 receivedData:(id*)arg2 commandConfig:(id)arg3 error:(id*)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)icManufacturerCode;
- (id)icSerialNumber;
- (id)identifier;
- (id)initWithSession:(id)arg1 tag:(id)arg2;
- (void)readMultipleBlocksWithConfiguration:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)sendCustomCommandWithConfiguration:(id)arg1 completionHandler:(id /* block */)arg2;

@end
