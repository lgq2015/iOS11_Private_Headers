/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

@interface NMRMediaRemoteSetArtworkMessage : NSObject <NMRMediaRemoteProtobufCodable> {
    _NMRMediaRemoteSetArtworkMessage * _protobuf;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jpegArtwork;
@property (nonatomic, readonly) NSData *originalDigest;
@property (nonatomic, readonly) NSDate *serializationDate;
@property (readonly) Class superclass;

+ (id)messageWithJPEGArtwork:(id)arg1 originalDigest:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithJPEGArtwork:(id)arg1 originalDigest:(id)arg2;
- (id)initWithProtobufData:(id)arg1;
- (id)jpegArtwork;
- (id)originalDigest;
- (id)protobufData;
- (id)serializationDate;

@end
