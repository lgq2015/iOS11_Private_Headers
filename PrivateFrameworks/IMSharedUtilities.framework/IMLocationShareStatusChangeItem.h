/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMLocationShareStatusChangeItem : IMItem <IMRemoteObjectCoding, NSCopying, NSSecureCoding> {
    bool  _actionable;
    long long  _direction;
    bool  _expired;
    NSString * _otherCountryCode;
    NSString * _otherHandle;
    NSString * _otherUnformattedID;
    long long  _status;
}

@property (nonatomic) bool actionable;
@property (nonatomic) long long direction;
@property (nonatomic) bool expired;
@property (nonatomic, retain) NSString *otherCountryCode;
@property (nonatomic, retain) NSString *otherHandle;
@property (nonatomic, retain) NSString *otherUnformattedID;
@property (nonatomic) long long status;

// Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities

+ (bool)supportsSecureCoding;

- (bool)actionable;
- (id)copyDictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (long long)direction;
- (void)encodeWithCoder:(id)arg1;
- (bool)expired;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isLastMessageCandidate;
- (id)otherCountryCode;
- (id)otherHandle;
- (id)otherUnformattedID;
- (void)setActionable:(bool)arg1;
- (void)setDirection:(long long)arg1;
- (void)setExpired:(bool)arg1;
- (void)setOtherCountryCode:(id)arg1;
- (void)setOtherHandle:(id)arg1;
- (void)setOtherUnformattedID:(id)arg1;
- (void)setStatus:(long long)arg1;
- (long long)status;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (bool)_hasMessageChatItem;
- (id)_newChatItems;

@end
