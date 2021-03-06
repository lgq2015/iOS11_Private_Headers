/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSCloudTab : NSObject <NSCopying> {
    bool  _isShowingReader;
    bool  _pinned;
    NSDictionary * _readerScrollPositionDictionary;
    NSString * _title;
    NSURL * _url;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentationForUserActivityUserInfo;
@property (nonatomic) bool isShowingReader;
@property (getter=isPinned, nonatomic) bool pinned;
@property (nonatomic, copy) NSDictionary *readerScrollPositionDictionary;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) NSURL *url;
@property (nonatomic, retain) NSUUID *uuid;

+ (id)_dictionaryWithURL:(id)arg1 uuid:(id)arg2 title:(id)arg3 isShowingReader:(bool)arg4 readerScrollPosition:(id)arg5 isPinned:(bool)arg6;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)dictionaryRepresentationForUserActivityUserInfo;
- (bool)hasSameUUIDAndURLAsTab:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionaryFromUserActivityUserInfo:(id)arg1;
- (id)initWithURL:(id)arg1 uuid:(id)arg2 title:(id)arg3 isShowingReader:(bool)arg4 readerScrollPosition:(id)arg5;
- (id)initWithURL:(id)arg1 uuid:(id)arg2 title:(id)arg3 isShowingReader:(bool)arg4 readerScrollPosition:(id)arg5 isPinned:(bool)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isPinned;
- (bool)isShowingReader;
- (id)readerScrollPositionDictionary;
- (void)setIsShowingReader:(bool)arg1;
- (void)setPinned:(bool)arg1;
- (void)setReaderScrollPositionDictionary:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUrl:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)title;
- (id)url;
- (id)uuid;

@end
