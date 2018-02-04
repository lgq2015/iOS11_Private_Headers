/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICSecureKeyDeliveryResponse : NSObject {
    NSData * _contentKeyContextData;
    ICStoreDialogResponse * _dialog;
    NSDate * _renewalDate;
    NSDate * _rentalExpirationDate;
    NSDate * _rentalPlaybackStartDate;
    NSError * _serverError;
    NSData * _serverPlaybackContextData;
}

@property (nonatomic, copy) NSData *contentKeyContextData;
@property (nonatomic, copy) ICStoreDialogResponse *dialog;
@property (nonatomic, copy) NSDate *renewalDate;
@property (nonatomic, copy) NSDate *rentalExpirationDate;
@property (nonatomic, copy) NSDate *rentalPlaybackStartDate;
@property (nonatomic, copy) NSError *serverError;
@property (nonatomic, copy) NSData *serverPlaybackContextData;

- (void).cxx_destruct;
- (id)contentKeyContextData;
- (id)dialog;
- (void)finishAssetResourceLoadingRequest:(id)arg1 withError:(id)arg2;
- (id)renewalDate;
- (id)rentalExpirationDate;
- (id)rentalPlaybackStartDate;
- (id)serverError;
- (id)serverPlaybackContextData;
- (void)setContentKeyContextData:(id)arg1;
- (void)setDialog:(id)arg1;
- (void)setRenewalDate:(id)arg1;
- (void)setRentalExpirationDate:(id)arg1;
- (void)setRentalPlaybackStartDate:(id)arg1;
- (void)setServerError:(id)arg1;
- (void)setServerPlaybackContextData:(id)arg1;

@end
