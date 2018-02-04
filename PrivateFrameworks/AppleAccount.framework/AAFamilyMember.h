/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AAFamilyMember : NSObject {
    NSString * _appleID;
    bool  _areParentalControlsEnabled;
    NSString * _firstName;
    NSString * _iTunesNotLinkedMessage;
    bool  _isAskToBuyEnabled;
    bool  _isChild;
    bool  _isMe;
    bool  _isOrganizer;
    bool  _isSharingPurchases;
    NSDate * _joinDate;
    NSString * _lastName;
    NSString * _linkediTunesAppleID;
    NSNumber * _linkediTunesDSID;
    NSNumber * _personID;
    NSString * _personIDHash;
    NSString * _title;
}

@property (nonatomic, copy) NSString *appleID;
@property (nonatomic) bool areParentalControlsEnabled;
@property (nonatomic, copy) NSString *firstName;
@property (nonatomic, copy) NSString *iTunesNotLinkedMessage;
@property (nonatomic) bool isAskToBuyEnabled;
@property (nonatomic) bool isChild;
@property (nonatomic) bool isMe;
@property (nonatomic) bool isOrganizer;
@property (nonatomic) bool isSharingPurchases;
@property (nonatomic, copy) NSDate *joinDate;
@property (nonatomic, copy) NSString *lastName;
@property (nonatomic, copy) NSString *linkediTunesAppleID;
@property (nonatomic, copy) NSNumber *linkediTunesDSID;
@property (nonatomic, copy) NSNumber *personID;
@property (nonatomic, copy) NSString *personIDHash;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)appleID;
- (bool)areParentalControlsEnabled;
- (id)firstName;
- (id)iTunesNotLinkedMessage;
- (bool)isAskToBuyEnabled;
- (bool)isChild;
- (bool)isMe;
- (bool)isOrganizer;
- (bool)isSharingPurchases;
- (id)joinDate;
- (id)lastName;
- (id)linkediTunesAppleID;
- (id)linkediTunesDSID;
- (id)personID;
- (id)personIDHash;
- (void)setAppleID:(id)arg1;
- (void)setAreParentalControlsEnabled:(bool)arg1;
- (void)setFirstName:(id)arg1;
- (void)setITunesNotLinkedMessage:(id)arg1;
- (void)setIsAskToBuyEnabled:(bool)arg1;
- (void)setIsChild:(bool)arg1;
- (void)setIsMe:(bool)arg1;
- (void)setIsOrganizer:(bool)arg1;
- (void)setIsSharingPurchases:(bool)arg1;
- (void)setJoinDate:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setLinkediTunesAppleID:(id)arg1;
- (void)setLinkediTunesDSID:(id)arg1;
- (void)setPersonID:(id)arg1;
- (void)setPersonIDHash:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
