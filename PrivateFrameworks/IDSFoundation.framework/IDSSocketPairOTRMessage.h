/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSSocketPairOTRMessage : IDSSocketPairMessage {
    NSData * _data;
    bool  _encrypted;
    unsigned long long  _offset;
    unsigned short  _priority;
    unsigned char  _protectionClass;
    unsigned int  _sequenceNumber;
    bool  _shouldEncrypt;
    unsigned short  _streamID;
    unsigned char  _versionNumber;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) bool encrypted;
@property (nonatomic, readonly) unsigned short priority;
@property (nonatomic, readonly) unsigned char protectionClass;
@property (nonatomic, readonly) unsigned int sequenceNumber;
@property (nonatomic, readonly) bool shouldEncrypt;
@property (nonatomic) unsigned short streamID;
@property (nonatomic, readonly) unsigned char versionNumber;

- (void).cxx_destruct;
- (id)_nonHeaderData;
- (unsigned char)command;
- (id)data;
- (id)description;
- (bool)encrypted;
- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;
- (id)initWithVersion:(unsigned char)arg1 encrypted:(bool)arg2 shouldEncrypt:(bool)arg3 protectionClass:(unsigned char)arg4 streamID:(unsigned short)arg5 priority:(unsigned short)arg6 sequenceNumber:(unsigned int)arg7 data:(id)arg8;
- (unsigned short)priority;
- (unsigned char)protectionClass;
- (unsigned int)sequenceNumber;
- (void)setStreamID:(unsigned short)arg1;
- (bool)shouldEncrypt;
- (unsigned short)streamID;
- (unsigned char)versionNumber;

@end
