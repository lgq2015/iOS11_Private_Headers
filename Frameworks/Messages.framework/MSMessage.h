/* made by EzioChiu
   Image: /System/Library/Frameworks/Messages.framework/Messages
 */

@interface MSMessage : NSObject <NSCopying, NSSecureCoding> {
    NSURL * _URL;
    NSData * __data;
    NSString * _accessibilityLabel;
    NSString * _breadcrumbText;
    NSError * _error;
    bool  _isFromMe;
    MSMessageLayout * _layout;
    bool  _pending;
    bool  _requiresValidation;
    NSUUID * _senderParticipantIdentifier;
    MSSession * _session;
    bool  _shouldExpire;
    NSString * _statusText;
    NSString * _summaryText;
}

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic, copy) NSData *_data;
@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic, copy) NSString *breadcrumbText;
@property (nonatomic, copy) NSError *error;
@property (nonatomic) bool isFromMe;
@property (nonatomic, copy) MSMessageLayout *layout;
@property (getter=isPending, nonatomic) bool pending;
@property (nonatomic) bool requiresValidation;
@property (nonatomic, retain) NSUUID *senderParticipantIdentifier;
@property (nonatomic, readonly) MSSession *session;
@property (nonatomic) bool shouldExpire;
@property (nonatomic, copy) NSString *statusText;
@property (nonatomic, copy) NSString *summaryText;

// Image: /System/Library/Frameworks/Messages.framework/Messages

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (id)_data;
- (void)_mergeSanitizedDataFromMessage:(id)arg1;
- (void)_sanitize;
- (id)_sanitizedCopy;
- (id)_shallowCopy;
- (id)accessibilityLabel;
- (id)breadcrumbText;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSession:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isFromMe;
- (bool)isPending;
- (id)layout;
- (bool)requiresValidation;
- (id)senderParticipantIdentifier;
- (id)session;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setBreadcrumbText:(id)arg1;
- (void)setError:(id)arg1;
- (void)setIsFromMe:(bool)arg1;
- (void)setLayout:(id)arg1;
- (void)setPending:(bool)arg1;
- (void)setRequiresValidation:(bool)arg1;
- (void)setSenderParticipantIdentifier:(id)arg1;
- (void)setShouldExpire:(bool)arg1;
- (void)setStatusText:(id)arg1;
- (void)setSummaryText:(id)arg1;
- (void)setURL:(id)arg1;
- (void)set_data:(id)arg1;
- (bool)shouldExpire;
- (id)statusText;
- (id)summaryText;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

- (id)peerPaymentMessage;

@end
