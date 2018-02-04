/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface STSiriMessage : STSiriModelObject {
    NSURL * _attachmentURL;
    NSString * _bodyText;
    NSString * _chatIdentifier;
    NSString * _effect;
    NSString * _groupName;
    NSString * _groupNameId;
    bool  _outbound;
    NSArray * _recipientAddresses;
    NSDate * _sendDate;
    STContactAddress * _senderAddress;
    NSString * _senderInternalGUID;
    NSString * _subjectText;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_aceContextObjectValue;
- (void)_setSenderInternalGUID:(id)arg1;
- (id)attachmentURL;
- (id)bodyText;
- (id)chatIdentifier;
- (id)effect;
- (void)encodeWithCoder:(id)arg1;
- (id)groupName;
- (id)groupNameId;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isOutbound;
- (id)recipientAddresses;
- (id)sendDate;
- (id)senderAddress;
- (id)senderInternalGUID;
- (void)setAttachmentURL:(id)arg1;
- (void)setBodyText:(id)arg1;
- (void)setChatIdentifier:(id)arg1;
- (void)setEffect:(id)arg1;
- (void)setGroupName:(id)arg1;
- (void)setGroupNameId:(id)arg1;
- (void)setOutbound:(bool)arg1;
- (void)setRecipientAddresses:(id)arg1;
- (void)setSendDate:(id)arg1;
- (void)setSenderAddress:(id)arg1;
- (void)setSubjectText:(id)arg1;
- (id)subjectText;

@end
