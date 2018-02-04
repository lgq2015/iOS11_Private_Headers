/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLAttachment : NSObject <NSCopying> {
    NSString * _UTI;
    MSCLStoreItem * _album;
    NSArray * _artists;
    UIImage * _assetImage;
    NSURL * _assetURL;
    NSString * _attachmentDescription;
    NSString * _categoryName;
    NSData * _data;
    double  _duration;
    bool  _explicitContent;
    MPMediaItem * _mediaItem;
    NSString * _message;
    struct CGSize { 
        double width; 
        double height; 
    }  _pixelSize;
    UIImage * _thumbnailImage;
    double  _thumbnailImageTime;
    NSString * _title;
}

@property (nonatomic, copy) NSString *UTI;
@property (nonatomic, copy) MSCLStoreItem *album;
@property (nonatomic, copy) NSArray *artists;
@property (nonatomic, retain) UIImage *assetImage;
@property (nonatomic, copy) NSURL *assetURL;
@property (nonatomic, copy) NSString *attachmentDescription;
@property (nonatomic, readonly) long long attachmentType;
@property (nonatomic, copy) NSString *categoryName;
@property (nonatomic, copy) NSData *data;
@property (getter=isDownloadable, nonatomic, readonly) bool downloadable;
@property (nonatomic) double duration;
@property (getter=isExplicitContent, nonatomic) bool explicitContent;
@property (nonatomic, retain) MPMediaItem *mediaItem;
@property (nonatomic, copy) NSString *message;
@property (nonatomic) struct CGSize { double x1; double x2; } pixelSize;
@property (nonatomic, retain) UIImage *thumbnailImage;
@property (nonatomic) double thumbnailImageTime;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)UTI;
- (void)_configureWithMediaItem:(id)arg1;
- (id)album;
- (id)artists;
- (id)assetImage;
- (id)assetURL;
- (id)attachmentDescription;
- (long long)attachmentType;
- (id)categoryName;
- (id)copyMediaSocialPostAttachment;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)description;
- (double)duration;
- (id)initWithAssetData:(id)arg1 typeIdentifier:(id)arg2;
- (id)initWithAssetURL:(id)arg1 typeIdentifier:(id)arg2;
- (id)initWithImage:(id)arg1 typeIdentifier:(id)arg2;
- (id)initWithMediaItem:(id)arg1;
- (bool)isDownloadable;
- (bool)isExplicitContent;
- (id)mediaItem;
- (id)message;
- (struct CGSize { double x1; double x2; })pixelSize;
- (void)setAlbum:(id)arg1;
- (void)setArtists:(id)arg1;
- (void)setAssetImage:(id)arg1;
- (void)setAssetURL:(id)arg1;
- (void)setAttachmentDescription:(id)arg1;
- (void)setCategoryName:(id)arg1;
- (void)setData:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setExplicitContent:(bool)arg1;
- (void)setMediaItem:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setPixelSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setThumbnailImage:(id)arg1;
- (void)setThumbnailImageTime:(double)arg1;
- (void)setTitle:(id)arg1;
- (void)setUTI:(id)arg1;
- (id)thumbnailImage;
- (double)thumbnailImageTime;
- (id)title;

@end
