/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCIntroductoryOffer : NSObject {
    unsigned long long  _numOfPeriods;
    int  _offerType;
    NSString * _priceFormatted;
    NSString * _subscriptionPeriodInISO_8601;
}

@property (nonatomic) unsigned long long numOfPeriods;
@property (nonatomic) int offerType;
@property (nonatomic, copy) NSString *priceFormatted;
@property (nonatomic, copy) NSString *subscriptionPeriodInISO_8601;

- (void).cxx_destruct;
- (id)initWithOfferType:(int)arg1 priceFormatted:(id)arg2 recurringSubscriptionPeriod:(id)arg3 numOfPeriods:(unsigned long long)arg4;
- (unsigned long long)numOfPeriods;
- (int)offerType;
- (id)priceFormatted;
- (void)setNumOfPeriods:(unsigned long long)arg1;
- (void)setOfferType:(int)arg1;
- (void)setPriceFormatted:(id)arg1;
- (void)setSubscriptionPeriodInISO_8601:(id)arg1;
- (id)subscriptionPeriodInISO_8601;

@end
