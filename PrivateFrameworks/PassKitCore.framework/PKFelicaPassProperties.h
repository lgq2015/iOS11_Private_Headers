/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKFelicaPassProperties : NSObject <NSCopying, NSSecureCoding> {
    NSString * _appletFormat;
    bool  _blacklisted;
    NSString * _currencyCode;
    NSString * _greenCarDestinationStation;
    NSString * _greenCarOriginStation;
    bool  _greenCarTicketUsed;
    NSDateComponents * _greenCarValidityStartDate;
    bool  _hasGreenCarTicket;
    bool  _hasShinkansenTicket;
    bool  _inShinkansenStation;
    bool  _inStation;
    NSDateComponents * _shinkansenArrivalTime;
    NSNumber * _shinkansenCarNumber;
    NSDateComponents * _shinkansenDepartureTime;
    NSString * _shinkansenDestinationStation;
    NSString * _shinkansenOriginStation;
    NSNumber * _shinkansenSeatNumber;
    NSNumber * _shinkansenSeatRow;
    NSDateComponents * _shinkansenSecondaryArrivalTime;
    NSNumber * _shinkansenSecondaryCarNumber;
    NSDateComponents * _shinkansenSecondaryDepartureTime;
    NSString * _shinkansenSecondaryDestinationStation;
    NSString * _shinkansenSecondaryOriginStation;
    NSNumber * _shinkansenSecondarySeatNumber;
    NSNumber * _shinkansenSecondarySeatRow;
    NSString * _shinkansenSecondaryTrainName;
    bool  _shinkansenTicketActive;
    NSString * _shinkansenTrainName;
    NSDateComponents * _shinkansenValidityStartDate;
    NSNumber * _shinkansenValidityTerm;
    NSDecimalNumber * _transitBalance;
}

@property (nonatomic, copy) NSString *appletFormat;
@property (getter=isBlacklisted, nonatomic) bool blacklisted;
@property (nonatomic, copy) NSString *currencyCode;
@property (nonatomic, copy) NSString *greenCarDestinationStation;
@property (nonatomic, copy) NSString *greenCarOriginStation;
@property (getter=isGreenCarTicketUsed, nonatomic) bool greenCarTicketUsed;
@property (nonatomic, copy) NSDateComponents *greenCarValidityStartDate;
@property (nonatomic) bool hasGreenCarTicket;
@property (nonatomic) bool hasShinkansenTicket;
@property (getter=isInShinkansenStation, nonatomic) bool inShinkansenStation;
@property (getter=isInStation, nonatomic) bool inStation;
@property (nonatomic, copy) NSDateComponents *shinkansenArrivalTime;
@property (nonatomic, copy) NSNumber *shinkansenCarNumber;
@property (nonatomic, copy) NSDateComponents *shinkansenDepartureTime;
@property (nonatomic, copy) NSString *shinkansenDestinationStation;
@property (nonatomic, copy) NSString *shinkansenOriginStation;
@property (nonatomic, copy) NSNumber *shinkansenSeatNumber;
@property (nonatomic, copy) NSNumber *shinkansenSeatRow;
@property (nonatomic, copy) NSDateComponents *shinkansenSecondaryArrivalTime;
@property (nonatomic, copy) NSNumber *shinkansenSecondaryCarNumber;
@property (nonatomic, copy) NSDateComponents *shinkansenSecondaryDepartureTime;
@property (nonatomic, copy) NSString *shinkansenSecondaryDestinationStation;
@property (nonatomic, copy) NSString *shinkansenSecondaryOriginStation;
@property (nonatomic, copy) NSNumber *shinkansenSecondarySeatNumber;
@property (nonatomic, copy) NSNumber *shinkansenSecondarySeatRow;
@property (nonatomic, copy) NSString *shinkansenSecondaryTrainName;
@property (getter=isShinkansenTicketActive, nonatomic) bool shinkansenTicketActive;
@property (nonatomic, copy) NSString *shinkansenTrainName;
@property (nonatomic, copy) NSDateComponents *shinkansenValidityStartDate;
@property (nonatomic, copy) NSNumber *shinkansenValidityTerm;
@property (nonatomic, copy) NSDecimalNumber *transitBalance;

