/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBUserPaidSubscriptionStatus : PBCodable <NSCopying> {
    struct { 
        unsigned int paidSubscriptionStatus : 1; 
    }  _has;
    NSString * _paidSubscriptionChannelId;
    int  _paidSubscriptionStatus;
}

@property (nonatomic, readonly) bool hasPaidSubscriptionChannelId;
@property (nonatomic) bool hasPaidSubscriptionStatus;
@property (nonatomic, retain) NSString *paidSubscriptionChannelId;
@property (nonatomic) int paidSubscriptionStatus;

- (void).cxx_destruct;
- (int)StringAsPaidSubscriptionStatus:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPaidSubscriptionChannelId;
- (bool)hasPaidSubscriptionStatus;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)paidSubscriptionChannelId;
- (int)paidSubscriptionStatus;
- (id)paidSubscriptionStatusAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasPaidSubscriptionStatus:(bool)arg1;
- (void)setPaidSubscriptionChannelId:(id)arg1;
- (void)setPaidSubscriptionStatus:(int)arg1;
- (void)writeTo:(id)arg1;

@end
