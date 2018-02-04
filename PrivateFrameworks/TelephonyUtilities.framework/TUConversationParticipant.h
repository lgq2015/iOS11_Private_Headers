/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUConversationParticipant : NSObject <NSCopying, NSSecureCoding> {
    TUHandle * _handle;
    NSString * _identifier;
    bool  _muted;
}

@property (nonatomic, readonly, copy) TUHandle *handle;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (getter=isMuted, nonatomic) bool muted;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)handle;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 handle:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToParticipant:(id)arg1;
- (bool)isMuted;
- (void)setMuted:(bool)arg1;

@end