+ (id)passPropertiesForPass:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_stringForRow:(id)arg1 seat:(id)arg2;
- (id)appletFormat;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currencyCode;
- (id)decimalTransitBalance;
- (id)displayableShinkansenSeat;
- (id)displayableShinkansenSecondarySeat;
- (id)displayableTransitBalance;
- (void)encodeWithCoder:(id)arg1;
- (id)greenCarDestinationStation;
- (id)greenCarOriginStation;
- (id)greenCarValidityStartDate;
- (bool)hasGreenCarTicket;
- (bool)hasShinkansenTicket;
- (id)initWithCoder:(id)arg1;
- (id)initWithFelicaAppletState:(id)arg1 paymentApplication:(id)arg2;
- (bool)isBlacklisted;
- (bool)isGreenCarTicketUsed;
- (bool)isInShinkansenStation;
- (bool)isInStation;
- (bool)isShinkansenTicketActive;
- (void)setAppletFormat:(id)arg1;
- (void)setBlacklisted:(bool)arg1;
- (void)setCurrencyCode:(id)arg1;
- (void)setGreenCarDestinationStation:(id)arg1;
- (void)setGreenCarOriginStation:(id)arg1;
- (void)setGreenCarTicketUsed:(bool)arg1;
- (void)setGreenCarValidityStartDate:(id)arg1;
- (void)setHasGreenCarTicket:(bool)arg1;
- (void)setHasShinkansenTicket:(bool)arg1;
- (void)setInShinkansenStation:(bool)arg1;
- (void)setInStation:(bool)arg1;
- (void)setShinkansenArrivalTime:(id)arg1;
- (void)setShinkansenCarNumber:(id)arg1;
- (void)setShinkansenDepartureTime:(id)arg1;
- (void)setShinkansenDestinationStation:(id)arg1;
- (void)setShinkansenOriginStation:(id)arg1;
- (void)setShinkansenSeatNumber:(id)arg1;
- (void)setShinkansenSeatRow:(id)arg1;
- (void)setShinkansenSecondaryArrivalTime:(id)arg1;
- (void)setShinkansenSecondaryCarNumber:(id)arg1;
- (void)setShinkansenSecondaryDepartureTime:(id)arg1;
- (void)setShinkansenSecondaryDestinationStation:(id)arg1;
- (void)setShinkansenSecondaryOriginStation:(id)arg1;
- (void)setShinkansenSecondarySeatNumber:(id)arg1;
- (void)setShinkansenSecondarySeatRow:(id)arg1;
- (void)setShinkansenSecondaryTrainName:(id)arg1;
- (void)setShinkansenTicketActive:(bool)arg1;
- (void)setShinkansenTrainName:(id)arg1;
- (void)setShinkansenValidityStartDate:(id)arg1;
- (void)setShinkansenValidityTerm:(id)arg1;
- (void)setTransitBalance:(id)arg1;
- (id)shinkansenArrivalTime;
- (id)shinkansenCarNumber;
- (id)shinkansenDepartureTime;
- (id)shinkansenDestinationStation;
- (id)shinkansenOriginStation;
- (id)shinkansenSeatNumber;
- (id)shinkansenSeatRow;
- (id)shinkansenSecondaryArrivalTime;
- (id)shinkansenSecondaryCarNumber;
- (id)shinkansenSecondaryDepartureTime;
- (id)shinkansenSecondaryDestinationStation;
- (id)shinkansenSecondaryOriginStation;
- (id)shinkansenSecondarySeatNumber;
- (id)shinkansenSecondarySeatRow;
- (id)shinkansenSecondaryTrainName;
- (id)shinkansenTrainName;
- (id)shinkansenValidityStartDate;
- (id)shinkansenValidityTerm;
- (id)transitBalance;

@end
