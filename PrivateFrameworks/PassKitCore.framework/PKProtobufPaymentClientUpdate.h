/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKProtobufPaymentClientUpdate : PBCodable <NSCopying> {
    struct { 
        unsigned int status : 1; 
    }  _has;
    NSMutableArray * _paymentSummaryItems;
    NSString * _remotePaymentRequestIdentifier;
    NSString * _selectedAID;
    NSMutableArray * _shippingMethods;
    unsigned int  _status;
}

@property (nonatomic, readonly) bool hasRemotePaymentRequestIdentifier;
@property (nonatomic, readonly) bool hasSelectedAID;
@property (nonatomic) bool hasStatus;
@property (nonatomic, retain) NSMutableArray *paymentSummaryItems;
@property (nonatomic, retain) NSString *remotePaymentRequestIdentifier;
@property (nonatomic, retain) NSString *selectedAID;
@property (nonatomic, retain) NSMutableArray *shippingMethods;
@property (nonatomic) unsigned int status;

+ (Class)paymentSummaryItemsType;
+ (Class)shippingMethodsType;

- (void).cxx_destruct;
- (void)addPaymentSummaryItems:(id)arg1;
- (void)addShippingMethods:(id)arg1;
- (void)clearPaymentSummaryItems;
- (void)clearShippingMethods;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRemotePaymentRequestIdentifier;
- (bool)hasSelectedAID;
- (bool)hasStatus;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)paymentSummaryItems;
- (id)paymentSummaryItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)paymentSummaryItemsCount;
- (bool)readFrom:(id)arg1;
- (id)remotePaymentRequestIdentifier;
- (id)selectedAID;
- (void)setHasStatus:(bool)arg1;
- (void)setPaymentSummaryItems:(id)arg1;
- (void)setRemotePaymentRequestIdentifier:(id)arg1;
- (void)setSelectedAID:(id)arg1;
- (void)setShippingMethods:(id)arg1;
- (void)setStatus:(unsigned int)arg1;
- (id)shippingMethods;
- (id)shippingMethodsAtIndex:(unsigned long long)arg1;
- (unsigned long long)shippingMethodsCount;
- (unsigned int)status;
- (void)writeTo:(id)arg1;

@end
