/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDGetContentAuthTokensForPutURLRequest : CKDURLRequest {
    CKDAssetTokenRequest * _assetTokenRequest;
    NSDictionary * _headers;
    NSMapTable * _transactionStateByRequestIDs;
    bool  _useEncryption;
}

@property (nonatomic, retain) CKDAssetTokenRequest *assetTokenRequest;
@property (nonatomic, retain) NSDictionary *headers;
@property (nonatomic, retain) NSMapTable *transactionStateByRequestIDs;
@property (nonatomic) bool useEncryption;

- (void).cxx_destruct;
- (id)assetTokenRequest;
- (id)generateRequestOperations;
- (id)headers;
- (id)initWithAssetTokenRequest:(id)arg1 headers:(id)arg2;
- (int)operationType;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (void)setAssetTokenRequest:(id)arg1;
- (void)setHeaders:(id)arg1;
- (void)setTransactionStateByRequestIDs:(id)arg1;
- (void)setUseEncryption:(bool)arg1;
- (id)transactionStateByRequestIDs;
- (bool)useEncryption;

@end
