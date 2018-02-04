/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
 */

@interface DCConfiguration : NSObject {
    NSDate * _expiry;
    NSDate * _fetchDate;
    bool  _hasValidSignature;
}

@property (nonatomic, copy) NSDate *expiry;
@property (nonatomic, copy) NSDate *fetchDate;
@property (nonatomic) bool hasValidSignature;

- (void).cxx_destruct;
- (id)expiry;
- (id)fetchDate;
- (bool)hasValidSignature;
- (void)setExpiry:(id)arg1;
- (void)setFetchDate:(id)arg1;
- (void)setHasValidSignature:(bool)arg1;

@end
