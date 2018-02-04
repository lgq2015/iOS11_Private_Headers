/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentDataItem : NSObject <PKPaymentValidating> {
    PKPaymentAuthorizationDataModel * _model;
    long long  _status;
    long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *errors;
@property (readonly) unsigned long long hash;
@property (nonatomic) PKPaymentAuthorizationDataModel *model;
@property (getter=isRejected, nonatomic, readonly) bool rejected;
@property (nonatomic) long long status;
@property (readonly) Class superclass;
@property (nonatomic) long long type;

+ (long long)dataType;
+ (bool)supportsMultipleItems;

- (void).cxx_destruct;
- (id)errors;
- (id)initWithModel:(id)arg1;
- (bool)isRejected;
- (bool)isValidWithError:(id*)arg1;
- (id)model;
- (void)setModel:(id)arg1;
- (void)setStatus:(long long)arg1;
- (void)setType:(long long)arg1;
- (long long)status;
- (long long)type;

@end
