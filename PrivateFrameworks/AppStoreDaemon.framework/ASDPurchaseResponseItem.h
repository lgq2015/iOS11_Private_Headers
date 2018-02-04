/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

@interface ASDPurchaseResponseItem : NSObject <NSSecureCoding> {
    bool  _cancelsPurchaseBatch;
    NSError * _error;
    ASDPurchase * _purchase;
    double  _requestStartTime;
    double  _responseEndTime;
    NSDictionary * _responseMetrics;
    double  _responseStartTime;
    NSArray * _results;
    bool  _success;
    NSDictionary * _transationIDs;
}

@property (nonatomic, readonly) bool cancelsPurchaseBatch;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly, copy) ASDPurchase *purchase;
@property (nonatomic) double requestStartTime;
@property (nonatomic) double responseEndTime;
@property (nonatomic, readonly) NSDictionary *responseMetrics;
@property (nonatomic) double responseStartTime;
@property (nonatomic, readonly) NSArray *results;
@property (nonatomic, readonly) bool success;
@property (nonatomic, readonly) NSDictionary *transationIDs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setError:(id)arg1;
- (void)_setPurchase:(id)arg1;
- (void)_setResponseMetrics:(id)arg1;
- (void)_setTransactionIDs:(id)arg1;
- (bool)cancelsPurchaseBatch;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithResults:(id)arg1;
- (id)purchase;
- (double)requestStartTime;
- (double)responseEndTime;
- (id)responseMetrics;
- (double)responseStartTime;
- (id)results;
- (void)setRequestStartTime:(double)arg1;
- (void)setResponseEndTime:(double)arg1;
- (void)setResponseStartTime:(double)arg1;
- (bool)success;
- (id)transactionIdentifierForItemIdentifier:(long long)arg1;
- (id)transationIDs;

@end
