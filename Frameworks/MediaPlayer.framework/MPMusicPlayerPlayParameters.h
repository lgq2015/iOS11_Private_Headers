/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMusicPlayerPlayParameters : NSObject <NSSecureCoding> {
    NSDictionary * _dictionary;
    MPIdentifierSet * _identifiers;
    NSString * _itemKind;
    bool  _libraryContent;
}

@property (nonatomic, readonly, copy) NSDictionary *dictionary;
@property (nonatomic, readonly, copy) MPIdentifierSet *identifiers;
@property (nonatomic, readonly, copy) NSString *itemKind;
@property (getter=isLibraryContent, nonatomic, readonly) bool libraryContent;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)identifiers;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isLibraryContent;
- (id)itemKind;

@end
