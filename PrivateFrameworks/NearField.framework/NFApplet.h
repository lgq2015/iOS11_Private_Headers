/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

@interface NFApplet : NSObject <NSSecureCoding> {
    unsigned char  _activationState;
    NSObject<NFAppletCollection> * _appletCollection;
    bool  _authTransientConfigurable;
    bool  _authTransientSupport;
    NSData * _discretionaryData;
    unsigned char  _family;
    unsigned char  _groupActivationStyle;
    NSString * _groupHeadID;
    NSArray * _groupMemberIDs;
    NSString * _identifier;
    NSData * _identifierAsData;
    bool  _isContainer;
    bool  _isProxy;
    unsigned char  _lifecycleState;
    NSString * _moduleIdentifier;
    NSArray * _multiSEApplicationGroupMemberIDs;
    NSString * _packageIdentifier;
    NSArray * _referencedAppIDs;
    NSString * _seIdentifier;
}

@property (nonatomic, readonly) unsigned char activationState;
@property (nonatomic, readonly) bool authTransientConfigurable;
@property (nonatomic, readonly) bool authTransientSupport;
@property (nonatomic, readonly) NSData *discretionaryData;
@property (nonatomic, readonly) unsigned char family;
@property (nonatomic, readonly) NFApplet *groupHead;
@property (nonatomic, readonly) NSArray *groupMembers;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSData *identifierAsData;
@property (nonatomic, readonly) bool isTypeF;
@property (nonatomic, readonly) unsigned char lifecycleState;
@property (nonatomic, readonly) NSArray *referencedApps;
@property (nonatomic, readonly) NSString *seIdentifier;

+ (bool)supportsSecureCoding;

- (void)_setIsActive:(bool)arg1;
- (unsigned char)activationState;
- (id)appletCollection;
- (id)asDictionary;
- (bool)authTransientConfigurable;
- (bool)authTransientSupport;
- (void)dealloc;
- (id)description;
- (id)discretionaryData;
- (void)encodeWithCoder:(id)arg1;
- (unsigned char)family;
- (unsigned char)groupActivationStyle;
- (id)groupHead;
- (id)groupHeadID;
- (id)groupMemberIDs;
- (id)groupMembers;
- (id)identifier;
- (id)identifierAsData;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isContainer;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToApplet:(id)arg1;
- (bool)isProxy;
- (bool)isTypeF;
- (unsigned char)lifecycleState;
- (id)moduleIdentifier;
- (id)multiSEGroupMemberIDs;
- (id)multiSSDMembers;
- (id)packageIdentifier;
- (id)referencedApps;
- (id)seIdentifier;
- (void)setAppletCollection:(id)arg1;

@end
