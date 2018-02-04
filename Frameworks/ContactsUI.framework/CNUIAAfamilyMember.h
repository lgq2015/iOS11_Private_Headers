/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNUIAAfamilyMember : NSObject <NSSecureCoding> {
    NSString * _appleID;
    NSString * _firstName;
    bool  _isMe;
    NSString * _lastName;
}

@property (nonatomic, copy) NSString *appleID;
@property (nonatomic, copy) NSString *firstName;
@property (nonatomic) bool isMe;
@property (nonatomic, copy) NSString *lastName;

+ (id)cnuiFamilyMemberWithAAFamilyMember:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appleID;
- (void)encodeWithCoder:(id)arg1;
- (id)firstName;
- (id)initWithCoder:(id)arg1;
- (bool)isMe;
- (id)lastName;
- (void)setAppleID:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setIsMe:(bool)arg1;
- (void)setLastName:(id)arg1;

@end
