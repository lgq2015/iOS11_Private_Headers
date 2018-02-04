/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLExtractedBatch : NSObject <NSSecureCoding> {
    CPLChangeBatch * _batch;
    bool  _batchCanLowerQuota;
    NSString * _clientCacheIdentifier;
    bool  _full;
    NSMutableSet * _mutableUntrustableIndentifiers;
    NSMutableDictionary * _mutableUploadIdentifiers;
    NSSet * _untrustableIdentifiers;
    NSMutableDictionary * _uploadIdentifiers;
}

@property (nonatomic, readonly) CPLChangeBatch *batch;
@property (nonatomic, readonly) bool batchCanLowerQuota;
@property (nonatomic, copy) NSString *clientCacheIdentifier;
@property (getter=isFull, nonatomic) bool full;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addChange:(id)arg1;
- (id)batch;
- (bool)batchCanLowerQuota;
- (id)clientCacheIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isFull;
- (void)setClientCacheIdentifier:(id)arg1;
- (void)setFull:(bool)arg1;
- (id)uploadIdentifierForChange:(id)arg1;
- (id)uploadIdentifiers;

@end
