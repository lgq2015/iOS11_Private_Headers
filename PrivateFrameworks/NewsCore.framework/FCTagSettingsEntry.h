/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCTagSettingsEntry : NSObject {
    NSString * _accessToken;
    NSNumber * _fontMultiplier;
    NSString * _identifier;
    NSString * _tagID;
    bool  _webAccessOptIn;
}

@property (nonatomic, readonly, copy) NSString *accessToken;
@property (nonatomic, readonly) CKRecord *asCKRecord;
@property (nonatomic, readonly, copy) NSNumber *fontMultiplier;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *tagID;
@property (nonatomic, readonly) bool webAccessOptIn;

- (void).cxx_destruct;
- (id)accessToken;
- (id)asCKRecord;
- (id)dictionaryRepresentation;
- (id)fontMultiplier;
- (id)identifier;
- (id)initWithEntryID:(id)arg1 dictionaryRepresentation:(id)arg2;
- (id)initWithEntryID:(id)arg1 tagID:(id)arg2 fontMultiplier:(id)arg3 accessToken:(id)arg4 webAccessOptIn:(bool)arg5;
- (id)tagID;
- (bool)webAccessOptIn;

@end
