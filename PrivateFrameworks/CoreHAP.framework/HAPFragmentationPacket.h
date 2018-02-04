/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPFragmentationPacket : HMFObject {
    NSData * _data;
    unsigned int  _length;
    unsigned int  _offset;
    unsigned short  _transactionIdentifier;
}

@property (nonatomic, readonly, copy) NSData *data;
@property (nonatomic, readonly) unsigned int length;
@property (nonatomic, readonly) unsigned int offset;
@property (nonatomic, readonly) unsigned short transactionIdentifier;

- (void).cxx_destruct;
- (id)data;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1 transactionIdentifier:(unsigned short)arg2 length:(unsigned int)arg3 offset:(unsigned int)arg4;
- (id)initWithFragmentedPacketData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned int)length;
- (unsigned int)offset;
- (id)serialize;
- (id)shortDescription;
- (unsigned short)transactionIdentifier;

@end
