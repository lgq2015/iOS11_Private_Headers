/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLTag : NSObject <NSCopying> {
    NSString * _entityType;
    NSString * _identifier;
    NSString * _name;
    NSString * _tagString;
    NSURL * _thumbnailImageURL;
}

@property (nonatomic, readonly, copy) SSVMediaSocialPostArtist *artistRepresentation;
@property (nonatomic, copy) NSString *entityType;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *tagString;
@property (nonatomic, copy) NSURL *thumbnailImageURL;

- (void).cxx_destruct;
- (id)artistRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)entityType;
- (id)identifier;
- (id)initWithArtist:(id)arg1;
- (id)initWithTagDictionary:(id)arg1;
- (id)name;
- (void)setEntityType:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setTagString:(id)arg1;
- (void)setThumbnailImageURL:(id)arg1;
- (id)tagString;
- (id)thumbnailImageURL;

@end
