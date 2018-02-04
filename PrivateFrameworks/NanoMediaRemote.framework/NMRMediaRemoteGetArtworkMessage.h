/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

@interface NMRMediaRemoteGetArtworkMessage : NSObject <NMRMediaRemoteProtobufCodable> {
    _NMRMediaRemoteGetArtworkMessage * _protobuf;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDate *serializationDate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (id)initWithProtobufData:(id)arg1;
- (id)protobufData;
- (id)serializationDate;

@end
