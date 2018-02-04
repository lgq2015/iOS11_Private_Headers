/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSSocketPairAckMessage : IDSSocketPairMessage {
    unsigned int  _sequenceNumber;
}

@property (nonatomic, readonly) unsigned int sequenceNumber;

- (id)_nonHeaderData;
- (unsigned char)command;
- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;
- (id)initWithSequenceNumber:(unsigned int)arg1;
- (unsigned int)sequenceNumber;

@end
