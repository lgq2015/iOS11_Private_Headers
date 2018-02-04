/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBSectionParameters : NSObject <NSSecureCoding> {
    NSUUID * _UUID;
    NSMutableDictionary * _allSubtypeParameters;
    BBSectionSubtypeParameters * _defaultSubtypeParameters;
    NSString * _displayName;
    bool  _displaysCriticalBulletins;
    BBSectionIcon * _icon;
    unsigned long long  _messageNumberOfLines;
    bool  _orderSectionUsingRecencyDate;
    bool  _showsDateInFloatingLockScreenAlert;
    bool  _showsSubtitle;
    bool  _usesVariableLayout;
}

@property (nonatomic, retain) NSUUID *UUID;
@property (nonatomic, retain) NSMutableDictionary *allSubtypeParameters;
@property (nonatomic, retain) BBSectionSubtypeParameters *defaultSubtypeParameters;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic) bool displaysCriticalBulletins;
@property (nonatomic, retain) BBSectionIcon *icon;
@property (nonatomic) unsigned long long messageNumberOfLines;
@property (nonatomic) bool orderSectionUsingRecencyDate;
@property (nonatomic) bool showsDateInFloatingLockScreenAlert;
@property (nonatomic) bool showsSubtitle;
@property (nonatomic) bool usesVariableLayout;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)allSubtypeParameters;
- (id)allSubtypes;
- (id)defaultSubtypeParameters;
- (id)displayName;
- (bool)displaysCriticalBulletins;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)icon;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)messageNumberOfLines;
- (bool)orderSectionUsingRecencyDate;
- (id)parametersForSubtype:(long long)arg1;
- (id)replacementObjectForCoder:(id)arg1;
- (void)setAllSubtypeParameters:(id)arg1;
- (void)setDefaultSubtypeParameters:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setDisplaysCriticalBulletins:(bool)arg1;
- (void)setIcon:(id)arg1;
- (void)setMessageNumberOfLines:(unsigned long long)arg1;
- (void)setOrderSectionUsingRecencyDate:(bool)arg1;
- (void)setShowsDateInFloatingLockScreenAlert:(bool)arg1;
- (void)setShowsSubtitle:(bool)arg1;
- (void)setUUID:(id)arg1;
- (void)setUsesVariableLayout:(bool)arg1;
- (bool)showsDateInFloatingLockScreenAlert;
- (bool)showsSubtitle;
- (bool)usesVariableLayout;

@end
