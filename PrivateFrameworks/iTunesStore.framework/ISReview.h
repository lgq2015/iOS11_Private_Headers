/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISReview : NSObject <NSCoding, NSCopying> {
    long long  _assetType;
    NSString * _body;
    unsigned long long  _bodyMaxLength;
    NSURL * _infoURL;
    unsigned long long  _itemIdentifier;
    NSString * _nickname;
    bool  _nicknameIsConfirmed;
    unsigned long long  _nicknameMaxLength;
    float  _rating;
    NSURL * _submitURL;
    NSString * _title;
    unsigned long long  _titleMaxLength;
}

@property (nonatomic) long long assetType;
@property (nonatomic, retain) NSString *body;
@property (nonatomic) unsigned long long bodyMaxLength;
@property (nonatomic, readonly) bool hasSavedDraft;
@property (nonatomic, retain) NSURL *infoURL;
@property (nonatomic) unsigned long long itemIdentifier;
@property (nonatomic, retain) NSString *nickname;
@property (nonatomic) bool nicknameIsConfirmed;
@property (nonatomic) unsigned long long nicknameMaxLength;
@property (nonatomic) float rating;
@property (nonatomic, retain) NSURL *submitURL;
@property (nonatomic, retain) NSString *title;
@property (nonatomic) unsigned long long titleMaxLength;

- (id)_draftFileName;
- (id)_draftsDirectoryPath;
- (long long)assetType;
- (id)body;
- (unsigned long long)bodyMaxLength;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasSavedDraft;
- (id)infoURL;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)itemIdentifier;
- (void)loadFromDictionary:(id)arg1;
- (void)mergeWithReview:(id)arg1 preferLocalValues:(bool)arg2;
- (id)nickname;
- (bool)nicknameIsConfirmed;
- (unsigned long long)nicknameMaxLength;
- (float)rating;
- (bool)removeDraft;
- (bool)restoreFromDraft;
- (bool)saveAsDraft;
- (void)setAssetType:(long long)arg1;
- (void)setBody:(id)arg1;
- (void)setBodyMaxLength:(unsigned long long)arg1;
- (void)setInfoURL:(id)arg1;
- (void)setItemIdentifier:(unsigned long long)arg1;
- (void)setNickname:(id)arg1;
- (void)setNicknameIsConfirmed:(bool)arg1;
- (void)setNicknameMaxLength:(unsigned long long)arg1;
- (void)setRating:(float)arg1;
- (void)setSubmitURL:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleMaxLength:(unsigned long long)arg1;
- (id)submitURL;
- (id)title;
- (unsigned long long)titleMaxLength;

@end
