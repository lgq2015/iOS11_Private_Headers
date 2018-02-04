/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKFelicaAppletHistory : NSObject <NSSecureCoding> {
    NSNumber * _SPID;
    NSNumber * _balance;
    bool  _blacklisted;
    NSSet * _existingKeys;
    PKFelicaGreenCarTicket * _greenCarTicket;
    bool  _greenCarTicketUsed;
    NSArray * _historyRecords;
    bool  _inShinkansenStation;
    bool  _inStation;
    PKFelicaShinkansenTicket * _shinkansenTicket;
    bool  _shinkansenTicketActive;
    long long  _source;
    long long  _type;
}

@property (nonatomic, readonly, copy) NSNumber *SPID;
@property (nonatomic, readonly, copy) NSNumber *balance;
@property (getter=isBlacklisted, nonatomic, readonly) bool blacklisted;
@property (nonatomic, readonly) PKFelicaGreenCarTicket *greenCarTicket;
@property (getter=isGreenCarTicketUsed, nonatomic, readonly) bool greenCarTicketUsed;
@property (nonatomic, readonly, copy) NSArray *historyRecords;
@property (getter=isInShinkansenStation, nonatomic, readonly) bool inShinkansenStation;
@property (getter=isInStation, nonatomic, readonly) bool inStation;
@property (nonatomic, readonly, copy) PKFelicaShinkansenTicket *shinkansenTicket;
@property (getter=isShinkansenTicketActive, nonatomic, readonly) bool shinkansenTicketActive;
@property (nonatomic, readonly) long long source;
@property (nonatomic, readonly) long long type;

+ (long long)appletTypeForDictionary:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)SPID;
- (id)balance;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)greenCarTicket;
- (id)historyRecords;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 source:(long long)arg2;
- (bool)isBlacklisted;
- (bool)isGreenCarTicketUsed;
- (bool)isInShinkansenStation;
- (bool)isInStation;
- (bool)isShinkansenTicketActive;
- (void)sanitizeValuesWithState:(id)arg1;
- (id)shinkansenTicket;
- (long long)source;
- (long long)type;

@end
