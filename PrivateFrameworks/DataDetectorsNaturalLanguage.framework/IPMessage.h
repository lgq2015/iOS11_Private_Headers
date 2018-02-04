/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataDetectorsNaturalLanguage.framework/DataDetectorsNaturalLanguage
 */

@interface IPMessage : NSObject {
    NSDate * _dateSent;
    NSString * _htmlContent;
    NSString * _identifier;
    bool  _isGroupConversation;
    bool  _isReply;
    bool  _isSenderSignificant;
    bool  _isSent;
    NSMutableDictionary * _keywordsDictionary;
    NSString * _lowercaseSubject;
    NSMutableArray * _messageUnits;
    unsigned long long  _messageUnitsTextLength;
    NSArray * _recipients;
    IPPerson * _sender;
    NSString * _subject;
    NSString * _threadIdentifier;
    NSString * _type;
}

@property (retain) NSDate *dateSent;
@property (retain) NSString *htmlContent;
@property (retain) NSString *identifier;
@property bool isGroupConversation;
@property bool isReply;
@property bool isSenderSignificant;
@property bool isSent;
@property (readonly) NSString *lowercaseSubject;
@property (nonatomic, retain) NSArray *messageUnits;
@property (readonly) unsigned long long messageUnitsTextLength;
@property (retain) NSArray *recipients;
@property (retain) IPPerson *sender;
@property (retain) NSString *subject;
@property (retain) NSString *threadIdentifier;
@property (retain) NSString *type;

- (void).cxx_destruct;
- (void)addDetectedKeyword:(id)arg1 classificationTypeIdentifier:(id)arg2;
- (void)addMessageUnit:(id)arg1;
- (id)dateSent;
- (id)detectedKeywordsDictionary;
- (id)firstHeaderValueForKey:(id)arg1 inHeaders:(id)arg2;
- (id)htmlContent;
- (id)identifier;
- (id)init;
- (id)initWithDateSent:(id)arg1;
- (id)initWithDateSent:(id)arg1 subject:(id)arg2;
- (id)initWithHTMLContent:(id)arg1 emailHeadersDictionary:(id)arg2 dateSent:(id)arg3;
- (id)initWithIdentifier:(id)arg1 subject:(id)arg2 sender:(id)arg3 recipients:(id)arg4 dateSent:(id)arg5;
- (id)initWithIdentifier:(id)arg1 subject:(id)arg2 sender:(id)arg3 recipients:(id)arg4 dateSent:(id)arg5 type:(id)arg6;
- (bool)isGroupConversation;
- (bool)isReply;
- (bool)isSenderSignificant;
- (bool)isSent;
- (id)lowercaseSubject;
- (id)messageUnits;
- (unsigned long long)messageUnitsTextLength;
- (id)recipients;
- (id)sender;
- (void)setDateSent:(id)arg1;
- (void)setHtmlContent:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsGroupConversation:(bool)arg1;
- (void)setIsReply:(bool)arg1;
- (void)setIsSenderSignificant:(bool)arg1;
- (void)setIsSent:(bool)arg1;
- (void)setMessageUnits:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setSender:(id)arg1;
- (void)setSubject:(id)arg1;
- (void)setThreadIdentifier:(id)arg1;
- (void)setType:(id)arg1;
- (id)subject;
- (id)threadIdentifier;
- (id)type;

@end
