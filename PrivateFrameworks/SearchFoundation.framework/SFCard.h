/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFCard : NSObject <CRCard, NSCopying, NSSecureCoding, SFCard> {
    NSString * _cardId;
    NSArray * _cardSections;
    NSString * _contextReferenceIdentifier;
    NSArray * _dismissalCommands;
    NSData * _entityIdentifier;
    NSArray * _entityProtobufMessages;
    NSString * _fbr;
    bool  _flexibleSectionOrder;
    struct { 
        unsigned int type : 1; 
        unsigned int source : 1; 
        unsigned int queryId : 1; 
        unsigned int flexibleSectionOrder : 1; 
    }  _has;
    NSData * _intentMessageData;
    NSString * _intentMessageName;
    NSData * _intentResponseMessageData;
    NSString * _intentResponseMessageName;
    NSData * _originalCardData;
    unsigned long long  _queryId;
    NSString * _resultIdentifier;
    int  _source;
    NSString * _title;
    int  _type;
    NSURL * _urlValue;
}

@property (nonatomic, readonly) bool asynchronous;
@property (nonatomic, readonly) SFCard *backingCard;
@property (nonatomic, copy) NSString *cardId;
@property (nonatomic, readonly) NSArray *cardSections;
@property (copy) NSArray *cardSections;
@property (nonatomic, copy) NSString *contextReferenceIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSArray *dismissalCommands;
@property (nonatomic, copy) NSArray *dismissalCommands;
@property (nonatomic, copy) NSData *entityIdentifier;
@property (nonatomic, copy) NSArray *entityProtobufMessages;
@property (nonatomic, copy) NSString *fbr;
@property (nonatomic, readonly) bool flexibleSectionOrder;
@property (nonatomic) bool flexibleSectionOrder;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSData *intentMessageData;
@property (nonatomic, copy) NSString *intentMessageName;
@property (nonatomic, copy) NSData *intentResponseMessageData;
@property (nonatomic, copy) NSString *intentResponseMessageName;
@property (nonatomic, readonly) NSSet *interactions;
@property (nonatomic, readonly) NSData *jsonData;
@property (getter=_originalCardData, setter=_setOriginalCardData:, nonatomic, copy) NSData *originalCardData;
@property (nonatomic) unsigned long long queryId;
@property (nonatomic, copy) NSString *resultIdentifier;
@property (nonatomic) int source;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) int type;
@property (nonatomic, copy) NSURL *urlValue;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_originalCardData;
- (void)_setOriginalCardData:(id)arg1;
- (id)cardId;
- (id)cardSections;
- (id)contextReferenceIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)dismissalCommands;
- (void)encodeWithCoder:(id)arg1;
- (id)entityIdentifier;
- (id)entityProtobufMessages;
- (id)fbr;
- (bool)flexibleSectionOrder;
- (bool)hasFlexibleSectionOrder;
- (bool)hasQueryId;
- (bool)hasSource;
- (bool)hasType;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (id)intentMessageData;
- (id)intentMessageName;
- (id)intentResponseMessageData;
- (id)intentResponseMessageName;
- (id)jsonData;
- (void)loadCardSectionsWithCompletionAndErrorHandler:(id /* block */)arg1;
- (void)loadCardSectionsWithCompletionHandler:(id /* block */)arg1;
- (unsigned long long)queryId;
- (id)resultIdentifier;
- (void)setCardId:(id)arg1;
- (void)setCardSections:(id)arg1;
- (void)setContextReferenceIdentifier:(id)arg1;
- (void)setDismissalCommands:(id)arg1;
- (void)setEntityIdentifier:(id)arg1;
- (void)setEntityProtobufMessages:(id)arg1;
- (void)setFbr:(id)arg1;
- (void)setFlexibleSectionOrder:(bool)arg1;
- (void)setIntentMessageData:(id)arg1;
- (void)setIntentMessageName:(id)arg1;
- (void)setIntentResponseMessageData:(id)arg1;
- (void)setIntentResponseMessageName:(id)arg1;
- (void)setQueryId:(unsigned long long)arg1;
- (void)setResultIdentifier:(id)arg1;
- (void)setSource:(int)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(int)arg1;
- (void)setUrlValue:(id)arg1;
- (int)source;
- (id)title;
- (int)type;
- (id)urlValue;

// Image: /System/Library/PrivateFrameworks/Cards.framework/Cards

+ (id)_interactionsByIntentDataHashes;

- (id)_interactionDataKey;
- (bool)asynchronous;
- (id)backingCard;
- (id)interaction;
- (id)interactions;
- (void)loadCardWithCompletion:(id /* block */)arg1;

@end
